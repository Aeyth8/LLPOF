#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_Octo_WeaponsBalancing

#include "Basic.hpp"

#include "DeceiveInc_structs.hpp"


namespace SDK
{

// ScriptStruct Struct_Octo_WeaponsBalancing.Struct_Octo_WeaponsBalancing
// 0x0040 (0x0040 - 0x0000)
struct FStruct_Octo_WeaponsBalancing final
{
public:
	int32                                         IntelCost_38_9D8FFD2046650FDC671B9CB64437ABD7;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mod1Increase_8_6512E96D45D2C6D04D9D53BB8ADD6E50;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mod1DecreaseTime_10_9D8A879747F200913AEFF49A4B4878D7; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mod1DecreaseDelay_12_2BD230C0459867534B57EA834BCE27B1; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mod1OverheatDuration_14_DCBD7CB44421DC194075D0A80AE1CB95; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mod1ResetDuration_16_1B61FEEA407CA81E4E2F459F00AC81F8; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ADSLvl0Size_19_E77D4B814605FDBA67F9A99BF09D045B;   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ADSLvl1Size_21_1C718B6244D4A2AB34CF248728539261;   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ADSLvl2Size_23_748D70724FCBD4EC4D4B05A48332EABE;   // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ADSLvl3Size_25_4DB279E846D31E4CF96FE8B20FFA3FFF;   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ADSLvl4Size_27_A7363D754AB36508C4115B8F9441A9BB;   // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FChargeLevelWeaponData>         ADSChargeLevels_34_036519D449F389CA2F5F7C869681E2D1; // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FStruct_Octo_WeaponsBalancing) == 0x000008, "Wrong alignment on FStruct_Octo_WeaponsBalancing");
static_assert(sizeof(FStruct_Octo_WeaponsBalancing) == 0x000040, "Wrong size on FStruct_Octo_WeaponsBalancing");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, IntelCost_38_9D8FFD2046650FDC671B9CB64437ABD7) == 0x000000, "Member 'FStruct_Octo_WeaponsBalancing::IntelCost_38_9D8FFD2046650FDC671B9CB64437ABD7' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, Mod1Increase_8_6512E96D45D2C6D04D9D53BB8ADD6E50) == 0x000004, "Member 'FStruct_Octo_WeaponsBalancing::Mod1Increase_8_6512E96D45D2C6D04D9D53BB8ADD6E50' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, Mod1DecreaseTime_10_9D8A879747F200913AEFF49A4B4878D7) == 0x000008, "Member 'FStruct_Octo_WeaponsBalancing::Mod1DecreaseTime_10_9D8A879747F200913AEFF49A4B4878D7' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, Mod1DecreaseDelay_12_2BD230C0459867534B57EA834BCE27B1) == 0x00000C, "Member 'FStruct_Octo_WeaponsBalancing::Mod1DecreaseDelay_12_2BD230C0459867534B57EA834BCE27B1' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, Mod1OverheatDuration_14_DCBD7CB44421DC194075D0A80AE1CB95) == 0x000010, "Member 'FStruct_Octo_WeaponsBalancing::Mod1OverheatDuration_14_DCBD7CB44421DC194075D0A80AE1CB95' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, Mod1ResetDuration_16_1B61FEEA407CA81E4E2F459F00AC81F8) == 0x000014, "Member 'FStruct_Octo_WeaponsBalancing::Mod1ResetDuration_16_1B61FEEA407CA81E4E2F459F00AC81F8' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, ADSLvl0Size_19_E77D4B814605FDBA67F9A99BF09D045B) == 0x000018, "Member 'FStruct_Octo_WeaponsBalancing::ADSLvl0Size_19_E77D4B814605FDBA67F9A99BF09D045B' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, ADSLvl1Size_21_1C718B6244D4A2AB34CF248728539261) == 0x00001C, "Member 'FStruct_Octo_WeaponsBalancing::ADSLvl1Size_21_1C718B6244D4A2AB34CF248728539261' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, ADSLvl2Size_23_748D70724FCBD4EC4D4B05A48332EABE) == 0x000020, "Member 'FStruct_Octo_WeaponsBalancing::ADSLvl2Size_23_748D70724FCBD4EC4D4B05A48332EABE' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, ADSLvl3Size_25_4DB279E846D31E4CF96FE8B20FFA3FFF) == 0x000024, "Member 'FStruct_Octo_WeaponsBalancing::ADSLvl3Size_25_4DB279E846D31E4CF96FE8B20FFA3FFF' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, ADSLvl4Size_27_A7363D754AB36508C4115B8F9441A9BB) == 0x000028, "Member 'FStruct_Octo_WeaponsBalancing::ADSLvl4Size_27_A7363D754AB36508C4115B8F9441A9BB' has a wrong offset!");
static_assert(offsetof(FStruct_Octo_WeaponsBalancing, ADSChargeLevels_34_036519D449F389CA2F5F7C869681E2D1) == 0x000030, "Member 'FStruct_Octo_WeaponsBalancing::ADSChargeLevels_34_036519D449F389CA2F5F7C869681E2D1' has a wrong offset!");

}
