// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueVidrio.h"

ABloqueVidrio::ABloqueVidrio()
{
	PrimaryActorTick.bCanEverTick = true;
	PosicionInicial = FVector::ZeroVector; // Inicializar PosicionInicial
	if (MallaBloque)
	{
		// Asignar un material específico para el bloque de vidrio
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Vidrio.Vidrio'"));
		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
	bPuedeMoverse = false; //FMath::RandBool(); // Desactivar el movimiento
}

void ABloqueVidrio::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation(); // Asignar la posición inicial al comenzar el juego
}
void ABloqueVidrio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Aquí puedes agregar cualquier lógica adicional que necesites en cada tick
	// Por ejemplo, puedes mover el bloque o aplicar efectos visuales
	if (bPuedeMoverse)
	{
		float NuevaAltura = PosicionInicial.Z + FMath::Sin(GetWorld()->GetTimeSeconds() * 2.0f) * 100.0f;
		SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, NuevaAltura));
	}

}
