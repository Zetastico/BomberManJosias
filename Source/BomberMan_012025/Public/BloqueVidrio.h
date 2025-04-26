// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueVidrio.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueVidrio : public ABloque
{
	GENERATED_BODY()

public:
	void Tick(float DeltaTime)override;
	// Sets default values for this actor's properties
	ABloqueVidrio();
	// Destructor
	float TiempoAcumulado;

	// Tiempo transcurrido desde el último cambio de dirección
	float TiempoDesdeUltimoCambio;
	bool bMovimientoVertical;
	// Indica si ya llegó al centro
	bool bSeMovioAlCentro;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	FVector PosicionInicial;
};
