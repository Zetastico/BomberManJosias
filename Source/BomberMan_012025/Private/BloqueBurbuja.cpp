// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"

ABloqueBurbuja::ABloqueBurbuja()
{
	PosicionInicial = FVector::ZeroVector; // Inicializar PosicionInicial
	if (MallaBloque)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Burbuja.Burbuja'"));
		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
	bPuedeMoverse = FMath::RandBool(); // Desactivar el movimiento
}
void ABloqueBurbuja::BeginPlay()
{
	Super::BeginPlay();
	// Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego
	PosicionInicial = GetActorLocation(); // Asignar la posición inicial al comenzar el juego
}
void ABloqueBurbuja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Aquí puedes agregar cualquier lógica adicional que necesites en cada tick
	// Por ejemplo, puedes mover el bloque o aplicar efectos visuales
	if (bPuedeMoverse)
	{
		float NuevaAltura = PosicionInicial.Z + FMath::Sin(GetWorld()->GetTimeSeconds() * 2.0f) * 50.0f;
		SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, NuevaAltura));
	}

}




//.h