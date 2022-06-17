// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SH_Map/Public/Cpp_SpinningBaton_2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_SpinningBaton_2() {}
// Cross Module References
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_SpinningBaton_2_NoRegister();
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_SpinningBaton_2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SH_Map();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ACpp_SpinningBaton_2::StaticRegisterNativesACpp_SpinningBaton_2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACpp_SpinningBaton_2);
	UClass* Z_Construct_UClass_ACpp_SpinningBaton_2_NoRegister()
	{
		return ACpp_SpinningBaton_2::StaticClass();
	}
	struct Z_Construct_UClass_ACpp_SpinningBaton_2_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBoxComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SH_Map,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cpp_SpinningBaton_2.h" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pStComp_MetaData[] = {
		{ "Category", "Cpp_SpinningBaton_2" },
		{ "Comment", "// ????\xc6\xbd ?\xde\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_2.h" },
		{ "ToolTip", "????\xc6\xbd ?\xde\xbd?" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pStComp = { "m_pStComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_2, m_pStComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pStComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pStComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "// \xc8\xb8??\n" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_2.h" },
		{ "ToolTip", "\xc8\xb8??" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_2, RollValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_RollValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_RollValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_PitchValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_2, PitchValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_PitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_PitchValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_YawValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_2, YawValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_YawValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pBoxComp_MetaData[] = {
		{ "Comment", "// ?\xdd\xb8??? ?\xda\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_SpinningBaton_2.h" },
		{ "ToolTip", "?\xdd\xb8??? ?\xda\xbd?" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pBoxComp = { "m_pBoxComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_SpinningBaton_2, m_pBoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pBoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pBoxComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pStComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_RollValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_PitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_YawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::NewProp_m_pBoxComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACpp_SpinningBaton_2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::ClassParams = {
		&ACpp_SpinningBaton_2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACpp_SpinningBaton_2()
	{
		if (!Z_Registration_Info_UClass_ACpp_SpinningBaton_2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACpp_SpinningBaton_2.OuterSingleton, Z_Construct_UClass_ACpp_SpinningBaton_2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACpp_SpinningBaton_2.OuterSingleton;
	}
	template<> SH_MAP_API UClass* StaticClass<ACpp_SpinningBaton_2>()
	{
		return ACpp_SpinningBaton_2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACpp_SpinningBaton_2);
	struct Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACpp_SpinningBaton_2, ACpp_SpinningBaton_2::StaticClass, TEXT("ACpp_SpinningBaton_2"), &Z_Registration_Info_UClass_ACpp_SpinningBaton_2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACpp_SpinningBaton_2), 279925718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_2_h_2216500266(TEXT("/Script/SH_Map"),
		Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_SpinningBaton_2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
