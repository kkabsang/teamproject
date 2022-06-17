// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SH_Map/Public/Cpp_Block_small_low.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_Block_small_low() {}
// Cross Module References
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_Block_small_low_NoRegister();
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_Block_small_low();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SH_Map();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACpp_Block_small_low::StaticRegisterNativesACpp_Block_small_low()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACpp_Block_small_low);
	UClass* Z_Construct_UClass_ACpp_Block_small_low_NoRegister()
	{
		return ACpp_Block_small_low::StaticClass();
	}
	struct Z_Construct_UClass_ACpp_Block_small_low_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pScComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pScComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pStComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pStComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACpp_Block_small_low_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SH_Map,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_Block_small_low_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cpp_Block_small_low.h" },
		{ "ModuleRelativePath", "Public/Cpp_Block_small_low.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pScComp_MetaData[] = {
		{ "Category", "Cpp_Block_small_low" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_Block_small_low.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pScComp = { "m_pScComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_Block_small_low, m_pScComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pScComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pScComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pStComp_MetaData[] = {
		{ "Category", "Cpp_Block_small_low" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_Block_small_low.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pStComp = { "m_pStComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_Block_small_low, m_pStComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pStComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pStComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACpp_Block_small_low_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pScComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_Block_small_low_Statics::NewProp_m_pStComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACpp_Block_small_low_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACpp_Block_small_low>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACpp_Block_small_low_Statics::ClassParams = {
		&ACpp_Block_small_low::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACpp_Block_small_low_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_Block_small_low_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACpp_Block_small_low_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_Block_small_low_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACpp_Block_small_low()
	{
		if (!Z_Registration_Info_UClass_ACpp_Block_small_low.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACpp_Block_small_low.OuterSingleton, Z_Construct_UClass_ACpp_Block_small_low_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACpp_Block_small_low.OuterSingleton;
	}
	template<> SH_MAP_API UClass* StaticClass<ACpp_Block_small_low>()
	{
		return ACpp_Block_small_low::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACpp_Block_small_low);
	struct Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_Block_small_low_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_Block_small_low_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACpp_Block_small_low, ACpp_Block_small_low::StaticClass, TEXT("ACpp_Block_small_low"), &Z_Registration_Info_UClass_ACpp_Block_small_low, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACpp_Block_small_low), 2844317656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_Block_small_low_h_361069110(TEXT("/Script/SH_Map"),
		Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_Block_small_low_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_Block_small_low_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
