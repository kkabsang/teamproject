// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_Block_small_low.h"
#include "Kismet/KismetSystemLibrary.h" // MoveComponentTo ���
#include "Kismet/KismetMathLibrary.h" // RandomFloatInRange ���

// Sets default values
ACpp_Block_small_low::ACpp_Block_small_low()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// ��������Ʈ
	m_pScComp = CreateDefaultSubobject<USceneComponent>("m_pScComp");
	RootComponent = m_pScComp;

	// ����ƽ�޽� ������Ʈ
	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>("m_pStComp");
	m_pStComp->SetCollisionProfileName("BlockAll");
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/Block_small_low_sm.Block_small_low_sm'"));

	// ����ƽ�޽� ũ������
	m_pStComp->SetWorldScale3D(FVector(1.7, 5.0, 1.7));

	// �޽� ���� ��ȿ���� �˻�
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}

	// ��������Ʈ�� ����ƽ�޽� ����
	m_pStComp->SetupAttachment(m_pScComp);

}

// Called when the game starts or when spawned
void ACpp_Block_small_low::BeginPlay()
{
	Super::BeginPlay();

	MoveComponent();
}

void ACpp_Block_small_low::MoveComponent()
{
	FTimerHandle WaitHandle;
	float WaitTime = UKismetMathLibrary::RandomFloatInRange(0.5f, 1.0f); // ������ �ð�����

	FLatentActionInfo InfoMove;
	InfoMove.CallbackTarget = this; // �Լ��� ������ ��ü

	// Move
	GetWorld()->GetTimerManager().SetTimer(WaitHandle, FTimerDelegate::CreateLambda([&]()
		{
			MoveLocation = GetActorLocation() + FVector(0, 330, 0);
			float OverTime = UKismetMathLibrary::RandomFloatInRange(0.5f, 1.0f); // �����ð�
			UKismetSystemLibrary::MoveComponentTo(m_pScComp, MoveLocation, FRotator(0, 0, 0),
				true, true, OverTime, false, EMoveComponentAction::Type::Move, InfoMove); // �̵�
			SetActorLocation(MoveLocation);
			ReturnComponent();
		}), WaitTime, false);

}

void ACpp_Block_small_low::ReturnComponent()
{

	FTimerHandle WaitHandle;
	float WaitTime = UKismetMathLibrary::RandomFloatInRange(0.5f, 1.0f); // ������ �ð�����

	FLatentActionInfo InfoReturn;
	InfoReturn.CallbackTarget = this; // �Լ��� ������ ��ü

	// Move
	GetWorld()->GetTimerManager().SetTimer(WaitHandle, FTimerDelegate::CreateLambda([&]()
		{
			MoveLocation = MoveLocation - FVector(0, 310, 0);
			float OverTime = UKismetMathLibrary::RandomFloatInRange(0.5f, 1.0f); // �����ð�

			UKismetSystemLibrary::MoveComponentTo(m_pScComp, MoveLocation, FRotator(0, 0, 0),
				true, true, OverTime, false, EMoveComponentAction::Type::Move, InfoReturn); // �̵�
			SetActorLocation(MoveLocation);
			MoveComponent();
		}), WaitTime, false);
	return;
}

