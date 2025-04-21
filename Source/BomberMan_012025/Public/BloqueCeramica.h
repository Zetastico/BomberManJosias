// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueCeramica.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API ABloqueCeramica : public ABloque
{
	GENERATED_BODY()

public:
	//constructor
	ABloqueCeramica();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
