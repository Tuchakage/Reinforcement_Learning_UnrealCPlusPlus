// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/LearningAgentsDrivePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsDrivePlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ALearningAgentsDrivePlayerController();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ALearningAgentsDrivePlayerController_NoRegister();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void ALearningAgentsDrivePlayerController::StaticRegisterNativesALearningAgentsDrivePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALearningAgentsDrivePlayerController);
	UClass* Z_Construct_UClass_ALearningAgentsDrivePlayerController_NoRegister()
	{
		return ALearningAgentsDrivePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleUIClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Player Controller class\n *  Handles input mapping and user interface\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "LearningAgentsDrivePlayerController.h" },
		{ "ModuleRelativePath", "LearningAgentsDrivePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Player Controller class\nHandles input mapping and user interface" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "LearningAgentsDrivePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALearningAgentsDrivePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_VehicleUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the UI to spawn */" },
#endif
		{ "ModuleRelativePath", "LearningAgentsDrivePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the UI to spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_VehicleUIClass = { "VehicleUIClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALearningAgentsDrivePlayerController, VehicleUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULearningAgentsDriveUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_VehicleUIClass_MetaData), Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_VehicleUIClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::NewProp_VehicleUIClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearningAgentsDrivePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::ClassParams = {
		&ALearningAgentsDrivePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALearningAgentsDrivePlayerController()
	{
		if (!Z_Registration_Info_UClass_ALearningAgentsDrivePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALearningAgentsDrivePlayerController.OuterSingleton, Z_Construct_UClass_ALearningAgentsDrivePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALearningAgentsDrivePlayerController.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<ALearningAgentsDrivePlayerController>()
	{
		return ALearningAgentsDrivePlayerController::StaticClass();
	}
	ALearningAgentsDrivePlayerController::ALearningAgentsDrivePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearningAgentsDrivePlayerController);
	ALearningAgentsDrivePlayerController::~ALearningAgentsDrivePlayerController() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDrivePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDrivePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALearningAgentsDrivePlayerController, ALearningAgentsDrivePlayerController::StaticClass, TEXT("ALearningAgentsDrivePlayerController"), &Z_Registration_Info_UClass_ALearningAgentsDrivePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALearningAgentsDrivePlayerController), 2511250909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDrivePlayerController_h_3845492816(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDrivePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDrivePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
