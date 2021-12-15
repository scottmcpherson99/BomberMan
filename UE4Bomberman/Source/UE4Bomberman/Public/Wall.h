// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wall.generated.h"


class UStaticMeshComponent;

UCLASS()
class UE4BOMBERMAN_API AWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
protected:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetBreakable() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root")
		UStaticMeshComponent* RootComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Mesh")
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool isBreakable;
};
