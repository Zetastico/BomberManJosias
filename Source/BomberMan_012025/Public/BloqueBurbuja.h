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
	virtual void Tick(float DeltaTime) override;

	// --- Variables de Configuración ---

	// Si este bloque puede moverse (ya existía, mantenerla)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	bool bPuedeMoverse = true; // O FMath::RandBool() si prefieres aleatorio

	// Velocidad angular de la oscilación (radianes por segundo)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float VelocidadAngular = 2.0f;

	// Lista de amplitudes a ciclar
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	TArray<float> AmplitudesCiclo = { 100.0f, 200.0f};

private:
	// --- Variables de Estado Interno ---

	// Posición inicial capturada en BeginPlay
	FVector PosicionInicial;

	// Índice actual en el array AmplitudesCiclo
	int32 IndiceAmplitudActual = 0;

	bool bMovimientoX;

	// Valor de la amplitud que se está usando actualmente
	float AmplitudActual = 100.0f; // Inicializar con el primer valor

	// Para detectar el cruce por cero (cambio de signo)
	float SignoAnterior = 1.0f; // Asumir que empieza moviéndose en positivo
	bool bCicloCompletoDetectado = false; // Flag para cambiar amplitud solo una vez por ciclo

};