// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "bounce_Ball.h"
#include "ADAPTER_EXTRANJERA.generated.h"

UCLASS()
class ADAPTERES_API AADAPTER_EXTRANJERA : public AActor, public Ibounce_Ball
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AADAPTER_EXTRANJERA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Ball Adapter")
	class ABall* Ball;
public:
	void lanzar() override;
};
