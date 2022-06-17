// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_FloorDisc_low.h"

// Sets default values
ACpp_FloorDisc_low::ACpp_FloorDisc_low()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 스태틱메쉬 컴포넌트를 생성하고 메쉬에 할당
	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	RootComponent = m_pStComp;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/FloorDisc_low_sm.FloorDisc_low_sm'"));

	// 메쉬 에셋 유효한지 검사
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}

	// 초기 회전값, 언리얼에서 편집가능
	RollValue = 0.f;
	PitchValue = 0.f;
	YawValue = 0.f;
}


// Called every frame
void ACpp_FloorDisc_low::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 메쉬 회전
	FQuat SCompRot = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(SCompRot, false, 0, ETeleportType::None);
}

