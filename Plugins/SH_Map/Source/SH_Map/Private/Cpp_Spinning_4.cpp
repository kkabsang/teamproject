// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_Spinning_4.h"
#include "Components/BoxComponent.h" // UBoxComponent 사용하려면

// Sets default values
ACpp_Spinning_4::ACpp_Spinning_4()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 스태틱메쉬 컴포넌트를 생성하고 메쉬에 할당
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMeshComponent"));
	RootComponent = Mesh;
	Mesh->SetCollisionProfileName("BlockAll");

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/SH_Map/GameShowAssetPack/Meshes/SpinningBaton_4_low_sm.SpinningBaton_4_low_sm'"));

	// 메쉬 에셋 유효한지 검사
	if (MeshAsset.Object != nullptr)
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}

	// 초기 회전값, 언리얼에서 편집가능
	RollValue = 0.f;
	PitchValue = 0.f;
	YawValue = 0.f;

	// 콜리전박스
	CollisionBox_1 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_1"));
	CollisionBox_1->SetBoxExtent(FVector(480.f, 20.f, 10.f)); // 크기
	FVector CollionBox1Location = FVector(0.f, 0.f, 30.f); // 위치
	CollisionBox_1->AddRelativeLocation(CollionBox1Location, false, 0, ETeleportType::None); // 상대적 위치
	CollisionBox_1->SetCollisionProfileName("BlockAll"); // 콜리전채널
	CollisionBox_1->SetupAttachment(RootComponent); // 루트컴포넌트에 붙여줘야함

	CollisionBox_2 = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent_2"));
	CollisionBox_2->SetBoxExtent(FVector(20.f, 480.f, 10.f)); // 크기
	FVector CollionBox_2Location = FVector(0.f, 0.f, 30.f); // 위치
	CollisionBox_2->AddRelativeLocation(CollionBox_2Location, false, 0, ETeleportType::None); // 상대적 위치
	CollisionBox_2->SetCollisionProfileName("BlockAll"); // 콜리전채널
	CollisionBox_2->SetupAttachment(RootComponent); // 루트컴포넌트에 붙여줘야함
}

// Called every frame
void ACpp_Spinning_4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 메쉬 회전
	FQuat MeshQuatRoataion = FQuat(FRotator(PitchValue, YawValue, RollValue));
	AddActorLocalRotation(MeshQuatRoataion, false, 0, ETeleportType::None);
}
