// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SH_Map/Public/Cpp_HexTile_low.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_HexTile_low() {}
// Cross Module References
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_HexTile_low_NoRegister();
	SH_MAP_API UClass* Z_Construct_UClass_ACpp_HexTile_low();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SH_Map();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACpp_HexTile_low::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACpp_HexTile_low::StaticRegisterNativesACpp_HexTile_low()
	{
		UClass* Class = ACpp_HexTile_low::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &ACpp_HexTile_low::execBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics
	{
		struct Cpp_HexTile_low_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cpp_HexTile_low_eventBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cpp_HexTile_low_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cpp_HexTile_low_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cpp_HexTile_low_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Cpp_HexTile_low_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Cpp_HexTile_low_eventBeginOverlap_Parms), &Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cpp_HexTile_low_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cpp_HexTile_low.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACpp_HexTile_low, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::Cpp_HexTile_low_eventBeginOverlap_Parms), Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACpp_HexTile_low);
	UClass* Z_Construct_UClass_ACpp_HexTile_low_NoRegister()
	{
		return ACpp_HexTile_low::StaticClass();
	}
	struct Z_Construct_UClass_ACpp_HexTile_low_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pStComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pStComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBoxComp1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBoxComp1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBoxComp2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBoxComp2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBoxComp3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBoxComp3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACpp_HexTile_low_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SH_Map,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACpp_HexTile_low_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACpp_HexTile_low_BeginOverlap, "BeginOverlap" }, // 589239651
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_HexTile_low_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cpp_HexTile_low.h" },
		{ "ModuleRelativePath", "Public/Cpp_HexTile_low.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pStComp_MetaData[] = {
		{ "Category", "Cpp_HexTile_low" },
		{ "Comment", "// ????\xc6\xbd ?\xde\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_HexTile_low.h" },
		{ "ToolTip", "????\xc6\xbd ?\xde\xbd?" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pStComp = { "m_pStComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_HexTile_low, m_pStComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pStComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pStComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp1_MetaData[] = {
		{ "Comment", "// ?\xdd\xb8??? ?\xda\xbd?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_HexTile_low.h" },
		{ "ToolTip", "?\xdd\xb8??? ?\xda\xbd?" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp1 = { "m_pBoxComp1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_HexTile_low, m_pBoxComp1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp2_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_HexTile_low.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp2 = { "m_pBoxComp2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_HexTile_low, m_pBoxComp2), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp3_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_HexTile_low.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp3 = { "m_pBoxComp3", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACpp_HexTile_low, m_pBoxComp3), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACpp_HexTile_low_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pStComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACpp_HexTile_low_Statics::NewProp_m_pBoxComp3,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACpp_HexTile_low_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACpp_HexTile_low>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACpp_HexTile_low_Statics::ClassParams = {
		&ACpp_HexTile_low::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACpp_HexTile_low_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_HexTile_low_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACpp_HexTile_low_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACpp_HexTile_low_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACpp_HexTile_low()
	{
		if (!Z_Registration_Info_UClass_ACpp_HexTile_low.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACpp_HexTile_low.OuterSingleton, Z_Construct_UClass_ACpp_HexTile_low_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACpp_HexTile_low.OuterSingleton;
	}
	template<> SH_MAP_API UClass* StaticClass<ACpp_HexTile_low>()
	{
		return ACpp_HexTile_low::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACpp_HexTile_low);
	struct Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_HexTile_low_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_HexTile_low_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACpp_HexTile_low, ACpp_HexTile_low::StaticClass, TEXT("ACpp_HexTile_low"), &Z_Registration_Info_UClass_ACpp_HexTile_low, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACpp_HexTile_low), 467334583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_HexTile_low_h_1195033723(TEXT("/Script/SH_Map"),
		Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_HexTile_low_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KGCA41TeamProject_Plugins_SH_Map_Source_SH_Map_Public_Cpp_HexTile_low_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
