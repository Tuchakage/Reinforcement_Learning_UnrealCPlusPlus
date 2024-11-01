// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/RLTrainingManager.h"
#include "LearningAgentsPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRLTrainingManager() {}
// Cross Module References
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ALearningAgentsManager();
	LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister();
	LEARNINGAGENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLearningAgentsPolicySettings();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ARLTrainingManager();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ARLTrainingManager_NoRegister();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_UDrivingPolicy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void ARLTrainingManager::StaticRegisterNativesARLTrainingManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARLTrainingManager);
	UClass* Z_Construct_UClass_ARLTrainingManager_NoRegister()
	{
		return ARLTrainingManager::StaticClass();
	}
	struct Z_Construct_UClass_ARLTrainingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolicySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolicySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeuralNetworkAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuralNetworkAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARLTrainingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALearningAgentsManager,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARLTrainingManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARLTrainingManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RLTrainingManager.h" },
		{ "ModuleRelativePath", "RLTrainingManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_DrivingPolicy_MetaData[] = {
		{ "Category", "RLTrainingManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RLTrainingManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_DrivingPolicy = { "DrivingPolicy", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARLTrainingManager, DrivingPolicy), Z_Construct_UClass_UDrivingPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_DrivingPolicy_MetaData), Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_DrivingPolicy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_PolicySettings_MetaData[] = {
		{ "Category", "RLTrainingManager" },
		{ "ModuleRelativePath", "RLTrainingManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_PolicySettings = { "PolicySettings", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARLTrainingManager, PolicySettings), Z_Construct_UScriptStruct_FLearningAgentsPolicySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_PolicySettings_MetaData), Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_PolicySettings_MetaData) }; // 383946298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_NeuralNetworkAsset_MetaData[] = {
		{ "Category", "RLTrainingManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set this in the Blueprint\n" },
#endif
		{ "ModuleRelativePath", "RLTrainingManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this in the Blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_NeuralNetworkAsset = { "NeuralNetworkAsset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARLTrainingManager, NeuralNetworkAsset), Z_Construct_UClass_ULearningAgentsNeuralNetwork_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_NeuralNetworkAsset_MetaData), Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_NeuralNetworkAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARLTrainingManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_DrivingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_PolicySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARLTrainingManager_Statics::NewProp_NeuralNetworkAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARLTrainingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARLTrainingManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARLTrainingManager_Statics::ClassParams = {
		&ARLTrainingManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARLTrainingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARLTrainingManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARLTrainingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARLTrainingManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARLTrainingManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARLTrainingManager()
	{
		if (!Z_Registration_Info_UClass_ARLTrainingManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARLTrainingManager.OuterSingleton, Z_Construct_UClass_ARLTrainingManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARLTrainingManager.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<ARLTrainingManager>()
	{
		return ARLTrainingManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARLTrainingManager);
	ARLTrainingManager::~ARLTrainingManager() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_RLTrainingManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_RLTrainingManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARLTrainingManager, ARLTrainingManager::StaticClass, TEXT("ARLTrainingManager"), &Z_Registration_Info_UClass_ARLTrainingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARLTrainingManager), 2205740678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_RLTrainingManager_h_2924390090(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_RLTrainingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_RLTrainingManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
