// Fill out your copyright notice in the Description page of Project Settings.

#include <Components/StaticMeshComponent.h>
#include <Components/BoxComponent.h>
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Bomb.h"

// Sets default values
ABomb::ABomb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set the root component
	RootComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Coponent"));
	RootComp->SetupAttachment(RootComponent);

	//set up the block mesh component
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
	MeshComp->SetupAttachment(RootComp);

	//set up the collsion boxes
	CollisionBoxX = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box X"));
	CollisionBoxX->SetupAttachment(RootComp);
	CollisionBoxY = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box Y"));
	CollisionBoxY->SetupAttachment(RootComp);
}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	//ExplodeBomb();
	
}

void ABomb::OnOverlapDestroy(UPrimitiveComponent* OverlappedComp, AActor* OtherActor)
{

	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		if (OtherActor->IsA(DestructrableWall_))
		{
			OtherActor->Destroy();
		}
	}
}


void ABomb::CheckForOverlappingActors()
{
	
	TArray<AActor*> OverlappingActors;
	CollisionBoxX->GetOverlappingActors(OverlappingActors);
	for (int i = 0; i < OverlappingActors.Num(); i++)
	{

		OnOverlapDestroy(CollisionBoxX, OverlappingActors[i]);
}

	CollisionBoxY->GetOverlappingActors(OverlappingActors);

	

	for (int i = 0; i < OverlappingActors.Num(); i++)
	{
		OnOverlapDestroy(CollisionBoxY, OverlappingActors[i]);
	}
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABomb::ExplodeBomb()
{	
	CheckForOverlappingActors();

	Destroy();
}
