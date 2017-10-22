// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "Math/UnrealMathUtility.h"

void UTankTurret::RotateTurret(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);

	auto YawChange = RelativeSpeed * MaxDegreesPerSecond *(GetWorld()->DeltaTimeSeconds);
	auto RawNewYaw = RelativeRotation.Yaw + YawChange;
//	auto Yaw = FMath::Clamp<float>(RawNewYaw, MinRotationDegrees, MaxRotationDegrees);

	SetRelativeRotation(FRotator(0, RawNewYaw, 0));
}


