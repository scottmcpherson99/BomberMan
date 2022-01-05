// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerCharacter.generated.h"

class UStaticMeshComponent;
class USkeletalMeshComponent;

UCLASS()
class UE4BOMBERMAN_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Skeletal Mesh")
	USkeletalMeshComponent* MeshComp;

	/** Collection Sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USphereComponent* CollectionSphere;

	void MoveForward(float value);

	void MoveRight(float value);

	void SpawnBomb();

	UPROPERTY(EditAnywhere, Category = "Type of Bomb to spawn")
	TSubclassOf<class ABomb> bombToSpawn;

	//called when we collect any pickups inside the collectionsphere
	UFUNCTION(BlueprintCallable, Category = "Pickups")
		void CollectPickups();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomb Size")
		FVector bombInitialScale_;
private:
	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(GetCharacterMovement());

	int bombsLeft;
	int maxBombs;
	FTimerHandle bombTimer;
	float reloadDelay = 3; 
	FVector bombScale_;
	FString currentPowerup;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Powerups")
		TSubclassOf<class AActor> SpeedIncrease_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Powerups")
		TSubclassOf<class AActor> BigBomb_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Powerups")
		TSubclassOf<class AActor> MultiBomb_;

	

	UFUNCTION(BlueprintCallable, Category = "Bombs")
		void SetBombs();

	UFUNCTION(BlueprintCallable, Category = "Bombs")
	int GetBombs() const;

	UFUNCTION(BlueprintCallable, Category = "Bombs")
		void SetMaxBombs(int maxBombs_);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
		FString GetCurrentPowerup() const;
};
