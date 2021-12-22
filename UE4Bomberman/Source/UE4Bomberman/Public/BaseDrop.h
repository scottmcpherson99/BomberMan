// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseDrop.generated.h"

UCLASS()
class UE4BOMBERMAN_API ABaseDrop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseDrop();

	//return the mesh for the pickup
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }

	//return whether the pickup is active
	UFUNCTION(BlueprintPure, Category = "Pickup")
		bool IsActive();

	//allows other classes to safely change whether the pickup is active
	UFUNCTION(BlueprintCallable, Category = "Pickup")
		void SetActive(bool newPickupState);

	//function to call when the pickup is collected
	UFUNCTION(BlueprintNativeEvent)
		void WasCollected();
	virtual void WasCollected_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//true when the pickup can be used and false when the pickup is deactivated
	bool bIsActive;

private:
	//static mesh to represent the pickup in the level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PickupMesh;

};
