// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueCeramica.h"

ABloqueCeramica::ABloqueCeramica()
{
	if (MallaBloque) 
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Ceramic.M_Ceramic'")); // Ruta al material de cerámica
		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
}

void ABloqueCeramica::BeginPlay()
{
	Super::BeginPlay();
	// Aquí puedes agregar cualquier lógica adicional que necesites al inicio del juego
}
