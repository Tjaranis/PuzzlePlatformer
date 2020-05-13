// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMovingPlatform.h"

AMyMovingPlatform::AMyMovingPlatform() {
	SetMobility(EComponentMobility::Movable);
	PrimaryActorTick.bCanEverTick=true;
	
}

void AMyMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority()) {
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}

void AMyMovingPlatform::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	if (!HasAuthority()) {
		FVector Location = GetActorLocation();
		Location += FVector(MoveSpeed * DeltaTime, 0, 0);
		SetActorLocation(Location);
	}
}