// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueCesped.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueCesped : public ABloque
{
	GENERATED_BODY()

public:

	ABloqueCesped(); // Constructor por defecto
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
