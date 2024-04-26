// Copyright Epic Games, Inc. All Rights Reserved.


#include "ActionRouglelikeGameModeBase.h"
#include "MyActor.h"

void AActionRouglelikeGameModeBase::BeginPlay()
{
	Super::BeginPlay();	// ���ø���Beginplay
	//GetWorld()->SpawnActor<AMyActor>(); // ͨ��GameMode�е�GetWorld������UWorld���󴴽�Actor����
	 MyActor = GetWorld()->SpawnActor(AMyActor::StaticClass()); // ͨ�����䶯̬��������
	//if (myActor) myActor->Destroy();
}

void AActionRouglelikeGameModeBase::SelfDestoryActor()
{
	//if(MyActor) MyActor->SetLifeSpan(1.5);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("TEST"));
} 
