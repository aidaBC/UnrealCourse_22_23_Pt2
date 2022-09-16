// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/Tank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ATank_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ATank();
	TOONTANKS_API UClass* Z_Construct_UClass_ABasicPawn();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATank);
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	struct Z_Construct_UClass_ATank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TankSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TankTurnRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tank.h" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_TankSpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankSpringArm = { "TankSpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, TankSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_TankSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_TankSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_TankCamera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankCamera = { "TankCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, TankCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_TankCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_TankCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_TankSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankSpeed = { "TankSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, TankSpeed), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_TankSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_TankSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_TankTurnRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Tank.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankTurnRate = { "TankTurnRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, TankTurnRate), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_TankTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_TankTurnRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankTurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATank_Statics::ClassParams = {
		&ATank::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank()
	{
		if (!Z_Registration_Info_UClass_ATank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATank.OuterSingleton, Z_Construct_UClass_ATank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATank.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<ATank>()
	{
		return ATank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
	struct Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Tank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Tank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATank, ATank::StaticClass, TEXT("ATank"), &Z_Registration_Info_UClass_ATank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATank), 1217388459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Tank_h_870209484(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Tank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_Tank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
