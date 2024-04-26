// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyActor::Destroyed()
{  
	Super::Destroyed();
	//UKismetSystemLibrary::PrintString(this, TEXT("OK"));
}

void AMyActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	//UKismetSystemLibrary::PrintString(this, TEXT("Endplay"));
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

