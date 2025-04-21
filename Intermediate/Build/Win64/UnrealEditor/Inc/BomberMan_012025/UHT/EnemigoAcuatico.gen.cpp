// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/EnemigoAcuatico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAcuatico() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAcuatico();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAcuatico_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoAcuatico
void AEnemigoAcuatico::StaticRegisterNativesAEnemigoAcuatico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoAcuatico);
UClass* Z_Construct_UClass_AEnemigoAcuatico_NoRegister()
{
	return AEnemigoAcuatico::StaticClass();
}
struct Z_Construct_UClass_AEnemigoAcuatico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAcuatico.h" },
		{ "ModuleRelativePath", "Public/EnemigoAcuatico.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAcuatico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoAcuatico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAcuatico_Statics::ClassParams = {
	&AEnemigoAcuatico::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoAcuatico()
{
	if (!Z_Registration_Info_UClass_AEnemigoAcuatico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoAcuatico.OuterSingleton, Z_Construct_UClass_AEnemigoAcuatico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoAcuatico.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoAcuatico>()
{
	return AEnemigoAcuatico::StaticClass();
}
AEnemigoAcuatico::AEnemigoAcuatico() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAcuatico);
AEnemigoAcuatico::~AEnemigoAcuatico() {}
// End Class AEnemigoAcuatico

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAcuatico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoAcuatico, AEnemigoAcuatico::StaticClass, TEXT("AEnemigoAcuatico"), &Z_Registration_Info_UClass_AEnemigoAcuatico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoAcuatico), 747444696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAcuatico_h_4021871551(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAcuatico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoAcuatico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
