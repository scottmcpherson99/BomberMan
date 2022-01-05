// Fill out your copyright notice in the Description page of Project Settings.

#include "Wall.h"
#include <Components/StaticMeshComponent.h>

// Sets default values
AWall::AWall():isBreakable(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set the root component
	RootComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Coponent"));
	RootComp->SetupAttachment(RootComponent);

	//set up the block mesh component
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
	MeshComp->SetupAttachment(RootComp);
}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/*
bool AWall::GetBreakable() const
{
	return isBreakable;
}
*/
