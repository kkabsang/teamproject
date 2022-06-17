// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KGCA41TeamProject/KGCA41TeamProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKGCA41TeamProjectGameModeBase() {}
// Cross Module References
	KGCA41TEAMPROJECT_API UClass* Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_NoRegister();
	KGCA41TEAMPROJECT_API UClass* Z_Construct_UClass_AKGCA41TeamProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KGCA41TeamProject();
// End Cross Module References
	void AKGCA41TeamProjectGameModeBase::StaticRegisterNativesAKGCA41TeamProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKGCA41TeamProjectGameModeBase);
	UClass* Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_NoRegister()
	{
		return AKGCA41TeamProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KGCA41TeamProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KGCA41TeamProjectGameModeBase.h" },
		{ "ModuleRelativePath", "KGCA41TeamProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKGCA41TeamProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics::ClassParams = {
		&AKGCA41TeamProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKGCA41TeamProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AKGCA41TeamProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKGCA41TeamProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AKGCA41TeamProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKGCA41TeamProjectGameModeBase.OuterSingleton;
	}
	template<> KGCA41TEAMPROJECT_API UClass* StaticClass<AKGCA41TeamProjectGameModeBase>()
	{
		return AKGCA41TeamProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKGCA41TeamProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_TeamProject_Source_KGCA41TeamProject_KGCA41TeamProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Source_KGCA41TeamProject_KGCA41TeamProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKGCA41TeamProjectGameModeBase, AKGCA41TeamProjectGameModeBase::StaticClass, TEXT("AKGCA41TeamProjectGameModeBase"), &Z_Registration_Info_UClass_AKGCA41TeamProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKGCA41TeamProjectGameModeBase), 1088683308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Source_KGCA41TeamProject_KGCA41TeamProjectGameModeBase_h_1918788195(TEXT("/Script/KGCA41TeamProject"),
		Z_CompiledInDeferFile_FID_TeamProject_Source_KGCA41TeamProject_KGCA41TeamProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Source_KGCA41TeamProject_KGCA41TeamProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
