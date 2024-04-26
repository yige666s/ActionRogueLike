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
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("TEST"),true,FVector2D(5,5));
	//UE_LOG(LogTemp, Log, TEXT("ok"));

	const char* test = "helloworld";
	TCHAR* tmp = ANSI_TO_TCHAR(test);	// TCHAR是UE中的传统字符串
	UE_LOG(LogTemp, Log, TEXT("%s"), tmp);

	UE_LOG(LogTemp, Log, TEXT("i am %d years old, height is %f cm, come from %s"), FMath::RandRange(0, 100), FMath::FRandRange(100, 200), TEXT("北京"));
}  
 