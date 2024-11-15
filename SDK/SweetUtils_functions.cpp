#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SweetUtils

#include "Basic.hpp"

#include "SweetUtils_classes.hpp"
#include "SweetUtils_parameters.hpp"


namespace SDK
{

// Function SweetUtils.SweetTimeFormatBlueprintLibrary.FormatPhaseTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   TimeInSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USweetTimeFormatBlueprintLibrary::FormatPhaseTime(int32 TimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SweetTimeFormatBlueprintLibrary", "FormatPhaseTime");

	Params::SweetTimeFormatBlueprintLibrary_FormatPhaseTime Parms{};

	Parms.TimeInSeconds = TimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SweetUtils.SweetTimeFormatBlueprintLibrary.GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USweetTimeFormatBlueprintLibrary::GetProjectVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SweetTimeFormatBlueprintLibrary", "GetProjectVersion");

	Params::SweetTimeFormatBlueprintLibrary_GetProjectVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SweetUtils.SweetTimeFormatBlueprintLibrary.IsInEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USweetTimeFormatBlueprintLibrary::IsInEditor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SweetTimeFormatBlueprintLibrary", "IsInEditor");

	Params::SweetTimeFormatBlueprintLibrary_IsInEditor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

