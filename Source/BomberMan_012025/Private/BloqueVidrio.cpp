// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueVidrio.h"

ABloqueVidrio::ABloqueVidrio()
{
	if (MallaBloque)
	{
		// Asignar un material específico para el bloque de vidrio
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/Vidrio.Vidrio'"));
		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
}

void ABloqueVidrio::BeginPlay()
{
	Super::BeginPlay();
}
