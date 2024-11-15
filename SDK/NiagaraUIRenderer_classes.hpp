#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraUIRenderer

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_classes.hpp"
#include "Niagara_classes.hpp"


namespace SDK
{

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x0088 (0x0190 - 0x0108)
class UNiagaraSystemWidget final : public UWidget
{
public:
	class UNiagaraSystem*                         NiagaraSystemReference;                            // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                 // 0x0110(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          AutoActivate;                                      // 0x0160(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TickWhenPaused;                                    // 0x0161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FakeDepthScale;                                    // 0x0162(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_163[0x1];                                      // 0x0163(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FakeDepthScaleDistance;                            // 0x0164(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowDebugSystemInWorld;                            // 0x0168(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DisableWarnings;                                   // 0x0169(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16A[0x16];                                     // 0x016A(0x0016)(Fixing Size After Last Property [ Dumper-7 ])
	class ANiagaraUIActor*                        NiagaraActor;                                      // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraUIComponent*                    NiagaraComponent;                                  // 0x0188(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ActivateSystem(bool Reset);
	void DeactivateSystem();
	class UNiagaraUIComponent* GetNiagaraComponent();
	void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
	void UpdateTickWhenPaused(bool NewTickWhenPaused);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSystemWidget">();
	}
	static class UNiagaraSystemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSystemWidget>();
	}
};
static_assert(alignof(UNiagaraSystemWidget) == 0x000008, "Wrong alignment on UNiagaraSystemWidget");
static_assert(sizeof(UNiagaraSystemWidget) == 0x000190, "Wrong size on UNiagaraSystemWidget");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraSystemReference) == 0x000108, "Member 'UNiagaraSystemWidget::NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, MaterialRemapList) == 0x000110, "Member 'UNiagaraSystemWidget::MaterialRemapList' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, AutoActivate) == 0x000160, "Member 'UNiagaraSystemWidget::AutoActivate' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, TickWhenPaused) == 0x000161, "Member 'UNiagaraSystemWidget::TickWhenPaused' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScale) == 0x000162, "Member 'UNiagaraSystemWidget::FakeDepthScale' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScaleDistance) == 0x000164, "Member 'UNiagaraSystemWidget::FakeDepthScaleDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, ShowDebugSystemInWorld) == 0x000168, "Member 'UNiagaraSystemWidget::ShowDebugSystemInWorld' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, DisableWarnings) == 0x000169, "Member 'UNiagaraSystemWidget::DisableWarnings' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActor) == 0x000180, "Member 'UNiagaraSystemWidget::NiagaraActor' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraComponent) == 0x000188, "Member 'UNiagaraSystemWidget::NiagaraComponent' has a wrong offset!");

// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x0220 - 0x0220)
class ANiagaraUIActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIActor">();
	}
	static class ANiagaraUIActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraUIActor>();
	}
};
static_assert(alignof(ANiagaraUIActor) == 0x000008, "Wrong alignment on ANiagaraUIActor");
static_assert(sizeof(ANiagaraUIActor) == 0x000220, "Wrong size on ANiagaraUIActor");

// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0010 (0x0610 - 0x0600)
class UNiagaraUIComponent final : public UNiagaraComponent
{
public:
	uint8                                         Pad_600[0x10];                                     // 0x0600(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIComponent">();
	}
	static class UNiagaraUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraUIComponent>();
	}
};
static_assert(alignof(UNiagaraUIComponent) == 0x000010, "Wrong alignment on UNiagaraUIComponent");
static_assert(sizeof(UNiagaraUIComponent) == 0x000610, "Wrong size on UNiagaraUIComponent");

}

