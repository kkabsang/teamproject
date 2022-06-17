// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_CubeTile_low.h"
#include "Components/BoxComponent.h" // UBoxComponent 사용하려면

// Sets default values
ACpp_CubeTile_low::ACpp_CubeTile_low()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pStComp = CreateDefaultSubobject<UStaticMeshComponent>("BaseMeshComponent");
	RootComponent = m_pStComp;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/CubeTile_low_sm.CubeTile_low_sm'"));
	
	// 메쉬 에셋 유효한지 검사
	if (MeshAsset.Object != nullptr)
	{
		m_pStComp->SetStaticMesh(MeshAsset.Object);
	}
	// 콜리전박스
	m_pBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_1"));
	m_pBoxComp->SetBoxExtent(FVector(99.f, 99.f, 20.f)); // 크기
	m_pBoxComp->AddRelativeLocation(FVector(0.f, 0.f, 20.f), false, 0, ETeleportType::None); // 상대적 위치
	m_pBoxComp->SetupAttachment(RootComponent); // 루트컴포넌트에 붙여줘야함

	m_pBoxComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	m_pBoxComp->SetCollisionResponseToAllChannels(ECR_Overlap); // 채널들의 충돌여부 일괄 결정
	//m_pBoxComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore); // 특정채널의 충돌여부 결정
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

