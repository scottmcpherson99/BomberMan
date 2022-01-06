// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Wall.h"
#include "DestructableWall.generated.h"

/**
 * 
 */
UCLASS()
class UE4BOMBERMAN_API ADestructableWall : public AWall
{
	GENERATED_BODY()

public:
	ADestructableWall();

	~ADestructableWall();

	void DestroyWall();
protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Powerups")
		TSubclassOf<class AActor> SpeedIncrease_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Powerups")
		TSubclassOf<class AActor> BigBomb_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Powerups")
		TSubclassOf<class AActor> MultiBomb_;

};
