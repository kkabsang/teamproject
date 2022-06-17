// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_Spinning_4.h"
#include "Components/BoxComponent.h" // UBoxComponent ����Ϸ���

// Sets default values
ACpp_Spinning_4::ACpp_Spinning_4()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ����ƽ�޽� ������Ʈ�� �����ϰ� �޽��� �Ҵ�
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMeshComponent"));
	RootComponent = Mesh;
	Mesh->SetCollisionProfileName("BlockAll");

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/SpinningBaton_4_low_sm.SpinningBaton_4_low_sm'"));

	// �޽� ���� ��ȿ���� �˻�
	if (MeshAsset.Object != nullptr)
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	// �ʱ� ȸ����, �𸮾󿡼� ��������
	RollValue = 0.f;
	PitchValue = 0.f;
	YawValue = 0.f;

	// �ݸ����ڽ�
	CollisionBox_1 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_1"));
	CollisionBox_1->SetBoxExtent(FVector(480.f, 20.f, 10.f)); // ũ��
	FVector CollionBox1Location = FVector(0.f, 0.f, 30.f); // ��ġ
	CollisionBox_1->AddRelativeLocation(CollionBox1Location, false, 0, ETeleportType::None); // ����� ��ġ
	CollisionBox_1->SetCollisionProfileName("BlockAll"); // �ݸ���ä��
	CollisionBox_1->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������

	CollisionBox_2 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_2"));
	CollisionBox_2->SetBoxExtent(FVector(20.f, 480.f, 10.f)); // ũ��
	FVector CollionBox_2Location = FVector(0.f, 0.f, 30.f); // ��ġ
	CollisionBox_2->AddRelativeLocation(CollionBox_2Location, false, 0, ETeleportType::None); // ����� ��ġ
	CollisionBox_2->SetCollisionProfileName("BlockAll"); // �ݸ���ä��
	CollisionBox_2->SetupAttachment(RootComponent); // ��Ʈ������Ʈ�� �ٿ������
}

// Called every frame
void ACpp_Spinning_4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// �޽� ȸ��
	FQuat MeshQuatRoataion = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(MeshQuatRoataion, false, 0, ETeleportType::None);
}
