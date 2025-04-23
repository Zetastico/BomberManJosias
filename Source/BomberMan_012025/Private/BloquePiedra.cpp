// Fill out your copyright notice in the Description page of Project Settings.

#include "BloquePiedra.h"

ABloquePiedra::ABloquePiedra()
{
    PrimaryActorTick.bCanEverTick = true;
    PosicionInicial = GetActorLocation();

    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Rock.M_Rock'")); // Ajusta esta ruta si es necesario
        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object);
        }
    }

    bPuedeMoverse = FMath::RandBool();
    TiempoEntreMovimientos = 2.0f;
    VelocidadMovimiento = 200.0f;
    TiempoDesdeUltimoMovimiento = 0.0f;
    bMoviendoAObjetivo = false;
}

void ABloquePiedra::BeginPlay()
{
    Super::BeginPlay();
    PosicionInicial = GetActorLocation();
    PosicionObjetivo = PosicionInicial;
}

void ABloquePiedra::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoDesdeUltimoMovimiento += DeltaTime;
    if (TiempoDesdeUltimoMovimiento >= TiempoEntreMovimientos)
    {
        ElegirNuevaDireccion();
        TiempoDesdeUltimoMovimiento = 0.0f;
        bMoviendoAObjetivo = true;
    }

    if (bMoviendoAObjetivo)
    {
        FVector PosActual = GetActorLocation();
        FVector NuevaPos = FMath::VInterpTo(PosActual, PosicionObjetivo, DeltaTime, 5.0f);
        SetActorLocation(NuevaPos);

        if (FVector::Dist(NuevaPos, PosicionObjetivo) < 1.0f)
        {
            if (PosicionObjetivo != PosicionInicial)
            {
                PosicionObjetivo = PosicionInicial;
            }
            else
            {
                bMoviendoAObjetivo = false;
            }
        }
    }
}

void ABloquePiedra::ElegirNuevaDireccion()
{
    int Direccion = FMath::RandRange(0, 3);
    FVector Offset(0.0f);
    const float DistanciaMovimiento = 200.0f;

    switch (Direccion)
    {
    case 0: Offset.Y += DistanciaMovimiento; break;
    case 1: Offset.Y -= DistanciaMovimiento; break;
    case 2: Offset.Z += DistanciaMovimiento; break;
    case 3: Offset.Z -= DistanciaMovimiento; break;
    }

    PosicionObjetivo = PosicionInicial + Offset;
}
