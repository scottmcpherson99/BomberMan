// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseDrop.h"

// Sets default values
ABaseDrop::ABaseDrop()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	//all pickups start active
	bIsActive = true;


	//create the static mesh component
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	RootComponent = PickupMesh;
}

// Called when the game starts or when spawned
void ABaseDrop::BeginPlay()
{
	Super::BeginPlay();
	
}

bool ABaseDrop::IsActive()
{
	return bIsActive;
}

void ABaseDrop::SetActive(bool newPickupState)
{
	bIsActive = newPickupState;
}

void ABaseDrop::WasCollected_Implementation()
{
	//log a debug message
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);

}