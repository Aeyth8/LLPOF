#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemAccelByte

#include "Basic.hpp"


namespace SDK::Params
{

// Function OnlineSubsystemAccelByte.OnlineSubsystemAccelByteUtils.IsPlayerOnSamePlatform
// 0x0018 (0x0018 - 0x0000)
struct OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform final
{
public:
	class FString                                 UniqueIdString;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform) == 0x000008, "Wrong alignment on OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform");
static_assert(sizeof(OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform) == 0x000018, "Wrong size on OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform");
static_assert(offsetof(OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform, UniqueIdString) == 0x000000, "Member 'OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform::UniqueIdString' has a wrong offset!");
static_assert(offsetof(OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform, ReturnValue) == 0x000010, "Member 'OnlineSubsystemAccelByteUtils_IsPlayerOnSamePlatform::ReturnValue' has a wrong offset!");

}

