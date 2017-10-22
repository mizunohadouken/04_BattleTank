// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h" 
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
		
public:
	void RotateTurret(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 5; // TODO Tweakable

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxRotationDegrees = 360; // TODO Tweakable

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinRotationDegrees = 0; // TODO Tweakable
	
	
};
