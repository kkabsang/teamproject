// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cpp_SpinningBaton_4.generated.h"

UCLASS()
class SH_MAP_API ACpp_SpinningBaton_4 : public AActor
{
	GENERATED_BODY()

public: // Sets default values for this actor's properties
	ACpp_SpinningBaton_4();

public: // Called every frame
	virtual void Tick(float DeltaTime) override;

public: // ����ƽ �޽�
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* m_pStComp;

public: // ȸ��
	UPROPERTY(EditAnywhere, Category = "Rotation")
		float RollValue;
	UPROPERTY(EditAnywhere, Category = "Rotation")
		float PitchValue;
	UPROPERTY(EditAnywhere, Category = "Rotation")
		float YawValue;

public:	// �ݸ��� �ڽ�
	UPROPERTY()
		class UBoxComponent* m_pBoxComp1;
	UPROPERTY()
		class UBoxComponent* m_pBoxComp2;

};
