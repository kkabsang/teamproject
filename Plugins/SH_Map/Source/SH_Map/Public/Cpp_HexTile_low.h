// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cpp_HexTile_low.generated.h"

UCLASS()
class SH_MAP_API ACpp_HexTile_low : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACpp_HexTile_low();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	UFUNCTION()
		void BeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
							int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	// 스태틱 메쉬
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* m_pStComp; 
	// 콜리전 박스
	UPROPERTY()
		class UBoxComponent* m_pBoxComp1;
	UPROPERTY()
		class UBoxComponent* m_pBoxComp2;
	UPROPERTY()
		class UBoxComponent* m_pBoxComp3;
	
};
