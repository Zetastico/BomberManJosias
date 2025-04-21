// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueBurbuja.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueBurbuja : public ABloque
{
	GENERATED_BODY()
public:
	// Constructor
	ABloqueBurbuja();
protected:
	virtual void BeginPlay() override;

public:

	void Tick(float DeltaTime)override;
	// Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego

private:
	FVector PosicionInicial;

};