// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedIncreaseDrop.h"

void ASpeedIncreaseDrop::WasCollected_Implementation()
{
	// use base pickup behaviour
	Super::WasCollected_Implementation();

	//destroy the battery
	Destroy();
}