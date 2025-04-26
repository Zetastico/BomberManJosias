// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloqueBurbuja.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBurbuja() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbuja();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueBurbuja
void ABloqueBurbuja::StaticRegisterNativesABloqueBurbuja()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBurbuja);
UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister()
{
	return ABloqueBurbuja::StaticClass();
}
struct Z_Construct_UClass_ABloqueBurbuja_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "BloqueBurbuja.h" },
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPuedeMoverse_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Si este bloque puede moverse (ya exist\xef\xbf\xbd""a, mantenerla)\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Si este bloque puede moverse (ya exist\xef\xbf\xbd""a, mantenerla)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocidadAngular_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Velocidad angular de la oscilaci\xef\xbf\xbdn (radianes por segundo)\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocidad angular de la oscilaci\xef\xbf\xbdn (radianes por segundo)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudesCiclo_MetaData[] = {
		{ "Category", "Movimiento" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lista de amplitudes a ciclar\n" },
#endif
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lista de amplitudes a ciclar" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPuedeMoverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPuedeMoverse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocidadAngular;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudesCiclo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AmplitudesCiclo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBurbuja>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse_SetBit(void* Obj)
{
	((ABloqueBurbuja*)Obj)->bPuedeMoverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse = { "bPuedeMoverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABloqueBurbuja), &Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPuedeMoverse_MetaData), NewProp_bPuedeMoverse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_VelocidadAngular = { "VelocidadAngular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, VelocidadAngular), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocidadAngular_MetaData), NewProp_VelocidadAngular_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_AmplitudesCiclo_Inner = { "AmplitudesCiclo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_AmplitudesCiclo = { "AmplitudesCiclo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, AmplitudesCiclo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmplitudesCiclo_MetaData), NewProp_AmplitudesCiclo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_bPuedeMoverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_VelocidadAngular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_AmplitudesCiclo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_AmplitudesCiclo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams = {
	&ABloqueBurbuja::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBurbuja()
{
	if (!Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton, Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueBurbuja>()
{
	return ABloqueBurbuja::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBurbuja);
ABloqueBurbuja::~ABloqueBurbuja() {}
// End Class ABloqueBurbuja

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBurbuja, ABloqueBurbuja::StaticClass, TEXT("ABloqueBurbuja"), &Z_Registration_Info_UClass_ABloqueBurbuja, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBurbuja), 2898579095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BloqueBurbuja_h_3673838043(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_01202500_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
