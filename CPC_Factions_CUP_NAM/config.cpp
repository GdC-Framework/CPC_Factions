
class CfgPatches
{
	class CPC_Factions_CUP_NAM
	{
		units[] =
		{
			"CPC_NAM_O_VC_soldier_TL",
			"CPC_NAM_O_VC_soldier_1",
			"CPC_NAM_O_VC_soldier_2",
			"CPC_NAM_O_VC_soldier_3",
			"CPC_NAM_O_VC_soldier_4",
			"CPC_NAM_O_VC_soldier_5",
			"CPC_NAM_O_VC_soldier_6",
			"CPC_NAM_O_VC_soldier_7",
			"CPC_NAM_O_VC_soldier_8",
			"CPC_NAM_O_VC_soldier_9",
			"CPC_NAM_O_VC_soldier_10",
			"CPC_NAM_O_VC_soldier_AR",
			"CPC_NAM_O_VC_soldier_MG",
			"CPC_NAM_O_VC_soldier_AMG",
			"CPC_NAM_O_VC_soldier_AT",
			"CPC_NAM_O_VC_soldier_ENG",
			"CPC_NAM_O_VC_soldier_M1",
			"CPC_NAM_O_VC_soldier_M2",
			"CPC_NAM_O_VC_soldier_AA",
			"CPC_NAM_O_VC_soldier_Medic",
			"CPC_NAM_O_VC_Ural",
			"CPC_NAM_O_VC_Ural_Open",
			"CPC_NAM_O_VC_Ural_ZU23",
			"CPC_NAM_O_VC_BTR40",
			"CPC_NAM_O_VC_BTR40_MG",
			"CPC_NAM_O_VC_DSHKM",
			"CPC_NAM_O_VC_DSHKM_MiniTripod",
			"CPC_NAM_O_VC_2b14_82mm",
			"CPC_NAM_O_VC_SPG9",
			"CPC_NAM_O_VC_D30",
			"CPC_NAM_O_VC_D30_AT",
			"CPC_NAM_O_VC_ZU23",
			"CPC_NAM_O_VC_V3S_Open",
			"CPC_NAM_O_VC_V3S_Covered",
			"CPC_NAM_B_US_soldier_TL",
			"CPC_NAM_B_US_soldier_1",
			"CPC_NAM_B_US_soldier_Medic",
			"CPC_NAM_B_US_soldier_MG",
			"CPC_NAM_B_US_soldier_GL",
			"CPC_NAM_B_US_soldier_RTO",
			"CPC_NAM_B_US_soldier_ENG",
			"CPC_NAM_B_US_soldier_A",
			"CPC_NAM_B_US_soldier_LAT",
			"CPC_NAM_B_US_soldier_M",
			"CPC_NAM_B_US_soldier_crew",
			"CPC_NAM_B_US_soldier_pilot",
			"CPC_NAM_B_US_M113",
			"CPC_NAM_B_US_M163",
			"CPC_NAM_B_US_C47",
			"CPC_NAM_B_US_AC47_Spooky",
			"CPC_NAM_B_US_C130J",
			"CPC_NAM_B_US_C130J_Cargo",
			"CPC_NAM_B_US_M119",
			"CPC_NAM_B_US_M2StaticMG",
			"CPC_NAM_B_US_M2StaticMG_MiniTripod",
			"CPC_NAM_B_US_M252",
			"CPC_NAM_B_US_Zodiac",
			"CPC_NAM_B_US_UH1H",
			"CPC_NAM_B_US_UH1H_armed",
			"CPC_NAM_B_US_UH1H_slick",
			"CPC_NAM_B_US_CH47F"
		};
		weapons[] = 
		{
			
		};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"CPC_Factions_CUP_Main",
			"A3_Characters_F",
			"CUP_Weapons_Backpacks",
			"cba_xeh"
		};
	};
};

class CfgFactionClasses
{
	class CPC_B_NAM_US
	{
		displayName = "US (Vietnam)";
		author = "CPC Faction";
		priority = 1;
		side = 1;
	};
	class CPC_O_NAM_VC
	{
		displayName = "Viet Cong";
		author = "CPC Faction";
		priority = 1;
		side = 0;
	};
};

class Extended_Init_Eventhandlers
{
	class CPC_NAM_O_VC_soldier_1_base
	{
		CPC_NAM_O_VC_soldier_1_base_init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
	};
	class CPC_NAM_B_US_soldier_1_base
	{
		CPC_NAM_B_US_soldier_1_base_init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
	};
};

#define CPC_PREVIEW(x) 	editorPreview = \CPC\Factions\CPC_Factions_CUP_NAM\data\preview\##x##.jpg;

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
