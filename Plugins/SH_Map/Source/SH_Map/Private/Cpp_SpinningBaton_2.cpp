// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_SpinningBaton_2.h"
#include "Components/BoxComponent.h" // UBoxComponent 사용하려면

// Sets default values
ACpp_SpinningBaton_2::ACpp_SpinningBaton_2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 스태틱메쉬 컴포넌트를 생성하고 메쉬에 할당
	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMeshComponent"));
	RootComponent = m_pStComp;
	m_pStComp->SetCollisionProfileName("BlockAll");

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/SpinningBaton_2_low_sm.SpinningBaton_2_low_sm'"));

	// 메쉬 에셋 유효한지 검사
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}

	// 초기 회전값, 언리얼에서 편집가능
	RollValue = 0.f;
	PitchValue = 0.f;
	YawValue = 0.f;

	// 콜리전박스
	m_pBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_1"));
	m_pBoxComp->SetBoxExtent(FVector(480.f, 20.f, 10.f)); // 크기
	m_pBoxComp->AddRelativeLocation(FVector(0.f, 0.f, 30.f), false, 0, ETeleportType::None); // 상대적 위치
	m_pBoxComp->SetCollisionProfileName("BlockAll"); // 콜리전채널
	m_pBoxComp->SetupAttachment(RootComponent); // 루트컴포넌트에 붙여줘야함

}

// Called every frame
void ACpp_SpinningBaton_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 메쉬 회전
	FQuat SCompRot = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(SCompRot, false, 0, ETeleportType::None);
}
