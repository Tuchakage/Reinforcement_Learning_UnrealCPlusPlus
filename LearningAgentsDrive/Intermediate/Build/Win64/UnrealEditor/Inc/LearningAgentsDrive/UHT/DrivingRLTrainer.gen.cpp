// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/DrivingRLTrainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrivingRLTrainer() {}
// Cross Module References
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_UDrivingRLTrainer();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_UDrivingRLTrainer_NoRegister();
	LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ULearningAgentsTrainer();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void UDrivingRLTrainer::StaticRegisterNativesUDrivingRLTrainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrivingRLTrainer);
	UClass* Z_Construct_UClass_UDrivingRLTrainer_NoRegister()
	{
		return UDrivingRLTrainer::StaticClass();
	}
	struct Z_Construct_UClass_UDrivingRLTrainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrivingRLTrainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULearningAgentsTrainer,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrivingRLTrainer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrivingRLTrainer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DrivingRLTrainer.h" },
		{ "ModuleRelativePath", "DrivingRLTrainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrivingRLTrainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrivingRLTrainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrivingRLTrainer_Statics::ClassParams = {
		&UDrivingRLTrainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrivingRLTrainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrivingRLTrainer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDrivingRLTrainer()
	{
		if (!Z_Registration_Info_UClass_UDrivingRLTrainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrivingRLTrainer.OuterSingleton, Z_Construct_UClass_UDrivingRLTrainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrivingRLTrainer.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<UDrivingRLTrainer>()
	{
		return UDrivingRLTrainer::StaticClass();
	}
	UDrivingRLTrainer::UDrivingRLTrainer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrivingRLTrainer);
	UDrivingRLTrainer::~UDrivingRLTrainer() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingRLTrainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingRLTrainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrivingRLTrainer, UDrivingRLTrainer::StaticClass, TEXT("UDrivingRLTrainer"), &Z_Registration_Info_UClass_UDrivingRLTrainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrivingRLTrainer), 1304132195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingRLTrainer_h_3451685722(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingRLTrainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_DrivingRLTrainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
