#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_DirectionalDamageIndicator

#include "Basic.hpp"

#include "HUD_DirectionalDamageIndicator_classes.hpp"
#include "HUD_DirectionalDamageIndicator_parameters.hpp"


namespace SDK
{

// Function HUD_DirectionalDamageIndicator.HUD_DirectionalDamageIndicator_C.ExecuteUbergraph_HUD_DirectionalDamageIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_DirectionalDamageIndicator_C::ExecuteUbergraph_HUD_DirectionalDamageIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DirectionalDamageIndicator_C", "ExecuteUbergraph_HUD_DirectionalDamageIndicator");

	Params::HUD_DirectionalDamageIndicator_C_ExecuteUbergraph_HUD_DirectionalDamageIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_DirectionalDamageIndicator.HUD_DirectionalDamageIndicator_C.BP_OnAddedToScreen
// (Event, Public, BlueprintEvent)

void UHUD_DirectionalDamageIndicator_C::BP_OnAddedToScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DirectionalDamageIndicator_C", "BP_OnAddedToScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_DirectionalDamageIndicator.HUD_DirectionalDamageIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_DirectionalDamageIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_DirectionalDamageIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
