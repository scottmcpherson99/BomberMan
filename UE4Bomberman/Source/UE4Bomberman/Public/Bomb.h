// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomb.generated.h"

class UStaticMesh;
class UBoxComponent;
class ADestructableWall;

UCLASS()
class UE4BOMBERMAN_API ABomb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomb();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void ExplodeBomb();

	//Create the root mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bomb Mesh")
		UStaticMeshComponent* RootComp;

	//Create the bomb mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bomb Mesh")
		UStaticMeshComponent* MeshComp;

	//Create the collision boxes for the bombs explosion
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision Box")
		UBoxComponent* CollisionBoxX;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision Box")
		UBoxComponent* CollisionBoxY;

	bool isRemoteControlled = false;

	void OnOverlapDestroy(UPrimitiveComponent* OverlappedComp, AActor* OtherActor);
	
	void CheckForOverlappingActors();

	
private:
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wall")
		TSubclassOf<class ADestructableWall> DestructrableWall_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player 1")
		TSubclassOf<class AActor> PlayerCharacter_;
};
