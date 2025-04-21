#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuertaCambio.generated.h"

class UBoxComponent;

UCLASS()
class BOMBERMAN_012025_API APuertaCambio : public AActor
{
	GENERATED_BODY()

public:
	APuertaCambio();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* ZonaDeteccion;

	UPROPERTY(EditAnywhere)
	USceneComponent* UbicacionPuerta;

	static TArray<APuertaCambio*> TodasLasPuertas;

	UFUNCTION()
	void AlEntrarEnZona(UPrimitiveComponent* ComponenteTocado, AActor* OtroActor,
		UPrimitiveComponent* OtroComponente, int32 OtroIndice,
		bool bDesdeBarrido, const FHitResult& Resultado);
};
