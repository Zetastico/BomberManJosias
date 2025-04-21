#include "PuertaCambio.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

TArray<APuertaCambio*> APuertaCambio::TodasLasPuertas;

APuertaCambio::APuertaCambio()
{
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Raiz"));

	ZonaDeteccion = CreateDefaultSubobject<UBoxComponent>(TEXT("ZonaDeteccion"));
	ZonaDeteccion->SetupAttachment(RootComponent);
	ZonaDeteccion->SetBoxExtent(FVector(50.f, 50.f, 100.f));
	ZonaDeteccion->SetCollisionProfileName(TEXT("Trigger"));

	ZonaDeteccion->OnComponentBeginOverlap.AddDynamic(this, &APuertaCambio::AlEntrarEnZona);

	UbicacionPuerta = CreateDefaultSubobject<USceneComponent>(TEXT("UbicacionPuerta"));
	UbicacionPuerta->SetupAttachment(RootComponent);
}

void APuertaCambio::BeginPlay()
{
	Super::BeginPlay();

	TodasLasPuertas.Add(this);
}

void APuertaCambio::AlEntrarEnZona(UPrimitiveComponent* ComponenteTocado, AActor* OtroActor,
	UPrimitiveComponent* OtroComponente, int32 OtroIndice,
	bool bDesdeBarrido, const FHitResult& Resultado)
{
	ACharacter* Jugador = Cast<ACharacter>(OtroActor);
	if (Jugador)
	{
		TArray<APuertaCambio*> OtrasPuertas = TodasLasPuertas.FilterByPredicate([this](APuertaCambio* Puerta)
			{
				return Puerta != this;
			});

		if (OtrasPuertas.Num() > 0)
		{
			int32 IndiceAleatorio = FMath::RandRange(0, OtrasPuertas.Num() - 1);
			FVector NuevaUbicacion = OtrasPuertas[IndiceAleatorio]->GetActorLocation();

			Jugador->SetActorLocation(NuevaUbicacion + FVector(0.f, 0.f, 50.f));
		}
	}
}
