// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_CubeTile_low.h"
#include "Components/BoxComponent.h" // UBoxComponent ����Ϸ���

// Sets default values
ACpp_CubeTile_low::ACpp_CubeTile_low()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	RootComponent = m_pStComp;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/CubeTile_low_sm.CubeTile_low_sm'"));
	
	// �޽� ���� ��ȿ���� �˻�
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}
	// �ݸ����ڽ�
	m_pBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_1"));
	m_pBoxComp->SetBoxExtent(FVector(99.f, 99.f, 20.f)); // ũ��
	m_pBoxComp->AddRelativeLocation(FVector(0.f, 0.f, 20.f), false, 0, ETeleportType::None); // ����� ��ġ
	m_pBoxComp->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������

	m_pBoxComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_pBoxComp->SetCollisionResponseToAllChannels(ECR_Overlap); // ä�ε��� �浹���� �ϰ� ����
	//m_pBoxComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore); // Ư��ä���� �浹���� ����
}

// Called when the game starts or when spawned
void ACpp_CubeTile_low::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACpp_CubeTile_low::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

