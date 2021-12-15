// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructableWall.h"

ADestructableWall::ADestructableWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set the wall to be indestructable
	isBreakable = true;
}

ADestructableWall::~ADestructableWall()
{

}


//destroy the wall
void ADestructableWall::DestroyWall()
{
	int randomNumber = (rand() % 10)+1;

	if (randomNumber <= 3)
	{

	}


	Destroy();
}