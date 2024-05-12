// Fill out your copyright notice in the Description page of Project Settings.


#include "ADAPTER_EXTRANJERA.h"
#include "Ball.h"
// Sets default values
AADAPTER_EXTRANJERA::AADAPTER_EXTRANJERA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AADAPTER_EXTRANJERA::BeginPlay()
{
	Super::BeginPlay();
	Ball = GetWorld()->SpawnActor<ABall>(ABall::StaticClass(), FVector(-770, 10, 180), FRotator(0, 0, 0));
}

// Called every frame
void AADAPTER_EXTRANJERA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AADAPTER_EXTRANJERA::lanzar()
{
	if (!Ball)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo Spawnear el adaptador"));
		return;
	}	
	Ball->Launch();
}

