// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacketPatrol/PacketSpawnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketSpawnComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PACKETPATROL_API UClass* Z_Construct_UClass_UPacketSpawnComponent();
	PACKETPATROL_API UClass* Z_Construct_UClass_UPacketSpawnComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacketPatrol();
// End Cross Module References
	DEFINE_FUNCTION(UPacketSpawnComponent::execChoose)
	{
		P_GET_TMAP_REF(FString,double,Z_Param_Out_WeightMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Choose(Z_Param_Out_WeightMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPacketSpawnComponent::execStartListeningPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartListeningPort();
		P_NATIVE_END;
	}
	void UPacketSpawnComponent::StaticRegisterNativesUPacketSpawnComponent()
	{
		UClass* Class = UPacketSpawnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Choose", &UPacketSpawnComponent::execChoose },
			{ "StartListeningPort", &UPacketSpawnComponent::execStartListeningPort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics
	{
		struct PacketSpawnComponent_eventChoose_Parms
		{
			TMap<FString,double> WeightMap;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WeightMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap_ValueProp = { "WeightMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap_Key_KeyProp = { "WeightMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PacketSpawnComponent_eventChoose_Parms, WeightMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PacketSpawnComponent_eventChoose_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_WeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacketSpawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPacketSpawnComponent, nullptr, "Choose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::PacketSpawnComponent_eventChoose_Parms), Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPacketSpawnComponent_Choose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPacketSpawnComponent_Choose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacketSpawnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPacketSpawnComponent, nullptr, "StartListeningPort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPacketSpawnComponent);
	UClass* Z_Construct_UClass_UPacketSpawnComponent_NoRegister()
	{
		return UPacketSpawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPacketSpawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPacketSpawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PacketPatrol,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPacketSpawnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPacketSpawnComponent_Choose, "Choose" }, // 2139625311
		{ &Z_Construct_UFunction_UPacketSpawnComponent_StartListeningPort, "StartListeningPort" }, // 1551374742
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPacketSpawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PacketSpawnComponent.h" },
		{ "ModuleRelativePath", "PacketSpawnComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPacketSpawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPacketSpawnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPacketSpawnComponent_Statics::ClassParams = {
		&UPacketSpawnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPacketSpawnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPacketSpawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPacketSpawnComponent()
	{
		if (!Z_Registration_Info_UClass_UPacketSpawnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPacketSpawnComponent.OuterSingleton, Z_Construct_UClass_UPacketSpawnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPacketSpawnComponent.OuterSingleton;
	}
	template<> PACKETPATROL_API UClass* StaticClass<UPacketSpawnComponent>()
	{
		return UPacketSpawnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPacketSpawnComponent);
	UPacketSpawnComponent::~UPacketSpawnComponent() {}
	struct Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketSpawnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketSpawnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPacketSpawnComponent, UPacketSpawnComponent::StaticClass, TEXT("UPacketSpawnComponent"), &Z_Registration_Info_UClass_UPacketSpawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPacketSpawnComponent), 1485233859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketSpawnComponent_h_2734249805(TEXT("/Script/PacketPatrol"),
		Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketSpawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketSpawnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
