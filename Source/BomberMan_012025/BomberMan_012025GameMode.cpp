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
	GetWorld()->GetTimerManager().SetTimer(TimerCambioBloques, this, &ABomberMan_012025GameMode::ReemplazarTodosLosBloquesInteriores, 5.0f, true);
	GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberMan_012025GameMode::DestruirBloque, 2.0f, false);
	PosicionarJugadorAleatoriamente();
	SpawnMapa();
	
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
	TArray<FIntPoint> PosicionesLibres;

	// Buscar todas las celdas libres (valor 0)
	for (int32 fila = 1; fila < aMapaBloques.Num() - 1; ++fila)
	{
		for (int32 columna = 1; columna < aMapaBloques[fila].Num() - 1; ++columna)
		{
			if (aMapaBloques[fila][columna] == 0)
			{
				PosicionesLibres.Add(FIntPoint(fila, columna));
			}
		}
	}

	// Verificar que hay posiciones libres
	if (PosicionesLibres.Num() > 0)
	{
		// Elegir una posición aleatoria
		int32 index = FMath::RandRange(0, PosicionesLibres.Num() - 1);
		FIntPoint posicionElegida = PosicionesLibres[index];

		// Convertir a coordenadas del mundo
		FVector nuevaPosicion = FVector(
			XInicial + posicionElegida.Y * AnchoBloque,
			YInicial + posicionElegida.X * LargoBloque,
			200.0f // Altura del jugador
		);

		// Mover al personaje
		ACharacter* Jugador = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		if (Jugador)
		{
			Jugador->SetActorLocation(nuevaPosicion);
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Jugador posicionado aleatoriamente"));
		}
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


void ABomberMan_012025GameMode::SpawnMapa()
{
	if (UWorld* Mundo = GetWorld())
	{
		// Crear el suelo (bloque grande)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2600.0f, 2600.0f, -50.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(50.0f, 50.0f, 0.5f));

	
	}
}

