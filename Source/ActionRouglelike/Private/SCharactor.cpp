// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharactor.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ASCharactor::ASCharactor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
}

// Called when the game starts or when spawned
void ASCharactor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASCharactor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ASCharactor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

