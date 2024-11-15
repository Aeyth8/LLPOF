#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Powerup_Level_VIP

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Powerup_Level_VIP.BP_Powerup_Level_VIP_C.ExecuteUbergraph_BP_Powerup_Level_VIP
// 0x0018 (0x0018 - 0x0000)
struct BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteracterComponent*                   K2Node_Event_Interacter;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 K2Node_Event_Interactable;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP) == 0x000008, "Wrong alignment on BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP");
static_assert(sizeof(BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP) == 0x000018, "Wrong size on BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP");
static_assert(offsetof(BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP, EntryPoint) == 0x000000, "Member 'BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP, K2Node_Event_Interacter) == 0x000008, "Member 'BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP::K2Node_Event_Interacter' has a wrong offset!");
static_assert(offsetof(BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP, K2Node_Event_Interactable) == 0x000010, "Member 'BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP::K2Node_Event_Interactable' has a wrong offset!");

// Function BP_Powerup_Level_VIP.BP_Powerup_Level_VIP_C.BP_OnInteractionComplete
// 0x0010 (0x0010 - 0x0000)
struct BP_Powerup_Level_VIP_C_BP_OnInteractionComplete final
{
public:
	class UInteracterComponent*                   Interacter;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 Interactable;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Powerup_Level_VIP_C_BP_OnInteractionComplete) == 0x000008, "Wrong alignment on BP_Powerup_Level_VIP_C_BP_OnInteractionComplete");
static_assert(sizeof(BP_Powerup_Level_VIP_C_BP_OnInteractionComplete) == 0x000010, "Wrong size on BP_Powerup_Level_VIP_C_BP_OnInteractionComplete");
static_assert(offsetof(BP_Powerup_Level_VIP_C_BP_OnInteractionComplete, Interacter) == 0x000000, "Member 'BP_Powerup_Level_VIP_C_BP_OnInteractionComplete::Interacter' has a wrong offset!");
static_assert(offsetof(BP_Powerup_Level_VIP_C_BP_OnInteractionComplete, Interactable) == 0x000008, "Member 'BP_Powerup_Level_VIP_C_BP_OnInteractionComplete::Interactable' has a wrong offset!");

}

