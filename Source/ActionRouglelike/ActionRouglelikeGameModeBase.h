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
};
