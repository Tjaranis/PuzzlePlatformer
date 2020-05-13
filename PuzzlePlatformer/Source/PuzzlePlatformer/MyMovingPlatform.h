// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MyMovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMER_API AMyMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	AMyMovingPlatform();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	float MoveSpeed = 50.f;

};