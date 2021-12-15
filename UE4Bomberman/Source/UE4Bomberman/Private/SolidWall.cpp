// Fill out your copyright notice in the Description page of Project Settings.


#include "SolidWall.h"

ASolidWall::ASolidWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//set the wall to be indestructable
	isBreakable = false;
}

