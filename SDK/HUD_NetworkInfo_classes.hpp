#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_NetworkInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "DeceiveInc_structs.hpp"
#include "DeceiveInc_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_NetworkInfo.HUD_NetworkInfo_C
// 0x00B8 (0x0390 - 0x02D8)
class UHUD_NetworkInfo_C final : public UNetworkInfoWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_DetailInfo;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Region;                              // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ServerFPS;                           // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ServerVersion;                       // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_SessionID;                           // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_StatusIcons;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ConnexionIssue;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HighPing;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_PacketLoss;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ServerPerformanceIssue;                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_KBps_In;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_KBps_Out;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_Ping;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_PktLoss_In;                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_PktLoss_Out;                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_Pkts_In;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_Pkts_Out;                               // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_Region;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_ServerFPS;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_ServerVersion;                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_value_SessionID;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUD_NetworkInfo(int32 EntryPoint);
	void BP_OnDataUpdated();
	void BP_OnDisplayModeChange(ENetInfoDisplayMode NewDisplayMode);
	void UpdateIcons();
	void UpdateDetails();
	ESlateVisibility Get_General_Visibility();
	ESlateVisibility Get_Region_Visibility();
	ESlateVisibility Get_Server_FPS_Visibility();
	ESlateVisibility Get_SessionID_Visibility();
	ESlateVisibility Get_ServerVersion_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_NetworkInfo_C">();
	}
	static class UHUD_NetworkInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_NetworkInfo_C>();
	}
};
static_assert(alignof(UHUD_NetworkInfo_C) == 0x000008, "Wrong alignment on UHUD_NetworkInfo_C");
static_assert(sizeof(UHUD_NetworkInfo_C) == 0x000390, "Wrong size on UHUD_NetworkInfo_C");
static_assert(offsetof(UHUD_NetworkInfo_C, UberGraphFrame) == 0x0002D8, "Member 'UHUD_NetworkInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Border_DetailInfo) == 0x0002E0, "Member 'UHUD_NetworkInfo_C::Border_DetailInfo' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, CanvasPanel_0) == 0x0002E8, "Member 'UHUD_NetworkInfo_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, HorizontalBox_Region) == 0x0002F0, "Member 'UHUD_NetworkInfo_C::HorizontalBox_Region' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, HorizontalBox_ServerFPS) == 0x0002F8, "Member 'UHUD_NetworkInfo_C::HorizontalBox_ServerFPS' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, HorizontalBox_ServerVersion) == 0x000300, "Member 'UHUD_NetworkInfo_C::HorizontalBox_ServerVersion' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, HorizontalBox_SessionID) == 0x000308, "Member 'UHUD_NetworkInfo_C::HorizontalBox_SessionID' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, HorizontalBox_StatusIcons) == 0x000310, "Member 'UHUD_NetworkInfo_C::HorizontalBox_StatusIcons' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, SizeBox_ConnexionIssue) == 0x000318, "Member 'UHUD_NetworkInfo_C::SizeBox_ConnexionIssue' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, SizeBox_HighPing) == 0x000320, "Member 'UHUD_NetworkInfo_C::SizeBox_HighPing' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, SizeBox_PacketLoss) == 0x000328, "Member 'UHUD_NetworkInfo_C::SizeBox_PacketLoss' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, SizeBox_ServerPerformanceIssue) == 0x000330, "Member 'UHUD_NetworkInfo_C::SizeBox_ServerPerformanceIssue' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_KBps_In) == 0x000338, "Member 'UHUD_NetworkInfo_C::Text_value_KBps_In' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_KBps_Out) == 0x000340, "Member 'UHUD_NetworkInfo_C::Text_value_KBps_Out' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_Ping) == 0x000348, "Member 'UHUD_NetworkInfo_C::Text_value_Ping' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_PktLoss_In) == 0x000350, "Member 'UHUD_NetworkInfo_C::Text_value_PktLoss_In' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_PktLoss_Out) == 0x000358, "Member 'UHUD_NetworkInfo_C::Text_value_PktLoss_Out' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_Pkts_In) == 0x000360, "Member 'UHUD_NetworkInfo_C::Text_value_Pkts_In' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_Pkts_Out) == 0x000368, "Member 'UHUD_NetworkInfo_C::Text_value_Pkts_Out' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_Region) == 0x000370, "Member 'UHUD_NetworkInfo_C::Text_value_Region' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_ServerFPS) == 0x000378, "Member 'UHUD_NetworkInfo_C::Text_value_ServerFPS' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_ServerVersion) == 0x000380, "Member 'UHUD_NetworkInfo_C::Text_value_ServerVersion' has a wrong offset!");
static_assert(offsetof(UHUD_NetworkInfo_C, Text_value_SessionID) == 0x000388, "Member 'UHUD_NetworkInfo_C::Text_value_SessionID' has a wrong offset!");

}
