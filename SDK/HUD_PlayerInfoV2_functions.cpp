#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_PlayerInfoV2

#include "Basic.hpp"

#include "HUD_PlayerInfoV2_classes.hpp"
#include "HUD_PlayerInfoV2_parameters.hpp"


namespace SDK
{

// Function HUD_PlayerInfoV2.HUD_PlayerInfoV2_C.ExecuteUbergraph_HUD_PlayerInfoV2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_PlayerInfoV2_C::ExecuteUbergraph_HUD_PlayerInfoV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_PlayerInfoV2_C", "ExecuteUbergraph_HUD_PlayerInfoV2");

	Params::HUD_PlayerInfoV2_C_ExecuteUbergraph_HUD_PlayerInfoV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_PlayerInfoV2.HUD_PlayerInfoV2_C.OnPlayerInfoUpdated
// (Event, Public, BlueprintEvent)

void UHUD_PlayerInfoV2_C::OnPlayerInfoUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_PlayerInfoV2_C", "OnPlayerInfoUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_PlayerInfoV2.HUD_PlayerInfoV2_C.BndEvt__HUD_PlayerInfo_BtnPlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_PlayerInfoV2_C::BndEvt__HUD_PlayerInfo_BtnPlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_PlayerInfoV2_C", "BndEvt__HUD_PlayerInfo_BtnPlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_PlayerInfoV2.HUD_PlayerInfoV2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_PlayerInfoV2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_PlayerInfoV2_C", "PreConstruct");

	Params::HUD_PlayerInfoV2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD_PlayerInfoV2.HUD_PlayerInfoV2_C.SetupPlatform
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_PlayerInfoV2_C::SetupPlatform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_PlayerInfoV2_C", "SetupPlatform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD_PlayerInfoV2.HUD_PlayerInfoV2_C.IsPlayerStateValid
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHUD_PlayerInfoV2_C::IsPlayerStateValid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD_PlayerInfoV2_C", "IsPlayerStateValid");

	Params::HUD_PlayerInfoV2_C_IsPlayerStateValid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

