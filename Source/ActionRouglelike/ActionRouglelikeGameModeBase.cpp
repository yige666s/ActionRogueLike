// Copyright Epic Games, Inc. All Rights Reserved.


#include "ActionRouglelikeGameModeBase.h"
#include "MyActor.h"

void AActionRouglelikeGameModeBase::BeginPlay()
{
	Super::BeginPlay();	// ���ø���Beginplay
	GetWorld()->SpawnActor<AMyActor>(); // ͨ��GameMode�е�GetWorld������UWorld���󴴽�Actor����
}
