// Copyright Epic Games, Inc. All Rights Reserved.

#include "adapterESGameMode.h"
#include "adapterESPawn.h"
#include "Kismet/GameplayStatics.h"
#include "ADAPTER_EXTRANJERA.h"

AadapterESGameMode::AadapterESGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AadapterESPawn::StaticClass();

	PrimaryActorTick.bCanEverTick = true;

}

void AadapterESGameMode::BeginPlay()
{
	Super::BeginPlay();
	jugador = Cast<AadapterESPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	adapter = GetWorld()->SpawnActor<AADAPTER_EXTRANJERA>(AADAPTER_EXTRANJERA::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
	jugador->SetBounceBall(adapter);
	jugador->lanzar();
}

void AadapterESGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

