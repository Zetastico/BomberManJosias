// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BomberMan_012025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025GameMode() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABomberMan_012025GameMode Function GenerarLaberintoAleatorio
struct Z_Construct_UFunction_ABomberMan_012025GameMode_GenerarLaberintoAleatorio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay|GeneracionMapa" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_GenerarLaberintoAleatorio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "GenerarLaberintoAleatorio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_GenerarLaberintoAleatorio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_GenerarLaberintoAleatorio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_GenerarLaberintoAleatorio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_GenerarLaberintoAleatorio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execGenerarLaberintoAleatorio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerarLaberintoAleatorio();
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function GenerarLaberintoAleatorio

// Begin Class ABomberMan_012025GameMode
void ABomberMan_012025GameMode::StaticRegisterNativesABomberMan_012025GameMode()
{
	UClass* Class = ABomberMan_012025GameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerarLaberintoAleatorio", &ABomberMan_012025GameMode::execGenerarLaberintoAleatorio },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025GameMode);
UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister()
{
	return ABomberMan_012025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_012025GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseBomba_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseBomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_GenerarLaberintoAleatorio, "GenerarLaberintoAleatorio" }, // 3963667480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ClaseBomba = { "ClaseBomba", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, ClaseBomba), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseBomba_MetaData), NewProp_ClaseBomba_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_ClaseBomba,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams = {
	&ABomberMan_012025GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberMan_012025GameMode>()
{
	return ABomberMan_012025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025GameMode);
ABomberMan_012025GameMode::~ABomberMan_012025GameMode() {}
// End Class ABomberMan_012025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025GameMode, ABomberMan_012025GameMode::StaticClass, TEXT("ABomberMan_012025GameMode"), &Z_Registration_Info_UClass_ABomberMan_012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025GameMode), 4264574002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_BomberMan_012025GameMode_h_3319345772(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
