// Copyright Epic Games, Inc. All Rights Reserved.


#include "ActionRouglelikeGameModeBase.h"
#include "MyActor.h"

void AActionRouglelikeGameModeBase::BeginPlay()
{
	Super::BeginPlay();	// 调用父类Beginplay
	//GetWorld()->SpawnActor<AMyActor>(); // 通过GameMode中的GetWorld创建的UWorld对象创建Actor对象
	 MyActor = GetWorld()->SpawnActor(AMyActor::StaticClass()); // 通过反射动态创建对象
	//if (myActor) myActor->Destroy();
}

void AActionRouglelikeGameModeBase::SelfDestoryActor()
{
	//if(MyActor) MyActor->SetLifeSpan(1.5);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("TEST"));
} 
