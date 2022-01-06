// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter2.h"
#include <Components/SkeletalMeshComponent.h>
#include "Bomb.h"
#include "BaseDrop.h"

// Sets default values
APlayerCharacter2::APlayerCharacter2()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set the root component
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Root Coponent"));
	MeshComp->SetupAttachment(RootComponent);

	//create the collection sphere
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->AttachTo(RootComponent);
	CollectionSphere->SetSphereRadius(200.f);

	//set the initial bombs left
	bombsLeft = 1;
	maxBombs = 1;

	//set the initial bomb scale
	bombScale_ = FVector(1.0f, 1.0f, 1.0f);

	currentPowerup = "None";
}

// Called when the game starts or when spawned
void APlayerCharacter2::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerCharacter2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward2", this, &APlayerCharacter2::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight2", this, &APlayerCharacter2::MoveRight);

	PlayerInputComponent->BindAction("DropBomb2", IE_Pressed, this, &APlayerCharacter2::SpawnBomb);
	PlayerInputComponent->BindAction("Pickup PowerUp2", IE_Pressed, this, &APlayerCharacter2::CollectPickups);


}


//move the character forward
void APlayerCharacter2::MoveForward(float value)
{
	if ((Controller) && (value != 0.0f))
	{
		if (value > 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 270.0f, 0.0f));
		}
		else if (value < 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 90.0f, 0.0f));
		}

		AddMovementInput(FVector(1.0 * value, 0.0f, 0.0f));

	}
}

//move the character forward
void APlayerCharacter2::MoveRight(float value)
{
	if ((Controller) && (value != 0.0f))
	{
		if (value < 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 180.0f, 0.0f));
		}
		else if (value > 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
	AddMovementInput(FVector(0.0f, 1.0f * value, 0.0f));
}

void APlayerCharacter2::SpawnBomb()
{

	//check to see if the type of bomb has been selected
	if (bombToSpawn != NULL)
	{
		//check for valid world
		UWorld* const world = GetWorld();

		if (world)
		{
			if (bombsLeft > 0)
			{
				//set the spawn parameters
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = GetInstigator();

				FVector SpawnLocation = RootComponent->GetComponentLocation();

				FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);


				ABomb* const droppedBomb = world->SpawnActor<ABomb>(bombToSpawn, SpawnLocation, SpawnRotator, SpawnParams);

				droppedBomb->SetActorScale3D(bombScale_);

				world->GetTimerManager().SetTimer(bombTimer, this, &APlayerCharacter2::SetBombs, reloadDelay, true);

				bombsLeft--;

			}
		}
	}
}


void APlayerCharacter2::CollectPickups()
{
	//get all overlapping actors and store them in array
	TArray<AActor*> CollectedActors;
	CollectionSphere->GetOverlappingActors(CollectedActors);

	//for each actor we collected
	for (int32 iCollected = 0; iCollected < CollectedActors.Num(); ++iCollected)
	{
		//cast the actor to APickup
		ABaseDrop* const TestPickup = Cast<ABaseDrop>(CollectedActors[iCollected]);
		//if the cast is successful and the pickup is valid and active
		if (TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive())
		{
			if (TestPickup->IsA(SpeedIncrease_))
			{
				MovementPtr->MaxWalkSpeed = 1000;
				bombScale_ = FVector(1.0f, 1.0f, 1.0f);
				maxBombs = 1;
				currentPowerup = "Speed Increase";
			}

			else if (TestPickup->IsA(BigBomb_))
			{
				MovementPtr->MaxWalkSpeed = 600;
				bombScale_ = FVector(2.0f, 2.0f, 2.0f);
				maxBombs = 1;
				currentPowerup = "Larger Bombs";
			}

			else if (TestPickup->IsA(MultiBomb_))
			{
				MovementPtr->MaxWalkSpeed = 600;
				bombScale_ = FVector(1.0f, 1.0f, 1.0f);
				maxBombs = 3;
				currentPowerup = "Multiple Bombs";
			}

			//call the pickup's is collectd function
			TestPickup->WasCollected();
			//deactivate he pickup
			TestPickup->SetActive(false);
		}
	}
}


void APlayerCharacter2::SetBombs()
{
	if (bombsLeft < maxBombs)
	{
		bombsLeft++;
	}
}

void APlayerCharacter2::SetMaxBombs(int maxBombs_)
{
	maxBombs = maxBombs_;
}

FString APlayerCharacter2::GetCurrentPowerup() const
{
	return currentPowerup;
}


int APlayerCharacter2::GetBombs() const
{
	return bombsLeft;
}