#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VictimEffect_SocialBattery

#include "Basic.hpp"

#include "BP_VictimEffect_SocialBattery_classes.hpp"
#include "BP_VictimEffect_SocialBattery_parameters.hpp"


namespace SDK
{

// Function BP_VictimEffect_SocialBattery.BP_VictimEffect_SocialBattery_C.ExecuteUbergraph_BP_VictimEffect_SocialBattery
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictimEffect_SocialBattery_C::ExecuteUbergraph_BP_VictimEffect_SocialBattery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictimEffect_SocialBattery_C", "ExecuteUbergraph_BP_VictimEffect_SocialBattery");

	Params::BP_VictimEffect_SocialBattery_C_ExecuteUbergraph_BP_VictimEffect_SocialBattery Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VictimEffect_SocialBattery.BP_VictimEffect_SocialBattery_C.BP_OnEffectStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVictimEffect*                    Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictimEffect_SocialBattery_C::BP_OnEffectStart(class AVictimEffect* Effect, class AActor* Victim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictimEffect_SocialBattery_C", "BP_OnEffectStart");

	Params::BP_VictimEffect_SocialBattery_C_BP_OnEffectStart Parms{};

	Parms.Effect = Effect;
	Parms.Victim = Victim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VictimEffect_SocialBattery.BP_VictimEffect_SocialBattery_C.BP_InitializeTickEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVictimEffectTickBehavior*        TickEffect                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VictimEffect_SocialBattery_C::BP_InitializeTickEffect(class UVictimEffectTickBehavior* TickEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VictimEffect_SocialBattery_C", "BP_InitializeTickEffect");

	Params::BP_VictimEffect_SocialBattery_C_BP_InitializeTickEffect Parms{};

	Parms.TickEffect = TickEffect;

	UObject::ProcessEvent(Func, &Parms);
}

}

