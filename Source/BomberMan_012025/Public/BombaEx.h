// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BombaEx.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABombaEx : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombaEx();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaBomba;

	FTimerHandle TimerHandle_Explota;
public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	void Explotar();
	TArray<AActor*> actoresEnEscena;// Va a almacenar todos los actores del mundo
	int32 CantidadDeBombas = 2;

};