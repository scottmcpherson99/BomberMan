// Fill out your copyright notice in the Description page of Project Settings.

#include "Bomb.h"
#include "DestructableWall.h"
#include <Components/StaticMeshComponent.h>
#include <Components/BoxComponent.h>
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BombermanGameMode.h"
#include "UObject/ConstructorHelpers.h"


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

	static ConstructorHelpers::FObjectFinder<USoundCue> bombCueObject(TEXT("SoundCue'/Game/Sound/BombExplosionSoundCue.BombExplosionSoundCue'"));

}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	//ExplodeBomb();

	//check for valid world
	UWorld* const world = GetWorld();

	//explode the bomb
	if (world)
	{
		//decrease the timer by 1 every second
		world->GetTimerManager().SetTimer(bombTimer, this, &ABomb::ExplodeBomb, 3.0f, false);
	}

	
}

void ABomb::OnOverlapDestroy(UPrimitiveComponent* OverlappedComp, AActor* OtherActor)
{

	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		//check to see if the destroyed actor is a destructable wall
		if (OtherActor->IsA(DestructrableWall_))
		{
			ADestructableWall* const destructableWall = Cast<ADestructableWall>(OtherActor);

			//if the actor is a destructable wall, destroy the wall
			if (destructableWall)
			{
				destructableWall->DestroyWall();
			}
		}

		//if the actor is a player, destroy the player
		else if (OtherActor->IsA(PlayerCharacter_))
		{
			ABombermanGameMode* const gameMode = (ABombermanGameMode*)GetWorld()->GetAuthGameMode();

			gameMode->SetWinnerText("Player 2");
			gameMode->SetCurrentState(EBombermanPlayState::EGameOver);
		}

		//if the actor is a player, destroy the player
		else if (OtherActor->IsA(PlayerCharacter_2))
		{
			ABombermanGameMode* const gameMode = (ABombermanGameMode*)GetWorld()->GetAuthGameMode();

			gameMode->SetWinnerText("Player 1");
			gameMode->SetCurrentState(EBombermanPlayState::EGameOver);
		}
	}
}


void ABomb::CheckForOverlappingActors()
{
	
	//check for overllaping actors on the bombs explosion
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

	
	MeshComp->SetVisibility(false, true);

	GetWorld()->GetTimerManager().SetTimer(explosionTimer, this, &ABomb::DestroyActor, bombSoundBase->GetDuration(), false);
	
	UGameplayStatics::PlaySound2D(GetWorld(), bombSoundBase);
}

void ABomb::DestroyActor()
{
	Destroy();
}