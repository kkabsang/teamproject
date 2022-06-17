// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_HexTile_low.h"
#include "Components/BoxComponent.h" // UBoxComponent ����Ϸ���

// Sets default values
ACpp_HexTile_low::ACpp_HexTile_low()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	RootComponent = m_pStComp;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/HexTile_low_sm.HexTile_low_sm'"));

	// �޽� ���� ��ȿ���� �˻�
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}

	// �ݸ����ڽ�
	m_pBoxComp1 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_1"));
	m_pBoxComp1->SetBoxExtent(FVector(80.f, 50.f, 20.f)); // ũ��
	m_pBoxComp1->AddRelativeLocation(FVector(0.f, 0.f, 20.f), false, 0, ETeleportType::None); // ����� ��ġ
	m_pBoxComp1->AddRelativeRotation(FQuat(FRotator(0.f, 0.f, 0.f)), false, 0, ETeleportType::None); // ����� ȸ��
	m_pBoxComp1->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������
	m_pBoxComp1->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_pBoxComp1->SetCollisionResponseToAllChannels(ECR_Overlap); // ä�ε��� �浹���� �ϰ� ����
	m_pBoxComp1->OnComponentBeginOverlap.AddDynamic(this, &ACpp_HexTile_low::BeginOverlap);


	m_pBoxComp2 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_2"));
	m_pBoxComp2->SetBoxExtent(FVector(80.f, 50.f, 20.f)); // ũ��
	m_pBoxComp2->AddRelativeLocation(FVector(0.f, 0.f, 20.f), false, 0, ETeleportType::None); // ����� ��ġ
	m_pBoxComp2->AddRelativeRotation(FQuat(FRotator(0.f, 60.f, 0.f)), false, 0, ETeleportType::None); // ����� ȸ��
	m_pBoxComp2->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������
	m_pBoxComp2->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_pBoxComp2->SetCollisionResponseToAllChannels(ECR_Overlap); // ä�ε��� �浹���� �ϰ� ����

	m_pBoxComp3 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_3"));
	m_pBoxComp3->SetBoxExtent(FVector(80.f, 50.f, 20.f)); // ũ��
	m_pBoxComp3->AddRelativeLocation(FVector(0.f, 0.f, 20.f), false, 0, ETeleportType::None); // ����� ��ġ
	m_pBoxComp3->AddRelativeRotation(FQuat(FRotator(0.f, 120.f, 00.f)), false, 0, ETeleportType::None); // ����� ȸ��
	m_pBoxComp3->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������
	m_pBoxComp3->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	m_pBoxComp3->SetCollisionResponseToAllChannels(ECR_Overlap); // ä�ε��� �浹���� �ϰ� ����
}

// Called when the game starts or when spawned
void ACpp_HexTile_low::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACpp_HexTile_low::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACpp_HexTile_low::BeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		UE_LOG(LogTemp, Log, TEXT("Overlap"));
	}
}