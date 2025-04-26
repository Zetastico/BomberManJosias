// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Bloque.h"
#include "Engine/World.h" // Para GetWorld()
#include "Math/UnrealMathUtility.h"
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
#include "BombaEx.h"
#include "Algo/RandomShuffle.h" // <--- Necesario para barajar direcciones


ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PrimaryActorTick.bCanEverTick = true;

	ClaseBomba = ABombaEx::StaticClass();
}

void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, -1.f, FColor::Red, TEXT("Cargando el juego"));

	//generar laberinto aleatorio, true = Laberinto aleatorio, false = laberinto AleatorioAleatorio
	bool bGenerarLaberintoAleatorio = false;
	bool bGenerarLaberintoDefinido = false; // if "false" - entonces se generara un laberinto aleatorio, en todo el sentido de la palabra

	if (bGenerarLaberintoAleatorio)
	{
		GenerarLaberintoAleatorio();
	}
	else {
		if (bGenerarLaberintoDefinido)
		{
			for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
			{
				for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
				{
					int32 valor = aMapaBloques[fila][columna];
					if (valor != 0)
					{
						if (valor == 9) {
							FVector posicionBloque = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, -100.0f);
							SpawnBloque(posicionBloque, valor);
						} else {
							FVector posicionBloque = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, 0.0f);
							SpawnBloque(posicionBloque, valor);
						}
					}
				}
			}
		}
		else {
			GenerarMapa();
		}
	}
	
	APlayerController* Controlador = GetWorld()->GetFirstPlayerController();
	if (Controlador && Controlador->InputComponent)
	{
		Controlador->InputComponent->BindAction("SpawnBomba", IE_Pressed, this, &ABomberMan_012025GameMode::SpawnBomba);
	}
	
	//GetWorld()->GetTimerManager().SetTimer(TimerCambioBloques, this, &ABomberMan_012025GameMode::ReemplazarTodosLosBloquesInteriores, 5.0f, true);
	//GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberMan_012025GameMode::DestruirBloque, 2.0f, false);

	SpawnMapa();
	PosicionarJugadorAleatoriamente();
	//SpawnEnemigo();

}




void ABomberMan_012025GameMode::PosicionarJugadorAleatoriamente()
{

	TArray<AActor*> BloquesMadera;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueMadera::StaticClass(), BloquesMadera);

	TArray<AActor*> BloquesAcero;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueAcero::StaticClass(), BloquesAcero);

	float DistanciaMinimaGlobalSq = FLT_MAX;
	TArray<AActor*> CandidatosMadera;

	// (La lógica interna para encontrar candidatos es la misma)
	for (AActor* BloqueM : BloquesMadera)
	{
		FVector PosicionMadera = BloqueM->GetActorLocation();
		float DistanciaMinimaParaEstaMaderaSq = FLT_MAX;

		for (AActor* BloqueA : BloquesAcero)
		{
			float DistanciaActualSq = FVector::DistSquared(PosicionMadera, BloqueA->GetActorLocation());
			if (DistanciaActualSq < DistanciaMinimaParaEstaMaderaSq)
			{
				DistanciaMinimaParaEstaMaderaSq = DistanciaActualSq;
			}
		}

		if (FMath::IsNearlyEqual(DistanciaMinimaParaEstaMaderaSq, DistanciaMinimaGlobalSq))
		{
			CandidatosMadera.Add(BloqueM);
		}
		else if (DistanciaMinimaParaEstaMaderaSq < DistanciaMinimaGlobalSq)
		{
			DistanciaMinimaGlobalSq = DistanciaMinimaParaEstaMaderaSq;
			CandidatosMadera.Empty();
			CandidatosMadera.Add(BloqueM);
		}
	}

	// --- Paso 4: Seleccionar aleatoriamente un candidato y posicionar al jugador ---
	if (CandidatosMadera.Num() > 0)
	{
		int32 indexAleatorio = FMath::RandRange(0, CandidatosMadera.Num() - 1);
		AActor* BloqueSeleccionado = CandidatosMadera[indexAleatorio];

		if (BloqueSeleccionado)
		{
			float AlturaSpawnJugador = 500.0f; // Ajustar altura
			FVector PosicionJugador = BloqueSeleccionado->GetActorLocation() + FVector(0.0f, 0.0f, AlturaSpawnJugador);

			ACharacter* Jugador = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
			if (Jugador)
			{
				Jugador->SetActorLocation(PosicionJugador);
				FString Msg = FString::Printf(TEXT("Jugador posicionado aleatoriamente sobre bloque madera (%s) cerca del borde."), *BloqueSeleccionado->GetName());
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, Msg);
				// No hay 'return true' aquí
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("PosicionarJugador: No se pudo encontrar el actor del jugador."));
				// No hay 'return false' aquí
			}
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PosicionarJugador: Error interno, bloque seleccionado nulo."));
			// No hay 'return false' aquí
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("PosicionarJugador: No se encontraron bloques de madera candidatos cerca del borde."));
		// No hay 'return false' aquí
	}
	// La función simplemente termina aquí si no se completó la acción o si sí se completó.
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
				0.0f); // ← Altura igual a la inicial

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
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 9)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueVidrio>(ABloqueVidrio::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
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
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueCesped>(ABloqueCesped::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
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
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 1)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), posicion, FRotator(0.0f, 0.0f, 0.0f));
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

void ABomberMan_012025GameMode::GenerarMapa()
{
	int32 Filas = 50;
	int32 Columnas = 50;

	// Inicializar la matriz de 50x50 con ceros
	aMapaBloques.SetNum(Filas);
	for (int32 i = 0; i < Filas; ++i)
	{
		aMapaBloques[i].SetNum(Columnas);
		for (int32 j = 0; j < Columnas; ++j)
		{
			aMapaBloques[i][j] = 0; // Espacio libre
		}
	}

	// Asignar los bordes como bloques de acero (10)
	for (int32 fila = 0; fila < Filas; ++fila)
	{
		for (int32 columna = 0; columna < Columnas; ++columna)
		{
			if (fila == 0 || fila == Filas - 1 || columna == 0 || columna == Columnas - 1)
			{
				aMapaBloques[fila][columna] = 10; // Bloque de acero
			}
		}
	}

	// Añadir bloques destructibles aleatoriamente dentro del área interna
	bool BloquesInternos = true; //siempre sera True
	float ProbabilidadDestructible = 0.5f; // X% de probabilidad

	if (BloquesInternos)
	{
		for (int32 fila = 1; fila < Filas - 1; ++fila)
		{
			for (int32 columna = 1; columna < Columnas - 1; ++columna)
			{
				// Evitar sobreescribir bloques ya colocados
				if (aMapaBloques[fila][columna] == 0)
				{
					if (FMath::FRand() < ProbabilidadDestructible)
					{
						aMapaBloques[fila][columna] = FMath::RandRange(1, 9); // Bloques destructibles 
					}
				}
			}
		}
	}

	// Finalmente, instanciar los bloques en el mundo
	for (int32 fila = 0; fila < Filas; ++fila)
	{
		for (int32 columna = 0; columna < Columnas; ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];
			if (valor != 0)
			{
				FVector posicionBloque = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, 0.0f);
				SpawnBloque(posicionBloque, valor);
			}
		}
	}
}

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

void ABomberMan_012025GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	if (MonedaReferencia)
	{
		float DeltaRotacion = MonedaReferencia->VelocidadRotacion * DeltaTime;

		// Acceso directo a los atributos
		if (MonedaReferencia->bRotandoDerecha)
		{
			MonedaReferencia->AnguloActual += DeltaRotacion;
			if (MonedaReferencia->AnguloActual >= MonedaReferencia->AnguloMaximoRotacion)
			{
				MonedaReferencia->bRotandoDerecha = false;
			}
		}
		else
		{
			MonedaReferencia->AnguloActual -= DeltaRotacion;
			if (MonedaReferencia->AnguloActual <= -MonedaReferencia->AnguloMaximoRotacion)
			{
				MonedaReferencia->bRotandoDerecha = true;

				// Hemos completado un ciclo completo, ¡Saltar!
				MonedaReferencia->SaltarANuevaPosicion();
			}
		}

		// Aplicar la rotación
		FRotator NuevaRotacion = MonedaReferencia->GetActorRotation();
		NuevaRotacion.Yaw += MonedaReferencia->bRotandoDerecha ? DeltaRotacion : -DeltaRotacion;
		MonedaReferencia->SetActorRotation(NuevaRotacion);
	}
	*/
}

void ABomberMan_012025GameMode::GenerarLaberintoAleatorio()
{
	UE_LOG(LogTemp, Log, TEXT("Iniciando generación de laberinto aleatorio..."));

	// --- 1. Definir Dimensiones (Preferiblemente Impares) ---
	// Hacemos el tamaño total impar para facilitar el algoritmo
	int32 Filas = 51; 
	int32 Columnas = 51; 

	// Asegurarse de que las dimensiones sean al menos 3x3 e impares
	Filas = FMath::Max(3, Filas);
	Columnas = FMath::Max(3, Columnas);
	if (Filas % 2 == 0) Filas++;
	if (Columnas % 2 == 0) Columnas++;

	// --- 2. Inicializar el Mapa ---
	// Redimensionar el array principal y las filas internas
	aMapaBloques.Empty(); // Limpiar por si acaso
	aMapaBloques.SetNum(Filas);
	for (int32 fila = 0; fila < Filas; ++fila)
	{
		aMapaBloques[fila].Init(10, Columnas); // Inicializar TODO con Muros (9)
	}

	// --- 3. Ejecutar Recursive Backtracker (DFS) ---
	// Elegir un punto de inicio aleatorio (¡debe ser impar!)
	int32 filaInicio = (FMath::RandRange(0, (Filas / 2) - 1) * 2) + 1;
	int32 columnaInicio = (FMath::RandRange(0, (Columnas / 2) - 1) * 2) + 1;

	// Marcar el inicio como camino
	aMapaBloques[filaInicio][columnaInicio] = 0; // 0 = Camino

	// Llamar a la función recursiva para tallar el laberinto
	TallarPasajesDesde(filaInicio, columnaInicio, Filas, Columnas);

	// --- 4. (Opcional) Añadir Bloques Destructibles Aleatorios ---
	bool BloquesInternos = true; 
	// Cambiar a false si no se quieren bloques destructibles
	// Recorrer el interior y reemplazar algunos caminos (0) con bloques destructibles (1)
	if (BloquesInternos) {
		float ProbabilidadDestructible = 0.2f; // x% de probabilidad de que un camino tenga un bloque
		for (int32 fila = 1; fila < Filas - 1; ++fila)
		{
			for (int32 columna = 1; columna < Columnas - 1; ++columna)
			{
				// Solo considerar celdas que son caminos y no están justo al lado del inicio (opcional, para dar espacio)
				if (aMapaBloques[fila][columna] == 0 && !(fila == filaInicio && columna == columnaInicio))
				{
					if (FMath::FRand() < ProbabilidadDestructible) // FRand() devuelve entre 0.0 y 1.0
					{

						aMapaBloques[fila][columna] = FMath::RandRange(1,5); // 1 = Bloque Destructible (Madera/Ladrillo)
					}
				}
			}
		}
	}
	

	// --- 5. Limpieza de Actores Visuales Existentes ---
	UE_LOG(LogTemp, Log, TEXT("Limpiando bloques visuales anteriores..."));
	for (int32 i = aBloques.Num() - 1; i >= 0; --i) // Iterar hacia atrás es más seguro al eliminar
	{
		if (aBloques[i])
		{
			aBloques[i]->Destroy();
		}
	}
	aBloques.Empty(); // Vaciar el array de seguimiento

	// --- 6. Re-generar Visualmente el Laberinto ---
	UE_LOG(LogTemp, Log, TEXT("Generando bloques visuales del nuevo laberinto..."));
	for (int32 fila = 0; fila < Filas; ++fila)
	{
		for (int32 columna = 0; columna < Columnas; ++columna)
		{
			int32 tipo = aMapaBloques[fila][columna];
			if (tipo != 0) // No generar actores para los caminos vacíos (0)
			{
				// Calcular posición basada en índices y offsets/tamaños
				FVector posicionBloque = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, 0.0f);
				// Llamar a la función que crea el actor del bloque correspondiente
				SpawnBloque(posicionBloque, tipo); // Asume que SpawnBloque maneja tipo 1 y tipo 9 correctamente
			}
		}
	}
	UE_LOG(LogTemp, Log, TEXT("Generación de laberinto completada."));

	// --- 7. Posicionar al jugador ---
	// Usar la función que busca un espacio vacío (tipo 0) o adaptarla si es necesario
	// PosicionarJugadorEnEspacioVacioAleatorio(); // O alguna función similar que busque tipo 0
	// O simplemente colocarlo en el inicio del laberinto:
	ACharacter* Jugador = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (Jugador)
	{
		float AlturaSpawnJugador = 150.0f;
		FVector PosicionInicioJugador = FVector(XInicial + columnaInicio * AnchoBloque, YInicial + filaInicio * LargoBloque, AlturaSpawnJugador);
		Jugador->SetActorLocation(PosicionInicioJugador);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Jugador posicionado en inicio del laberinto."));
	}

}

// --- IMPLEMENTACIÓN DE LA FUNCIÓN AUXILIAR RECURSIVA (DFS) ---
void ABomberMan_012025GameMode::TallarPasajesDesde(int32 FilaActual, int32 ColumnaActual, int32 Filas, int32 Columnas)
{
	// 1. Definir las 4 direcciones posibles (Arriba, Abajo, Izquierda, Derecha)
	//    Cada dirección implica moverse 2 celdas para mantener el patrón de paredes.
	TArray<FIntPoint> Direcciones = {
		FIntPoint(0, 2),  // Derecha
		FIntPoint(0, -2), // Izquierda
		FIntPoint(2, 0),  // Abajo
		FIntPoint(-2, 0)  // Arriba
	};

	// 2. Barajar aleatoriamente las direcciones
	//    Esto asegura que el laberinto sea diferente cada vez.
	Algo::RandomShuffle(Direcciones);

	// 3. Iterar sobre cada dirección aleatoria
	for (const FIntPoint& Dir : Direcciones)
	{
		// Calcular las coordenadas de la celda vecina (2 pasos)
		int32 nF = FilaActual + Dir.X;
		int32 nC = ColumnaActual + Dir.Y;

		// Calcular las coordenadas de la pared ENTRE la celda actual y la vecina (1 paso)
		int32 pF = FilaActual + Dir.X / 2;
		int32 pC = ColumnaActual + Dir.Y / 2;

		// 4. Comprobar si la celda vecina está DENTRO de los límites del mapa
		//    (mayor o igual a 0 y menor que las dimensiones máximas)
		if (nF > 0 && nF < Filas - 1 && nC > 0 && nC < Columnas - 1)
		{
			// 5. Comprobar si la celda vecina es un MURO (10) (es decir, no ha sido visitada)
			if (aMapaBloques[nF][nC] == 10)
			{
				// --- ¡Encontramos un vecino válido y no visitado! ---
				// a) Tallar la pared intermedia convirtiéndola en camino (0)
				aMapaBloques[pF][pC] = 0;
				// b) Marcar la celda vecina como camino (0)
				aMapaBloques[nF][nC] = 0;
				// c) Llamar recursivamente a esta misma función DESDE la celda vecina
				TallarPasajesDesde(nF, nC, Filas, Columnas);
			}
		}
	}
	// Si no quedan vecinos válidos y no visitados, la recursión para esta rama termina (backtrack).
}

void ABomberMan_012025GameMode::SpawnBomba()
{
	if (ClaseBomba && GetWorld())
	{
		// Obtener el personaje controlado
		ABomberMan_012025Character* Personaje = Cast<ABomberMan_012025Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (Personaje)
		{
			// Obtener la posición y la orientación del personaje
			FVector PosicionPersonaje = Personaje->GetActorLocation();
			FRotator RotacionPersonaje = Personaje->GetActorRotation();

			// Calcular la ubicación delante del personaje
			FVector DireccionFrente = RotacionPersonaje.Vector(); // Vector hacia adelante
			FVector UbicacionSpawn = PosicionPersonaje + (DireccionFrente * 100.0f); // Ajusta la distancia (200.0f en este caso)

			// Rotación para la bomba (opcional, puede ser igual a la del personaje)
			FRotator RotacionSpawn = RotacionPersonaje;

			// Spawnear la bomba
			AActor* BombaSpawneada = GetWorld()->SpawnActor<AActor>(ClaseBomba, UbicacionSpawn, RotacionSpawn);
			if (BombaSpawneada)
			{
				UE_LOG(LogTemp, Warning, TEXT("¡Bomba spawneada frente al personaje en %s!"), *UbicacionSpawn.ToString());
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ClaseBomba no está configurada."));
	}
}

/*void ABomberMan_012025GameMode::InicializarMoneda()
{
	if (!GetWorld()) return;

	// Buscar una posición vacía aleatoria
	TArray<FIntPoint> PosicionesLibres;

	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			if (aMapaBloques[fila][columna] == 0)
			{
				PosicionesLibres.Add(FIntPoint(fila, columna));
			}
		}
	}

	if (PosicionesLibres.Num() > 0)
	{
		int32 index = FMath::RandRange(0, PosicionesLibres.Num() - 1);
		FIntPoint posicion = PosicionesLibres[index];

		FVector posicionMundo = FVector(
			XInicial + posicion.Y * AnchoBloque,
			YInicial + posicion.X * LargoBloque,
			400.0f
		);

		MonedaDelJuego = GetWorld()->SpawnActor<AMoneda>(
			AMoneda::StaticClass(),
			posicionMundo,
			FRotator::ZeroRotator
		);
	}
}
*/