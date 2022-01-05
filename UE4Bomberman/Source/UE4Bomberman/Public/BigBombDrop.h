// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseDrop.h"
#include "BigBombDrop.generated.h"

/**
 * 
 */
UCLASS()
class UE4BOMBERMAN_API ABigBombDrop : public ABaseDrop
{
	GENERATED_BODY()

public:

	//override WasCollected function
	void WasCollected_Implementation() override;
};
