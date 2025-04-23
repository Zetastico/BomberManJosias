// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Bloque.h"
#include "BloqueLadrillo.h"
#include "BloqueBurbuja.h"
#include "BloqueMadera.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloquePiedra.h"
#include "BloqueCeramica.h"
#include "BloqueArena.h"
#include "BloqueVidrio.h"
#include "BloqueCesped.h"

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Red, TEXT("Cargando el juego"));
	
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];
			if (valor != 0)
			{
				FVector posicionBloque = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, 0.0f);
				SpawnBloque(posicionBloque, valor);
			}
		}
	}
	//GetWorld()->GetTimerManager().SetTimer(TimerCambioBloques, this, &ABomberMan_012025GameMode::ReemplazarTodosLosBloquesInteriores, 5.0f, true);
	//GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberMan_012025GameMode::DestruirBloque, 2.0f, false);

	SpawnMapa();
	//SpawnMapa1();
	PosicionarJugadorAleatoriamente();
	/*
	// Cambiar la posición inicial del jugador
	ACharacter* Jugador = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (Jugador)
	{
		// Ejemplo de posicionamiento al centro del mapa
		int columnaCentral = 14;
		int filaCentral = 14;
		FVector centro = FVector(
			XInicial + columnaCentral * AnchoBloque,
			YInicial + filaCentral * LargoBloque,
			200.0f // Altura
		);
		Jugador->SetActorLocation(centro);
	}
	*/
	
	//GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberMan_012025GameMode::DestruirBloque, 5.0f, true);
}



void ABomberMan_012025GameMode::PosicionarJugadorAleatoriamente()
{
	TArray<FIntPoint> PosicionesCercaDelBorde;

	// Buscar bloques de madera (valor 6) cerca del borde
	int32 NumFilas = aMapaBloques.Num();
	int32 NumColumnas = aMapaBloques[0].Num();

	for (int32 fila = 1; fila < NumFilas - 1; ++fila)
	{
		for (int32 columna = 1; columna < NumColumnas - 1; ++columna)
		{
			// Si es un bloque de madera
			if (aMapaBloques[fila][columna] == 6)
			{
				// Calcular distancia mínima al borde
				int32 DistanciaSuperior = fila;
				int32 DistanciaInferior = NumFilas - 1 - fila;
				int32 DistanciaIzquierda = columna;
				int32 DistanciaDerecha = NumColumnas - 1 - columna;

				int32 DistanciaMinima = FMath::Min3(
					FMath::Min(DistanciaSuperior, DistanciaInferior),
					DistanciaIzquierda,
					DistanciaDerecha
				);

				// Si la distancia mínima es baja (por ejemplo <= 3 bloques), consideramos que está cerca del borde
				if (DistanciaMinima <= 3)
				{
					PosicionesCercaDelBorde.Add(FIntPoint(fila, columna));
				}
			}
		}
	}

	// Verificar que hay posiciones válidas
	if (PosicionesCercaDelBorde.Num() > 0)
	{
		// Elegir una posición aleatoria entre las válidas
		int32 index = FMath::RandRange(0, PosicionesCercaDelBorde.Num() - 1);
		FIntPoint posicionElegida = PosicionesCercaDelBorde[index];

		// Convertir a coordenadas del mundo
		FVector nuevaPosicion = FVector(
			XInicial + posicionElegida.Y * AnchoBloque,
			YInicial + posicionElegida.X * LargoBloque,
			350.0f // Altura del jugador
		);

		// Mover al personaje
		ACharacter* Jugador = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		if (Jugador)
		{
			Jugador->SetActorLocation(nuevaPosicion);
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Jugador posicionado cerca del borde sobre bloque de madera"));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("No se encontraron bloques de madera cerca del borde"));
	}
}

void ABomberMan_012025GameMode::ReemplazarTodosLosBloquesInteriores()
{
	int32 filas = aMapaBloques.Num();
	int32 columnas = aMapaBloques[0].Num();

	for (int32 fila = 1; fila < filas - 1; ++fila)
	{
		for (int32 columna = 1; columna < columnas - 1; ++columna)
		{
			int32 tipoActual = aMapaBloques[fila][columna];

			// Saltar espacios vacíos
			if (tipoActual == 0)
				continue;

			// Elegir un tipo nuevo diferente
			int32 nuevoTipo = tipoActual;
			while (nuevoTipo == tipoActual)
			{
				nuevoTipo = FMath::RandRange(1, 10);
			}

			// Actualizar en la matriz
			aMapaBloques[fila][columna] = nuevoTipo;

			// Calcular posición
			FVector posicion = FVector(
				XInicial + columna * AnchoBloque,
				YInicial + fila * LargoBloque,
				0.0f); // ← Altura igual a la inicial

			// Buscar bloque existente y destruirlo
		// Buscar bloque existente y destruirlo
			for (int32 i = 0; i < aBloques.Num(); ++i)
			{
				if (aBloques[i] &&
					aBloques[i]->GetActorLocation().X == posicion.X &&
					aBloques[i]->GetActorLocation().Y == posicion.Y)
				{
					aBloques[i]->Destroy();
					aBloques.RemoveAt(i);
					break;
				}
			}

			// Posición con altura correcta
			FVector posicionCorregida = FVector(
				XInicial + columna * AnchoBloque,
				YInicial + fila * LargoBloque,
				0.0f // ← Asegura que aparezca al nivel del suelo
			);

			// Crear el nuevo bloque
			SpawnBloque(posicionCorregida, nuevoTipo);
		}
	}
}

void ABomberMan_012025GameMode::SpawnBloque(FVector posicion, int32 tipoBloque)
{
	ABloque* BloqueGenerado = nullptr;
	// elegir tipo de bloque basado en el valor
	if (tipoBloque == 10)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 9)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 8)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 7)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 6)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 5)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloquePiedra>(ABloquePiedra::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 4)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueCeramica>(ABloqueCeramica::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 3)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueArena>(ABloqueArena::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 2)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueVidrio>(ABloqueVidrio::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 1)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueCesped>(ABloqueCesped::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else {
		return;
	}

	if (BloqueGenerado)
	{
		aBloques.Add(BloqueGenerado);
	}
	// Agregar el bloque generado al Tarray
	
}

//desetruir bloques
void ABomberMan_012025GameMode::DestruirBloque()
{
	//Seleccionar aleatoriamente un bloque del array ABloques para su eliminacion
	int numeroBloques = aBloques.Num();
	int NumeroAleatorio = FMath::RandRange(0, numeroBloques - 1);

	if (aBloques.Num() > 0)
	{
		BloqueActual = aBloques[NumeroAleatorio]; // Obtén el primer bloque
		if (BloqueActual)
		{
			BloqueActual->Destroy();
			// Realiza operaciones con el bloque
			//primerBloque->SetActorLocation(FVector(100.0f, 100.0f, 100.0f));
		}
	}
}
/*
void ABomberMan_012025GameMode::SpawnMapa1()
{
	const int32 NumFilas = aMapaBloques.Num();
	const int32 NumCols = aMapaBloques[0].Num();
	const int32 TotalUtil = (NumFilas - 2) * (NumCols - 2);
	const int32 Objetivo = FMath::RoundToInt(TotalUtil * 0.4f);

	// 1) Reiniciar interior a vacío (0)
	for (int32 i = 1; i < NumFilas - 1; ++i)
	{
		for (int32 j = 1; j < NumCols - 1; ++j)
		{
			aMapaBloques[i][j] = 0;
		}
	}

	// 2) Llenar lista de posiciones disponibles internas
	TArray<FIntPoint> Available;
	Available.Reserve(TotalUtil);
	for (int32 i = 1; i < NumFilas - 1; ++i)
	{
		for (int32 j = 1; j < NumCols - 1; ++j)
		{
			Available.Add(FIntPoint(i, j));
		}
	}

	int32 Colocados = 0;

	// 3) Generar grupos hasta alcanzar objetivo
	while (Colocados < Objetivo && Available.Num() > 0)
	{
		// a) Tipo de bloque y tamaño aleatorio
		const int32 Tipo = FMath::RandRange(1, 10);
		const int32 Tam = FMath::RandRange(3, 8);

		// b) Semilla inicial
		int32 SeedIndex = FMath::RandRange(0, Available.Num() - 1);
		FIntPoint Seed = Available[SeedIndex];
		Available.RemoveAtSwap(SeedIndex);

		TArray<FIntPoint> Group;
		Group.Add(Seed);

		// c) Expansión contigua
		for (int32 k = 1; k < Tam; ++k)
		{
			TArray<FIntPoint> Neigh;
			for (const FIntPoint& Cel : Group)
			{
				static const FIntPoint Offs[4] = { {1,0}, {-1,0}, {0,1}, {0,-1} };
				for (const FIntPoint& O : Offs)
				{
					FIntPoint Candidate(Cel.X + O.X, Cel.Y + O.Y);
					if (Available.Contains(Candidate))
					{
						Neigh.AddUnique(Candidate);
					}
				}
			}
			if (Neigh.Num() == 0)
				break;
			int32 Pick = FMath::RandRange(0, Neigh.Num() - 1);
			FIntPoint Next = Neigh[Pick];
			Group.Add(Next);
			Available.Remove(Next);
		}

		// d) Colocar grupo y aislar vecinos
		for (const FIntPoint& Cel : Group)
		{
			aMapaBloques[Cel.X][Cel.Y] = Tipo;
			Colocados++;
			// Quitar vecinos 8 direcciones para espacio libre
			for (int dx = -1; dx <= 1; ++dx)
			{
				for (int dy = -1; dy <= 1; ++dy)
				{
					FIntPoint N(Cel.X + dx, Cel.Y + dy);
					Available.Remove(N);
				}
			}
		}
	}

	// 4) SpawnBloque para cada celda no vacía
	for (int32 i = 0; i < NumFilas; ++i)
	{
		for (int32 j = 0; j < NumCols; ++j)
		{
			int32 Valor = aMapaBloques[i][j];
			if (Valor != 0)
			{
				FVector Pos = FVector(
					XInicial + j * AnchoBloque + AnchoBloque * 0.5f,
					YInicial + i * LargoBloque + LargoBloque * 0.5f,
					0.0f
				);
				SpawnBloque(Pos, Valor);
			}
		}
	}
}
*/
void ABomberMan_012025GameMode::SpawnMapa()
{
	if (UWorld* Mundo = GetWorld())
	{
		// Crear el suelo (bloque grande)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2600.0f, 2600.0f, -50.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(50.0f, 50.0f, 0.5f));

	
	}
}

