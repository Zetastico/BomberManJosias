// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BombaEx.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaEx() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaEx();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaEx_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABombaEx
void ABombaEx::StaticRegisterNativesABombaEx()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaEx);
UClass* Z_Construct_UClass_ABombaEx_NoRegister()
{
	return ABombaEx::StaticClass();
}
struct Z_Construct_UClass_ABombaEx_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BombaEx.h" },
		{ "ModuleRelativePath", "Public/BombaEx.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBomba_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BombaEx.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaEx>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABombaEx_Statics::NewProp_MallaBomba = { "MallaBomba", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABombaEx, MallaBomba), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBomba_MetaData), NewProp_MallaBomba_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABombaEx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaEx_Statics::NewProp_MallaBomba,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEx_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABombaEx_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEx_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaEx_Statics::ClassParams = {
	&ABombaEx::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABombaEx_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEx_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEx_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaEx_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaEx()
{
	if (!Z_Registration_Info_UClass_ABombaEx.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaEx.OuterSingleton, Z_Construct_UClass_ABombaEx_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaEx.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABombaEx>()
{
	return ABombaEx::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaEx);
ABombaEx::~ABombaEx() {}
// End Class ABombaEx

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BombaEx_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaEx, ABombaEx::StaticClass, TEXT("ABombaEx"), &Z_Registration_Info_UClass_ABombaEx, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaEx), 188868237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BombaEx_h_2186566854(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BombaEx_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BombaEx_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
