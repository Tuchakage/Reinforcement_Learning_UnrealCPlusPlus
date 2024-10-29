// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/LearningAgentsDriveUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsDriveUI() {}
// Cross Module References
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveUI();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	struct LearningAgentsDriveUI_eventOnGearUpdate_Parms
	{
		int32 NewGear;
	};
	struct LearningAgentsDriveUI_eventOnSpeedUpdate_Parms
	{
		float NewSpeed;
	};
	static FName NAME_ULearningAgentsDriveUI_OnGearUpdate = FName(TEXT("OnGearUpdate"));
	void ULearningAgentsDriveUI::OnGearUpdate(int32 NewGear)
	{
		LearningAgentsDriveUI_eventOnGearUpdate_Parms Parms;
		Parms.NewGear=NewGear;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsDriveUI_OnGearUpdate),&Parms);
	}
	static FName NAME_ULearningAgentsDriveUI_OnSpeedUpdate = FName(TEXT("OnSpeedUpdate"));
	void ULearningAgentsDriveUI::OnSpeedUpdate(float NewSpeed)
	{
		LearningAgentsDriveUI_eventOnSpeedUpdate_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		ProcessEvent(FindFunctionChecked(NAME_ULearningAgentsDriveUI_OnSpeedUpdate),&Parms);
	}
	void ULearningAgentsDriveUI::StaticRegisterNativesULearningAgentsDriveUI()
	{
	}
	struct Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsDriveUI_eventOnGearUpdate_Parms, NewGear), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::NewProp_NewGear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new gear */" },
#endif
		{ "ModuleRelativePath", "LearningAgentsDriveUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new gear" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsDriveUI, nullptr, "OnGearUpdate", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::PropPointers), sizeof(LearningAgentsDriveUI_eventOnGearUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsDriveUI_eventOnGearUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LearningAgentsDriveUI_eventOnSpeedUpdate_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new speed */" },
#endif
		{ "ModuleRelativePath", "LearningAgentsDriveUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULearningAgentsDriveUI, nullptr, "OnSpeedUpdate", nullptr, nullptr, Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::PropPointers), sizeof(LearningAgentsDriveUI_eventOnSpeedUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(LearningAgentsDriveUI_eventOnSpeedUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsDriveUI);
	UClass* Z_Construct_UClass_ULearningAgentsDriveUI_NoRegister()
	{
		return ULearningAgentsDriveUI::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsDriveUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMPH_MetaData[];
#endif
		static void NewProp_bIsMPH_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMPH;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsDriveUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULearningAgentsDriveUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULearningAgentsDriveUI_OnGearUpdate, "OnGearUpdate" }, // 817528334
		{ &Z_Construct_UFunction_ULearningAgentsDriveUI_OnSpeedUpdate, "OnSpeedUpdate" }, // 3664380611
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsDriveUI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Vehicle HUD class\n *  Displays the current speed and gear.\n *  Widget setup is handled in a Blueprint subclass.\n */" },
#endif
		{ "IncludePath", "LearningAgentsDriveUI.h" },
		{ "ModuleRelativePath", "LearningAgentsDriveUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Vehicle HUD class\nDisplays the current speed and gear.\nWidget setup is handled in a Blueprint subclass." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsDriveUI_Statics::NewProp_bIsMPH_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the display of speed in Km/h or MPH */" },
#endif
		{ "ModuleRelativePath", "LearningAgentsDriveUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the display of speed in Km/h or MPH" },
#endif
	};
#endif
	void Z_Construct_UClass_ULearningAgentsDriveUI_Statics::NewProp_bIsMPH_SetBit(void* Obj)
	{
		((ULearningAgentsDriveUI*)Obj)->bIsMPH = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULearningAgentsDriveUI_Statics::NewProp_bIsMPH = { "bIsMPH", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULearningAgentsDriveUI), &Z_Construct_UClass_ULearningAgentsDriveUI_Statics::NewProp_bIsMPH_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveUI_Statics::NewProp_bIsMPH_MetaData), Z_Construct_UClass_ULearningAgentsDriveUI_Statics::NewProp_bIsMPH_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULearningAgentsDriveUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULearningAgentsDriveUI_Statics::NewProp_bIsMPH,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsDriveUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsDriveUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsDriveUI_Statics::ClassParams = {
		&ULearningAgentsDriveUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULearningAgentsDriveUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveUI_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsDriveUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULearningAgentsDriveUI()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsDriveUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsDriveUI.OuterSingleton, Z_Construct_UClass_ULearningAgentsDriveUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsDriveUI.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<ULearningAgentsDriveUI>()
	{
		return ULearningAgentsDriveUI::StaticClass();
	}
	ULearningAgentsDriveUI::ULearningAgentsDriveUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningAgentsDriveUI);
	ULearningAgentsDriveUI::~ULearningAgentsDriveUI() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsDriveUI, ULearningAgentsDriveUI::StaticClass, TEXT("ULearningAgentsDriveUI"), &Z_Registration_Info_UClass_ULearningAgentsDriveUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsDriveUI), 710638421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveUI_h_3339727613(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
