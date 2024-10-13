// Fill out your copyright notice in the Description page of Project Settings.


#include "R2Actor.h"

// Sets default values
AR2Actor::AR2Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AR2Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AR2Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

