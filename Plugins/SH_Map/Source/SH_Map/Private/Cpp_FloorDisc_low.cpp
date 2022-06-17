// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_FloorDisc_low.h"

// Sets default values
ACpp_FloorDisc_low::ACpp_FloorDisc_low()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ����ƽ�޽� ������Ʈ�� �����ϰ� �޽��� �Ҵ�
	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	RootComponent = m_pStComp;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/FloorDisc_low_sm.FloorDisc_low_sm'"));

	// �޽� ���� ��ȿ���� �˻�
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}

	// �ʱ� ȸ����, �𸮾󿡼� ��������
	RollValue = 0.f;
	PitchValue = 0.f;
	YawValue = 0.f;
}


// Called every frame
void ACpp_FloorDisc_low::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// �޽� ȸ��
	FQuat SCompRot = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(SCompRot, false, 0, ETeleportType::None);
}

