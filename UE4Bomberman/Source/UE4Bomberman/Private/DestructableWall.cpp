// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructableWall.h"
#include "SpeedIncreaseDrop.h"
#include "MultiBombDrop.h"
#include "BigBombDrop.h"

ADestructableWall::ADestructableWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set the wall to be indestructable
	isBreakable = true;
}

ADestructableWall::~ADestructableWall()
{

}


//destroy the wall
void ADestructableWall::DestroyWall()
{
	int randomNumber = (rand() % 10)+1;
	UE_LOG(LogTemp, Display, TEXT("Speecfd."));
	//decide whether a powerup should be dropped
	if (randomNumber <= 3)
	{
		//set the spawn parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		FVector SpawnLocation = RootComponent->GetComponentLocation();

		FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);

		//choose what drop to spawn
		int dropToSpawn = (rand() % 3) + 1;

		//spawn a speed increase powerup drop
		if (dropToSpawn == 1)
		{
			ASpeedIncreaseDrop* const speedDrop = GetWorld()->SpawnActor<ASpeedIncreaseDrop>(SpeedIncrease_, SpawnLocation, SpawnRotator, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("Speed dropped."));
		}

		//spawn a multiple bomb drop
		else if (dropToSpawn == 2)
		{
			AMultiBombDrop* const multiBombDrop = GetWorld()->SpawnActor<AMultiBombDrop>(MultiBomb_, SpawnLocation, SpawnRotator, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("multi bomb drop."));
		}

		//spawn a big bomb drop
		else if (dropToSpawn == 3)
		{
			ABigBombDrop* const bigBombDrop = GetWorld()->SpawnActor<ABigBombDrop>(BigBomb_, SpawnLocation, SpawnRotator, SpawnParams);
			UE_LOG(LogTemp, Display, TEXT("big bomb dropped."));
		}

	}

	else
	{
		UE_LOG(LogTemp, Display, TEXT("No Drop."));
	}


	Destroy();
}