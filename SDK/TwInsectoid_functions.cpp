#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TwInsectoid

#include "Basic.hpp"

#include "TwInsectoid_classes.hpp"
#include "TwInsectoid_parameters.hpp"


namespace SDK
{

// Function TwInsectoid.TwInsectoidSubsystem.OnWorldCreation
// (Final, Native, Public)
// Parameters:
// class UWorld*                           World                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwInsectoidSubsystem::OnWorldCreation(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwInsectoidSubsystem", "OnWorldCreation");

	Params::TwInsectoidSubsystem_OnWorldCreation Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TwInsectoid.TwInsectoidWidget.AcceptScreenshot
// (Final, Native, Protected, HasOutParams)
// Parameters:
// int32                                   SizeX                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   SizeY                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>                   Image                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTwInsectoidWidget::AcceptScreenshot(int32 SizeX, int32 SizeY, const TArray<struct FColor>& Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwInsectoidWidget", "AcceptScreenshot");

	Params::TwInsectoidWidget_AcceptScreenshot Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;
	Parms.Image = std::move(Image);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TwInsectoid.TwInsectoidWidget.OnRequestComplete
// (Final, Native, Protected)
// Parameters:
// bool                                    Result                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwInsectoidWidget::OnRequestComplete(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwInsectoidWidget", "OnRequestComplete");

	Params::TwInsectoidWidget_OnRequestComplete Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TwInsectoid.TwInsectoidWidget.OnStartSubmit
// (Event, Protected, BlueprintEvent)

void UTwInsectoidWidget::OnStartSubmit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwInsectoidWidget", "OnStartSubmit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TwInsectoid.TwInsectoidWidget.OnSubmitFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwInsectoidWidget::OnSubmitFinished(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwInsectoidWidget", "OnSubmitFinished");

	Params::TwInsectoidWidget_OnSubmitFinished Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TwInsectoid.TwInsectoidWidget.SubmitReport
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReportData                      InReport                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTwInsectoidWidget::SubmitReport(const struct FReportData& InReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwInsectoidWidget", "SubmitReport");

	Params::TwInsectoidWidget_SubmitReport Parms{};

	Parms.InReport = std::move(InReport);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TwInsectoid.TwInsectoidFunctionLibrary.IsInsectoidEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwInsectoidFunctionLibrary::IsInsectoidEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TwInsectoidFunctionLibrary", "IsInsectoidEnabled");

	Params::TwInsectoidFunctionLibrary_IsInsectoidEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TwInsectoid.TwInsectoidFunctionLibrary.SubmitReport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                           Summary                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           IssueType                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           IssueCategory                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   Severity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Description                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          PlayerPos                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Map                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(bool IsValid)>           Callback                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UTwInsectoidFunctionLibrary::SubmitReport(const class FString& Summary, const class FString& IssueType, const class FString& IssueCategory, uint8 Severity, const class FString& Description, const struct FVector& PlayerPos, const class FString& Map, const TDelegate<void(bool IsValid)>& Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TwInsectoidFunctionLibrary", "SubmitReport");

	Params::TwInsectoidFunctionLibrary_SubmitReport Parms{};

	Parms.Summary = std::move(Summary);
	Parms.IssueType = std::move(IssueType);
	Parms.IssueCategory = std::move(IssueCategory);
	Parms.Severity = Severity;
	Parms.Description = std::move(Description);
	Parms.PlayerPos = std::move(PlayerPos);
	Parms.Map = std::move(Map);
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
