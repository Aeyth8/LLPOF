#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Powerup_Level_VIP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BasePowerup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Powerup_Level_VIP.BP_Powerup_Level_VIP_C
// 0x0008 (0x0348 - 0x0340)
class ABP_Powerup_Level_VIP_C : public ABP_BasePowerup_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Powerup_Level_VIP_C;             // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Powerup_Level_VIP(int32 EntryPoint);
	void BP_OnInteractionComplete(class UInteracterComponent* Interacter, class UInteractableComponent* Interactable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Powerup_Level_VIP_C">();
	}
	static class ABP_Powerup_Level_VIP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Powerup_Level_VIP_C>();
	}
};
static_assert(alignof(ABP_Powerup_Level_VIP_C) == 0x000008, "Wrong alignment on ABP_Powerup_Level_VIP_C");
static_assert(sizeof(ABP_Powerup_Level_VIP_C) == 0x000348, "Wrong size on ABP_Powerup_Level_VIP_C");
static_assert(offsetof(ABP_Powerup_Level_VIP_C, UberGraphFrame_BP_Powerup_Level_VIP_C) == 0x000340, "Member 'ABP_Powerup_Level_VIP_C::UberGraphFrame_BP_Powerup_Level_VIP_C' has a wrong offset!");

}
