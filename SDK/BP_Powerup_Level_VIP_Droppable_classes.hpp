#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Powerup_Level_VIP_Droppable

#include "Basic.hpp"

#include "BP_Powerup_Level_VIP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Powerup_Level_VIP_Droppable.BP_Powerup_Level_VIP_Droppable_C
// 0x0010 (0x0358 - 0x0348)
class ABP_Powerup_Level_VIP_Droppable_C final : public ABP_Powerup_Level_VIP_C
{
public:
	class UFakeMovementComponent*                 FakeMovement;                                      // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      VFXDropped;                                        // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Powerup_Level_VIP_Droppable_C">();
	}
	static class ABP_Powerup_Level_VIP_Droppable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Powerup_Level_VIP_Droppable_C>();
	}
};
static_assert(alignof(ABP_Powerup_Level_VIP_Droppable_C) == 0x000008, "Wrong alignment on ABP_Powerup_Level_VIP_Droppable_C");
static_assert(sizeof(ABP_Powerup_Level_VIP_Droppable_C) == 0x000358, "Wrong size on ABP_Powerup_Level_VIP_Droppable_C");
static_assert(offsetof(ABP_Powerup_Level_VIP_Droppable_C, FakeMovement) == 0x000348, "Member 'ABP_Powerup_Level_VIP_Droppable_C::FakeMovement' has a wrong offset!");
static_assert(offsetof(ABP_Powerup_Level_VIP_Droppable_C, VFXDropped) == 0x000350, "Member 'ABP_Powerup_Level_VIP_Droppable_C::VFXDropped' has a wrong offset!");

}

