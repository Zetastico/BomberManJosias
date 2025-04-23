// BloquePiedra.h

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
    ABloquePiedra();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    FVector PosicionInicial;
    FVector PosicionObjetivo;

    float TiempoEntreMovimientos;
    float TiempoDesdeUltimoMovimiento;
    float VelocidadMovimiento;

    bool bMoviendoAObjetivo;

    void ElegirNuevaDireccion();
};
