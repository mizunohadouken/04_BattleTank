// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"



void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// move the barrel the right amount this frame
	// given a max elevation speed, and the frame time
	auto TankName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s is firing at"), *TankName);
}
