// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define PRINTLOG(X,...) UE_LOG(LogTemp,Log,X,__VA_ARGS__)
#define PRINTERROR(X,...) UE_LOG(LogTemp,Error,X, __VA_ARGS__)

