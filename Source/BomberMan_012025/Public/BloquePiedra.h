// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloquePiedra.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloquePiedra : public ABloque
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABloquePiedra();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
