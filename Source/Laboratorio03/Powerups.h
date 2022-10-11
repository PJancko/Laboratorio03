// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Powerups.generated.h"

UCLASS()
class LABORATORIO03_API APowerups : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerups();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BiggerPaddle();

	virtual void SmallerPaddle();

	virtual void CreateBalls();

	virtual void FireBall();
};
