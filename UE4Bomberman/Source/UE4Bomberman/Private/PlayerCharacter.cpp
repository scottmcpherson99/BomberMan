// Fill out your copyright notice in the Description page of Project Settings.

#include <Components/SkeletalMeshComponent.h>
#include "PlayerCharacter.h"
#include "Bomb.h"
#include "BaseDrop.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
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

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAction("DropBomb", IE_Pressed, this, &APlayerCharacter::SpawnBomb);
	PlayerInputComponent->BindAction("Pickup PowerUp", IE_Pressed, this, &APlayerCharacter::CollectPickups);

	
}


//move the character forward
void APlayerCharacter::MoveForward(float value)
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
void APlayerCharacter::MoveRight(float value)
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

void APlayerCharacter::SpawnBomb()
{
	//check to see if the type of bomb has been selected
	if (bombToSpawn != NULL)
	{
		//check for valid world
		UWorld* const world = GetWorld();

		if (world)
		{
			//set the spawn parameters
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			FVector SpawnLocation = RootComponent->GetComponentLocation();

			FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);

			ABomb* const droppedBomb = world->SpawnActor<ABomb>(bombToSpawn, SpawnLocation, SpawnRotator, SpawnParams);

		}
	}
}

void APlayerCharacter::CollectPickups()
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
			//call the pickup's is collectd function
			TestPickup->WasCollected();
			//deactivate he pickup
			TestPickup->SetActive(false);
		}
	}
}