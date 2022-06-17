// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SH_Map/Public/Cpp_CubeTile_low.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_CubeTile_low() {}
// Cross Module References
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_CubeTile_low_NoRegister();
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_CubeTile_low();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SH_Map();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ACpp_CubeTile_low::StaticRegisterNativesACpp_CubeTile_low()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACpp_CubeTile_low);
	UClass* Z_Construct_UClass_ACpp_CubeTile_low_NoRegister()
	{
		return ACpp_CubeTile_low::StaticClass();
	}
	struct Z_Construct_UClass_ACpp_CubeTile_low_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pStComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pStComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBoxComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACpp_CubeTile_low_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SH_Map,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_CubeTile_low_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cpp_CubeTile_low.h" },
		{ "ModuleRelativePath", "Public/Cpp_CubeTile_low.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pStComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CubeTile_low.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pStComp = { "m_pStComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_CubeTile_low, m_pStComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pStComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pStComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pBoxComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CubeTile_low.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pBoxComp = { "m_pBoxComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_CubeTile_low, m_pBoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pBoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pBoxComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACpp_CubeTile_low_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pStComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_CubeTile_low_Statics::NewProp_m_pBoxComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACpp_CubeTile_low_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACpp_CubeTile_low>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACpp_CubeTile_low_Statics::ClassParams = {
		&ACpp_CubeTile_low::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACpp_CubeTile_low_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_CubeTile_low_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACpp_CubeTile_low_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_CubeTile_low_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACpp_CubeTile_low()
	{
		if (!Z_Registration_Info_UClass_ACpp_CubeTile_low.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACpp_CubeTile_low.OuterSingleton, Z_Construct_UClass_ACpp_CubeTile_low_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACpp_CubeTile_low.OuterSingleton;
	}
	template<> SH_MAP_API UClass* StaticClass<ACpp_CubeTile_low>()
	{
		return ACpp_CubeTile_low::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACpp_CubeTile_low);
	struct Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_CubeTile_low_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_CubeTile_low_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACpp_CubeTile_low, ACpp_CubeTile_low::StaticClass, TEXT("ACpp_CubeTile_low"), &Z_Registration_Info_UClass_ACpp_CubeTile_low, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACpp_CubeTile_low), 3518733480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_CubeTile_low_h_314279737(TEXT("/Script/SH_Map"),
		Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_CubeTile_low_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_CubeTile_low_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
