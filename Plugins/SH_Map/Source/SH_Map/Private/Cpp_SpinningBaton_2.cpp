// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_SpinningBaton_2.h"
#include "Components/BoxComponent.h" // UBoxComponent ����Ϸ���

// Sets default values
ACpp_SpinningBaton_2::ACpp_SpinningBaton_2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ����ƽ�޽� ������Ʈ�� �����ϰ� �޽��� �Ҵ�
	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMeshComponent"));
	RootComponent = m_pStComp;
	m_pStComp->SetCollisionProfileName("BlockAll");

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/SpinningBaton_2_low_sm.SpinningBaton_2_low_sm'"));

	// �޽� ���� ��ȿ���� �˻�
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}

	// �ʱ� ȸ����, �𸮾󿡼� ��������
	RollValue = 0.f;
	PitchValue = 0.f;
	YawValue = 0.f;

	// �ݸ����ڽ�
	m_pBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_1"));
	m_pBoxComp->SetBoxExtent(FVector(480.f, 20.f, 10.f)); // ũ��
	m_pBoxComp->AddRelativeLocation(FVector(0.f, 0.f, 30.f), false, 0, ETeleportType::None); // ����� ��ġ
	m_pBoxComp->SetCollisionProfileName("BlockAll"); // �ݸ���ä��
	m_pBoxComp->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������

}

// Called every frame
void ACpp_SpinningBaton_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// �޽� ȸ��
	FQuat SCompRot = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(SCompRot, false, 0, ETeleportType::None);
}
