#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InputModifier_AimAssisPitch

#include "Basic.hpp"

#include "DeceiveInc_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InputModifier_AimAssisPitch.BP_InputModifier_AimAssisPitch_C
// 0x0000 (0x0038 - 0x0038)
class UBP_InputModifier_AimAssisPitch_C final : public USweetAimAssistInputModifierPitch1D
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InputModifier_AimAssisPitch_C">();
	}
	static class UBP_InputModifier_AimAssisPitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InputModifier_AimAssisPitch_C>();
	}
};
static_assert(alignof(UBP_InputModifier_AimAssisPitch_C) == 0x000008, "Wrong alignment on UBP_InputModifier_AimAssisPitch_C");
static_assert(sizeof(UBP_InputModifier_AimAssisPitch_C) == 0x000038, "Wrong size on UBP_InputModifier_AimAssisPitch_C");

}
