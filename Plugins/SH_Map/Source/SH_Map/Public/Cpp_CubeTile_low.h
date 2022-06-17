// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cpp_CubeTile_low.generated.h"

UCLASS()
class SH_MAP_API ACpp_CubeTile_low : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACpp_CubeTile_low();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY()
		UStaticMeshComponent* m_pStComp;
	UPROPERTY()
		class UBoxComponent* m_pBoxComp;
};
