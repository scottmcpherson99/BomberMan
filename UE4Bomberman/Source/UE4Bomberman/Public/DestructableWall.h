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

protected:
	void DestroyWall();
};
