// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SH_Map/Public/Cpp_FloorDisc_low.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_FloorDisc_low() {}
// Cross Module References
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_FloorDisc_low_NoRegister();
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_FloorDisc_low();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SH_Map();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACpp_FloorDisc_low::StaticRegisterNativesACpp_FloorDisc_low()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACpp_FloorDisc_low);
	UClass* Z_Construct_UClass_ACpp_FloorDisc_low_NoRegister()
	{
		return ACpp_FloorDisc_low::StaticClass();
	}
	struct Z_Construct_UClass_ACpp_FloorDisc_low_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACpp_FloorDisc_low_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SH_Map,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_FloorDisc_low_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cpp_FloorDisc_low.h" },
		{ "ModuleRelativePath", "Public/Cpp_FloorDisc_low.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_m_pStComp_MetaData[] = {
		{ "Category", "Cpp_FloorDisc_low" },
		{ "Comment", "// ????\xc6\xbd ?\xde\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_FloorDisc_low.h" },
		{ "ToolTip", "????\xc6\xbd ?\xde\xbd?" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_m_pStComp = { "m_pStComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_FloorDisc_low, m_pStComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_m_pStComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_m_pStComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "// \xc8\xb8??\n" },
		{ "ModuleRelativePath", "Public/Cpp_FloorDisc_low.h" },
		{ "ToolTip", "\xc8\xb8??" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_FloorDisc_low, RollValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_RollValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_RollValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_PitchValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Cpp_FloorDisc_low.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_FloorDisc_low, PitchValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_PitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_PitchValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_YawValue_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Cpp_FloorDisc_low.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_FloorDisc_low, YawValue), METADATA_PARAMS(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_YawValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACpp_FloorDisc_low_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_m_pStComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_RollValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_PitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_FloorDisc_low_Statics::NewProp_YawValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACpp_FloorDisc_low_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACpp_FloorDisc_low>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACpp_FloorDisc_low_Statics::ClassParams = {
		&ACpp_FloorDisc_low::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACpp_FloorDisc_low_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_FloorDisc_low_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACpp_FloorDisc_low()
	{
		if (!Z_Registration_Info_UClass_ACpp_FloorDisc_low.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACpp_FloorDisc_low.OuterSingleton, Z_Construct_UClass_ACpp_FloorDisc_low_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACpp_FloorDisc_low.OuterSingleton;
	}
	template<> SH_MAP_API UClass* StaticClass<ACpp_FloorDisc_low>()
	{
		return ACpp_FloorDisc_low::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACpp_FloorDisc_low);
	struct Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_FloorDisc_low_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_FloorDisc_low_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACpp_FloorDisc_low, ACpp_FloorDisc_low::StaticClass, TEXT("ACpp_FloorDisc_low"), &Z_Registration_Info_UClass_ACpp_FloorDisc_low, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACpp_FloorDisc_low), 4231172879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_FloorDisc_low_h_1587928004(TEXT("/Script/SH_Map"),
		Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_FloorDisc_low_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_FloorDisc_low_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
