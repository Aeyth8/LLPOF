#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_VO

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_VO.BPI_VO_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_VO_C final : public IInterface
{
public:
	void BPI_VO_Agent_HackingLong();
	void BPI_VO_Agent_HackingShort();
	void BPI_VO_Agent_ChangeCover_Civilian();
	void BPI_VO_Agent_ChangeCover_Guard();
	void BPI_VO_Agent_ChangeCover_Technician();
	void BPI_VO_Agent_ChangeCover_VIP();
	void BPI_VO_Agent_ChangeCover_Staff();
	void BPI_VO_Agent_LootKeycard();
	void BPI_VO_Agent_Death();
	void BPI_VO_Agent_HackingSpyCache();
	void BPI_VO_Agent_ExpertiseActivated();
	void BPI_VO_Agent_LootAmmoPack();
	void BPI_VO_Agent_LootPowerUp();
	void BPI_VO_Agent_LootObjective();
	void BPI_VO_Agent_ObjectiveCapturedByOthers();
	void BPI_VO_Agent_KillSpyGeneric();
	void BPI_VO_Agent_Hurt();
	void BPI_VO_Agent_Exert();
	void BPI_VO_Agent_LowHealth();
	void BPI_VO_Agent_CAV_Expertise_InteractClue();
	void BPI_VO_Agent_CAV_Expertise_Failure();
	void BPI_VO_Agent_CAV_Expertise_TrackStart(int32 ChaseLevel);
	void BPI_VO_Agent_PassiveTriggered();
	void BPI_VO_Agent_AgentSelect();
	void BPI_VO_Agent_VictoryLine();
	void BPI_VO_OutroCar_StartVictoryLineProcess();
	void BPI_VO_Agent_ShootNoAmmo();
	void BPI_VO_Agent_LootSpyDrop();
	void BPI_VO_IRIS_InGame_CharacterName();
	void BPI_VO_IRIS_InGame_CoverBreak_NoDMG();
	void BPI_VO_IRIS_InGame_ExtractionArrived_NoObjective();
	void BPI_VO_IRIs_InGame_ExtractionArrived_WithObjective();
	void BPI_VO_IRIS_InGame_ExtractionCalled_LastAgentStanding();
	void BPI_VO_IRIS_InGame_GadgetDestroyed();
	void BPI_VO_IRIS_InGame_LowHealth_Reminder();
	void BPI_VO_IRIS_InGame_LowHealth_Alert();
	void BPI_VO_IRIS_InGame_Teammate_Death();
	void BPI_VO_IRIS_InGame_Teammate_Down();
	void BPI_VO_IRIS_InGame_Teammate_RezRequest();
	void BPI_VO_IRIS_InGame_Traced();
	void BPI_VO_IRIS_InGame_VaultOpen();
	void BPI_VO_IRIS_InGame_VaultTerminalDiscovery_Negative();
	void BPI_VO_IRIS_InGame_VaultTerminalDiscovery_Positive();
	void BPI_VO_IRIS_InGame_VaultTerminal_Shutdown_Enemy();
	void BPI_VO_IRIS_InGame_VaultTerminal_Shutdown_Friendly();
	void BPI_VO_IRIS_Options_Voice_Volume();
	void BPI_VO_IRIS_PreGameLobby_PepTalk();
	void BPI_VO_IRIS_Options_Language();
	void BPI_VO_IRIS_HealingStation();
	void BPI_VO_IRIS_Bucket_Negative();
	void BPI_VO_IRIS_Bucket_Positive();
	void BPI_VO_Agent_TeamComm();
	void BPI_VO_Agent_DeployingGadget();
	void BPI_VO_Agent_Jump_Exert();
	void BPI_VO_IRIS_InGame_AllyPickedUpObjective();
	void BPI_VO_IRIS_InGame_NavMode_ObjectSelected();
	void BPI_VO_IRIS_InGame_NavMode_DestinationReached();
	void BPI_VO_IRIS_InGame_EmpoweredNavMode_Start();
	void BPI_VO_IRIS_InGame_EmpoweredNavMode_LowIntel();
	void BPI_VO_IRIS_InGame_ExtractionBlocked();
	void BPI_VO_IRIS_InGame_ExtractionZoneMoved();
	void BPI_VO_IRIS_InGame_VaultTerminalAlreadyShutDown();
	void BPI_VO_Agent_SOC_Active_StanceIn();
	void BPI_VO_Agent_Loot_Generic();
	void BPI_VO_Agent_Laugh();
	void BPI_VO_Agent_ShootNoAmmo_Secondary();
	void BPI_VO_Agent_OCT_ShootNoIntel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_VO_C">();
	}
	static class IBPI_VO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_VO_C>();
	}
};
static_assert(alignof(IBPI_VO_C) == 0x000008, "Wrong alignment on IBPI_VO_C");
static_assert(sizeof(IBPI_VO_C) == 0x000028, "Wrong size on IBPI_VO_C");

}

