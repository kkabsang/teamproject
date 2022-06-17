// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_SpinningBaton_4.h"
#include "Components/BoxComponent.h" // UBoxComponent ����Ϸ���

// Sets default values
ACpp_SpinningBaton_4::ACpp_SpinningBaton_4()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ����ƽ�޽� ������Ʈ�� �����ϰ� �޽��� �Ҵ�
	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMeshComponent"));
	RootComponent = m_pStComp;
	
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/SpinningBaton_4_low_sm.SpinningBaton_4_low_sm'"));

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
	m_pBoxComp1 = CreateDefaultSubobject<UBoxComponent>(TEXT("m_pBoxComp1"));
	m_pBoxComp1->SetBoxExtent(FVector(480.f, 20.f, 10.f)); // ũ��
	m_pBoxComp1->AddRelativeLocation(FVector(0.f, 0.f, 30.f), false, 0, ETeleportType::None); // ����� ��ġ
	m_pBoxComp1->SetCollisionProfileName("BlockAll"); // �ݸ���ä��
	m_pBoxComp1->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������
	m_pBoxComp1->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_pBoxComp1->SetCollisionResponseToAllChannels(ECR_Overlap); // ä�ε��� �浹���� �ϰ� ����

	m_pBoxComp2 = CreateDefaultSubobject<UBoxComponent>(TEXT("m_pBoxComp2"));
	m_pBoxComp2->SetBoxExtent(FVector(20.f, 480.f, 10.f)); // ũ��
	m_pBoxComp2->AddRelativeLocation(FVector(0.f, 0.f, 30.f), false, 0, ETeleportType::None); // ����� ��ġ
	m_pBoxComp2->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������
	m_pBoxComp2->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_pBoxComp2->SetCollisionResponseToAllChannels(ECR_Overlap); // ä�ε��� �浹���� �ϰ� ����
	
}

// Called every frame
void ACpp_SpinningBaton_4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// �޽� ȸ��
	FQuat SCompRot = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(SCompRot, false, 0, ETeleportType::None);
}
