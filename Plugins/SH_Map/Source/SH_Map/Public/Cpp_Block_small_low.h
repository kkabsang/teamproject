// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cpp_Block_small_low.generated.h"

UCLASS()
class SH_MAP_API ACpp_Block_small_low : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACpp_Block_small_low();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	UPROPERTY(VisibleAnywhere)
		USceneComponent* m_pScComp;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* m_pStComp;

public:
	void MoveComponent();
	void ReturnComponent();
public:
	FVector MoveLocation;
};
