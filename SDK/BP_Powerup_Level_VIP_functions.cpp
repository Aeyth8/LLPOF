#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Powerup_Level_VIP

#include "Basic.hpp"

#include "BP_Powerup_Level_VIP_classes.hpp"
#include "BP_Powerup_Level_VIP_parameters.hpp"


namespace SDK
{

// Function BP_Powerup_Level_VIP.BP_Powerup_Level_VIP_C.ExecuteUbergraph_BP_Powerup_Level_VIP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Powerup_Level_VIP_C::ExecuteUbergraph_BP_Powerup_Level_VIP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Powerup_Level_VIP_C", "ExecuteUbergraph_BP_Powerup_Level_VIP");

	Params::BP_Powerup_Level_VIP_C_ExecuteUbergraph_BP_Powerup_Level_VIP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Powerup_Level_VIP.BP_Powerup_Level_VIP_C.BP_OnInteractionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UInteracterComponent*             Interacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           Interactable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Powerup_Level_VIP_C::BP_OnInteractionComplete(class UInteracterComponent* Interacter, class UInteractableComponent* Interactable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Powerup_Level_VIP_C", "BP_OnInteractionComplete");

	Params::BP_Powerup_Level_VIP_C_BP_OnInteractionComplete Parms{};

	Parms.Interacter = Interacter;
	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);
}

}

