#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SweetUtils

#include "Basic.hpp"


namespace SDK::Params
{

// Function SweetUtils.SweetTimeFormatBlueprintLibrary.FormatPhaseTime
// 0x0018 (0x0018 - 0x0000)
struct SweetTimeFormatBlueprintLibrary_FormatPhaseTime final
{
public:
	int32                                         TimeInSeconds;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SweetTimeFormatBlueprintLibrary_FormatPhaseTime) == 0x000008, "Wrong alignment on SweetTimeFormatBlueprintLibrary_FormatPhaseTime");
static_assert(sizeof(SweetTimeFormatBlueprintLibrary_FormatPhaseTime) == 0x000018, "Wrong size on SweetTimeFormatBlueprintLibrary_FormatPhaseTime");
static_assert(offsetof(SweetTimeFormatBlueprintLibrary_FormatPhaseTime, TimeInSeconds) == 0x000000, "Member 'SweetTimeFormatBlueprintLibrary_FormatPhaseTime::TimeInSeconds' has a wrong offset!");
static_assert(offsetof(SweetTimeFormatBlueprintLibrary_FormatPhaseTime, ReturnValue) == 0x000008, "Member 'SweetTimeFormatBlueprintLibrary_FormatPhaseTime::ReturnValue' has a wrong offset!");

// Function SweetUtils.SweetTimeFormatBlueprintLibrary.GetProjectVersion
// 0x0010 (0x0010 - 0x0000)
struct SweetTimeFormatBlueprintLibrary_GetProjectVersion final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SweetTimeFormatBlueprintLibrary_GetProjectVersion) == 0x000008, "Wrong alignment on SweetTimeFormatBlueprintLibrary_GetProjectVersion");
static_assert(sizeof(SweetTimeFormatBlueprintLibrary_GetProjectVersion) == 0x000010, "Wrong size on SweetTimeFormatBlueprintLibrary_GetProjectVersion");
static_assert(offsetof(SweetTimeFormatBlueprintLibrary_GetProjectVersion, ReturnValue) == 0x000000, "Member 'SweetTimeFormatBlueprintLibrary_GetProjectVersion::ReturnValue' has a wrong offset!");

// Function SweetUtils.SweetTimeFormatBlueprintLibrary.IsInEditor
// 0x0001 (0x0001 - 0x0000)
struct SweetTimeFormatBlueprintLibrary_IsInEditor final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SweetTimeFormatBlueprintLibrary_IsInEditor) == 0x000001, "Wrong alignment on SweetTimeFormatBlueprintLibrary_IsInEditor");
static_assert(sizeof(SweetTimeFormatBlueprintLibrary_IsInEditor) == 0x000001, "Wrong size on SweetTimeFormatBlueprintLibrary_IsInEditor");
static_assert(offsetof(SweetTimeFormatBlueprintLibrary_IsInEditor, ReturnValue) == 0x000000, "Member 'SweetTimeFormatBlueprintLibrary_IsInEditor::ReturnValue' has a wrong offset!");

}

