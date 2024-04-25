// Copyright Epic Games, Inc. All Rights Reserved.


#include "ActionRouglelikeGameModeBase.h"
#include "MyActor.h"

void AActionRouglelikeGameModeBase::BeginPlay()
{
	Super::BeginPlay();	// 调用父类Beginplay
	GetWorld()->SpawnActor<AMyActor>(); // 通过GameMode中的GetWorld创建的UWorld对象创建Actor对象
}
