// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "adapterESGameMode.generated.h"

UCLASS(MinimalAPI)
class AadapterESGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AadapterESGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AadapterESPawn* jugador;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AADAPTER_EXTRANJERA* adapter;
};



