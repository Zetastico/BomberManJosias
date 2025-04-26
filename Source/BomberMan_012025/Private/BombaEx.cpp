// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaEx.h"
#include <Kismet/GameplayStatics.h>
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueBurbuja.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueConcreto.h"
#include "BloquePiedra.h"
#include "BloqueCeramica.h"
#include "BloqueArena.h"
#include "BloqueVidrio.h"
#include "BloqueCesped.h"
#include "BloquePiedra.h"
//#include "BomberMan_012025Character.h"

// Sets default values
ABombaEx::ABombaEx()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    MallaBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBomba"));
    MallaBomba->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBomba(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

    if (ObjetoMallaBomba.Succeeded())
    {
        MallaBomba->SetStaticMesh(ObjetoMallaBomba.Object);

        MallaBomba->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }

    if (MallaBomba)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Characters/Mannequins/Materials/Instances/Manny/MI_Manny_01.MI_Manny_01'"));
        if (MaterialBase.Succeeded())
        {
            MallaBomba->SetMaterial(0, MaterialBase.Object);
        }
    }
}

// Called when the game starts or when spawned
void ABombaEx::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->GetTimerManager().SetTimer(TimerHandle_Explota, this, &ABombaEx::Explotar, 2.0f);
}

// Called every frame
void ABombaEx::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ABombaEx::Explotar()
{
    // Radio de la explosión
    float radio = 200.0f;
    float area = 1000.0f;

    // Obtener todos los actores de la escena
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), actoresEnEscena);

    FVector posicionBomba = GetActorLocation();

    for (AActor* actor : actoresEnEscena)
    {
        if (actor != this) // Ignora la bomba misma
        {
            float distancia = FVector::Dist(posicionBomba, actor->GetActorLocation());

            if (distancia <= radio)
            {
                // Solo destruir si NO es de tipo BloqueAcero     if (!actor->IsA(ABloqueAcero::StaticClass()))
                if (actor->IsA(ABloqueMadera::StaticClass()) ||
                    actor->IsA(ABloqueCeramica::StaticClass()) ||
                    actor->IsA(ABloqueArena::StaticClass()) ||
                    actor->IsA(ABloquePiedra::StaticClass()) ||
                    actor->IsA(ABloqueLadrillo::StaticClass()) ||
                    actor->IsA(ABloqueCesped::StaticClass()))
                {
                    actor->Destroy();
                }
            }
        }
    }

    // Generar nuevas bombas alrededor (efecto de cadena)
    bool GenerarNuevasBombas = false;
    if (GenerarNuevasBombas) {
        for (int32 i = 0; i < CantidadDeBombas; ++i)
        {
            float posicionAlX = FMath::FRandRange(posicionBomba.X - area, posicionBomba.X + area);
            float posicionAlY = FMath::FRandRange(posicionBomba.Y - area, posicionBomba.Y + area);
            FVector spawnLocation(posicionAlX, posicionAlY, posicionBomba.Z);

            GetWorld()->SpawnActor<ABombaEx>(ABombaEx::StaticClass(), spawnLocation, FRotator::ZeroRotator);
        }
    }

    // Destruye la bomba actual
    Destroy();
}
