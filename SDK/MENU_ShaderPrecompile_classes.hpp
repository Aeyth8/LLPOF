#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MENU_ShaderPrecompile

#include "Basic.hpp"

#include "DeceiveInc_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MENU_ShaderPrecompile.MENU_ShaderPrecompile_C
// 0x0010 (0x0310 - 0x0300)
class UMENU_ShaderPrecompile_C final : public UDIMenuUserWidget
{
public:
	class UProgressBar*                           ProgressBar_124;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FText GetText_0();
	float GetPercent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MENU_ShaderPrecompile_C">();
	}
	static class UMENU_ShaderPrecompile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMENU_ShaderPrecompile_C>();
	}
};
static_assert(alignof(UMENU_ShaderPrecompile_C) == 0x000008, "Wrong alignment on UMENU_ShaderPrecompile_C");
static_assert(sizeof(UMENU_ShaderPrecompile_C) == 0x000310, "Wrong size on UMENU_ShaderPrecompile_C");
static_assert(offsetof(UMENU_ShaderPrecompile_C, ProgressBar_124) == 0x000300, "Member 'UMENU_ShaderPrecompile_C::ProgressBar_124' has a wrong offset!");
static_assert(offsetof(UMENU_ShaderPrecompile_C, TextBlock) == 0x000308, "Member 'UMENU_ShaderPrecompile_C::TextBlock' has a wrong offset!");

}
