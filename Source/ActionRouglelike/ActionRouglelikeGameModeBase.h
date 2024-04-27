// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ActionRouglelikeGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class ACTIONROUGLELIKE_API AActionRouglelikeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UFUNCTION(Exec) //��selfDestoryActorע��Ϊָ���
		void SelfDestoryActor();

	UFUNCTION(Exec)
		void FunString();

	UFUNCTION(Exec)
		void FunName();

	UFUNCTION(Exec)
		void FunText();

	AActor* MyActor;
};
