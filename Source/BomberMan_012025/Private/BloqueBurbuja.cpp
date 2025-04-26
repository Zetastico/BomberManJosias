// En BloqueBurbuja.cpp

#include "BloqueBurbuja.h"
#include "Components/StaticMeshComponent.h" // Si necesitas MallaBloque
#include "UObject/ConstructorHelpers.h"   // Si usas FObjectFinder
#include "Materials/MaterialInterface.h"  // Si usas FObjectFinder
#include "Materials/Material.h"           // Si usas FObjectFinder
#include "Math/UnrealMathUtility.h"       // Para Sin, Sign, etc.
#include "Engine/World.h"                 // Para GetWorld()->GetTimeSeconds()

ABloqueBurbuja::ABloqueBurbuja()
{
	PrimaryActorTick.bCanEverTick = true; 

	// Inicializar índice y amplitud inicial (si AmplitudesCiclo tiene elementos)
	if (AmplitudesCiclo.Num() > 0)
	{
		IndiceAmplitudActual = 0;
		AmplitudActual = AmplitudesCiclo[0];
	}
	else
	{
		// Valor por defecto si el array está vacío
		AmplitudActual = 100.0f;
		AmplitudesCiclo.Add(100.0f); // Añadir uno por defecto
	}

	SignoAnterior = 1.0f; 
	bCicloCompletoDetectado = false;

	
	if (MallaBloque)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Burbuja.Burbuja'"));
		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object);
		}
	}
	
	bPuedeMoverse = true; 
	bMovimientoX = FMath::RandBool(); // Alternar entre movimiento en X o Y
}

void ABloqueBurbuja::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();

	// Reiniciar estado al comenzar (por si el actor se reutiliza)
	if (AmplitudesCiclo.Num() > 0)
	{
		IndiceAmplitudActual = 0;
		AmplitudActual = AmplitudesCiclo[0];
	}
	SignoAnterior = 1.0f;
	bCicloCompletoDetectado = false;
}

void ABloqueBurbuja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bPuedeMoverse || AmplitudesCiclo.Num() == 0) // Salir si no se puede mover o no hay amplitudes
	{
		return;
	}

	float TiempoActual = GetWorld()->GetTimeSeconds();
	
	float Angulo = TiempoActual * VelocidadAngular;
	
	float ValorSeno = FMath::Sin(Angulo);
	
	float Desplazamiento = ValorSeno * AmplitudActual;
	
	float SignoActual = FMath::Sign(ValorSeno);

	
	if (SignoActual != 0.0f && SignoActual != SignoAnterior)
	{
		
		// significa que acaba de completar un ciclo completo (pasó por - -> 0 -> +)
		if (SignoAnterior < 0.0f && SignoActual > 0.0f)
		{
			bCicloCompletoDetectado = true; 
		}

		SignoAnterior = SignoActual;
	}
	else if (SignoActual == 0.0f)
	{
		
	}

	
	if (bCicloCompletoDetectado)
	{
		
		IndiceAmplitudActual++;
	
		IndiceAmplitudActual = IndiceAmplitudActual % AmplitudesCiclo.Num();
	
		AmplitudActual = AmplitudesCiclo[IndiceAmplitudActual];

		UE_LOG(LogTemp, Log, TEXT("Bloque %s: Cambiando a Amplitud %.1f (Índice %d)"), *GetName(), AmplitudActual, IndiceAmplitudActual);

		bCicloCompletoDetectado = false; 
	}

	if (bMovimientoX)
	{
		float NuevaY = PosicionInicial.Y + Desplazamiento;
		SetActorLocation(FVector(PosicionInicial.X, NuevaY, PosicionInicial.Z));
	}
	else
	{
		float NuevaX = PosicionInicial.X + Desplazamiento;
		SetActorLocation(FVector(NuevaX, PosicionInicial.Y, PosicionInicial.Z));
	}

}