// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacketPatrol/PacketPatrolGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketPatrolGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PACKETPATROL_API UClass* Z_Construct_UClass_APacketPatrolGameModeBase();
	PACKETPATROL_API UClass* Z_Construct_UClass_APacketPatrolGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacketPatrol();
// End Cross Module References
	void APacketPatrolGameModeBase::StaticRegisterNativesAPacketPatrolGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacketPatrolGameModeBase);
	UClass* Z_Construct_UClass_APacketPatrolGameModeBase_NoRegister()
	{
		return APacketPatrolGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APacketPatrolGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacketPatrolGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PacketPatrol,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacketPatrolGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacketPatrolGameModeBase.h" },
		{ "ModuleRelativePath", "PacketPatrolGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacketPatrolGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacketPatrolGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacketPatrolGameModeBase_Statics::ClassParams = {
		&APacketPatrolGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APacketPatrolGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacketPatrolGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacketPatrolGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APacketPatrolGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacketPatrolGameModeBase.OuterSingleton, Z_Construct_UClass_APacketPatrolGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacketPatrolGameModeBase.OuterSingleton;
	}
	template<> PACKETPATROL_API UClass* StaticClass<APacketPatrolGameModeBase>()
	{
		return APacketPatrolGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacketPatrolGameModeBase);
	APacketPatrolGameModeBase::~APacketPatrolGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketPatrolGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketPatrolGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacketPatrolGameModeBase, APacketPatrolGameModeBase::StaticClass, TEXT("APacketPatrolGameModeBase"), &Z_Registration_Info_UClass_APacketPatrolGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacketPatrolGameModeBase), 3883644298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketPatrolGameModeBase_h_1222002874(TEXT("/Script/PacketPatrol"),
		Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketPatrolGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacketPatrol_Source_PacketPatrol_PacketPatrolGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
