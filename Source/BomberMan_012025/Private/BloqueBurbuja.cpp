// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"

ABloqueBurbuja::ABloqueBurbuja()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));

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
    GetWorld()->GetTimerManager().SetTimer(TimerGiro, this, &ABloqueBurbuja::GirarBloque, 3.0f, true);
}

void ABloqueBurbuja::GirarBloque()
{
    if (bPuedeMoverse) {
        SetActorRotation(FRotator(0.0f, GetActorRotation().Yaw + 180.0f, 0.0f));
    }
}