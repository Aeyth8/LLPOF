#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_DirectionalDamageIndicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function HUD_DirectionalDamageIndicator.HUD_DirectionalDamageIndicator_C.ExecuteUbergraph_HUD_DirectionalDamageIndicator
// 0x0028 (0x0028 - 0x0000)
struct HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetBrushResourceAsMaterial_ReturnValue;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator) == 0x000008, "Wrong alignment on HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator");
static_assert(sizeof(HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator) == 0x000028, "Wrong size on HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator");
static_assert(offsetof(HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator, EntryPoint) == 0x000000, "Member 'HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator, CallFunc_GetFloatValue_ReturnValue) == 0x000010, "Member 'HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator, CallFunc_GetBrushResourceAsMaterial_ReturnValue) == 0x000018, "Member 'HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator::CallFunc_GetBrushResourceAsMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}
