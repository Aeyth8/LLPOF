#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CollisionPAtch

#include "Basic.hpp"

#include "DeceiveInc_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CollisionPAtch.BP_CollisionPatch_C
// 0x0018 (0x0248 - 0x0230)
class ABP_CollisionPatch_C final : public ASBCollisionPatch
{
public:
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CollisionPatch_C">();
	}
	static class ABP_CollisionPatch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CollisionPatch_C>();
	}
};
static_assert(alignof(ABP_CollisionPatch_C) == 0x000008, "Wrong alignment on ABP_CollisionPatch_C");
static_assert(sizeof(ABP_CollisionPatch_C) == 0x000248, "Wrong size on ABP_CollisionPatch_C");
static_assert(offsetof(ABP_CollisionPatch_C, Box) == 0x000230, "Member 'ABP_CollisionPatch_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_CollisionPatch_C, Cube) == 0x000238, "Member 'ABP_CollisionPatch_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_CollisionPatch_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_CollisionPatch_C::DefaultSceneRoot' has a wrong offset!");

}
