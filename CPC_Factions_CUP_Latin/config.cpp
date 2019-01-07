
class CfgPatches
{
	class CPC_Factions_CUP_Latin
	{
		units[] =
		{
			"CPC_LAT_B_EJE_soldier_1",
			"CPC_LAT_B_EJE_soldier_light",
			"CPC_LAT_B_EJE_soldier_M",
			"CPC_LAT_B_EJE_soldier_AT",
			"CPC_LAT_B_EJE_soldier_AAT",
			"CPC_LAT_B_EJE_soldier_MG",
			"CPC_LAT_B_EJE_soldier_AMG",
			"CPC_LAT_B_EJE_soldier_Medic",
			"CPC_LAT_B_EJE_soldier_crew",
			"CPC_LAT_B_EJE_soldier_TL",
			"CPC_LAT_B_EJE_soldier_Officer",
			"CPC_LAT_B_EJE_soldier_HeliPilot",
			"CPC_LAT_B_EJE_soldier_Pilot",
			"CPC_LAT_B_EJE_soldier_ENG",
			"CPC_LAT_B_EJE_M113",
			"CPC_LAT_B_EJE_M60A3",
			"CPC_LAT_B_EJE_MTVR",
			"CPC_LAT_B_EJE_MTVR_Ammo",
			"CPC_LAT_B_EJE_MTVR_Refuel",
			"CPC_LAT_B_EJE_MTVR_Repair",
			"CPC_LAT_B_EJE_LR_Transport",
			"CPC_LAT_B_EJE_LR_MG",
			"CPC_LAT_B_EJE_LR_Ambulance",
			"CPC_LAT_B_EJE_BTR40",
			"CPC_LAT_B_EJE_BTR40_MG",
			"CPC_LAT_B_EJE_C47",
			"CPC_LAT_B_EJE_M119",
			"CPC_LAT_B_EJE_M2StaticMG",
			"CPC_LAT_B_EJE_M2StaticMG_MiniTripod",
			"CPC_LAT_B_EJE_M252",
			"CPC_LAT_B_EJE_RHIB",
			"CPC_LAT_B_EJE_Zodiac",
			"CPC_LAT_B_EJE_LCVP",
			"CPC_LAT_B_EJE_LCVP_VIV",
			"CPC_LAT_B_EJE_UH1H",
			"CPC_LAT_B_EJE_UH1H_armed",
			"CPC_LAT_B_EJE_UH1H_slick",
			"CPC_LAT_I_PIC_soldier_1",
			"CPC_LAT_I_PIC_soldier_2",
			"CPC_LAT_I_PIC_soldier_3",
			"CPC_LAT_I_PIC_soldier_4",
			"CPC_LAT_I_PIC_soldier_GL",
			"CPC_LAT_I_PIC_soldier_M",
			"CPC_LAT_I_PIC_soldier_LAT",
			"CPC_LAT_I_PIC_soldier_AT",
			"CPC_LAT_I_PIC_soldier_AAT",
			"CPC_LAT_I_PIC_soldier_MG",
			"CPC_LAT_I_PIC_soldier_AMG",
			"CPC_LAT_I_PIC_soldier_AR",
			"CPC_LAT_I_PIC_soldier_Medic",
			"CPC_LAT_I_PIC_soldier_TL",
			"CPC_LAT_I_PIC_soldier_Officer",
			"CPC_LAT_I_PIC_soldier_ENG",
			"CPC_LAT_I_PIC_M2StaticMG",
			"CPC_LAT_I_PIC_M2StaticMG_MiniTripod",
			"CPC_LAT_I_PIC_M252",
			"CPC_LAT_I_PIC_DSHKM",
			"CPC_LAT_I_PIC_DSHkM_MiniTriPod",
			"CPC_LAT_I_PIC_SPG9",
			"CPC_LAT_I_PIC_2b14_82mm",
			"CPC_LAT_I_PIC_ZU23",
			"CPC_LAT_I_PIC_Datsun",
			"CPC_LAT_I_PIC_Datsun_PK",
			"CPC_LAT_I_PIC_Ural_1",
			"CPC_LAT_I_PIC_Ural_2",
			"CPC_LAT_I_PIC_Ural_3",
			"CPC_LAT_I_PIC_Ural_Open_1",
			"CPC_LAT_I_PIC_Ural_Open_2",
			"CPC_LAT_I_PIC_Ural_Open_3",
			"CPC_LAT_I_PIC_Ural_ZU23",
			"CPC_LAT_I_PIC_BTR40",
			"CPC_LAT_I_PIC_BTR40_MG",
			"CPC_LAT_I_PIC_V3S_Open",
			"CPC_LAT_I_PIC_V3S_Covered",
			"CPC_LAT_I_PIC_Zodiac",
			"CPC_LAT_I_PIC_PBX"
		};
		weapons[] = 
		{
			
		};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"CPC_Factions_CUP_Main"
			"A3_Characters_F"
		};
	};
};

class CfgFactionClasses
{
	class CPC_I_PIC
	{
		displayName = "Picaros";
		author = "CPC Faction";
		priority = 1;
		side = 2;
	};
	class CPC_B_EJE
	{
		displayName = "Ejercito";
		author = "CPC Faction";
		priority = 1;
		side = 1;
	};
};

#define CPC_PREVIEW(x) 	editorPreview = \CPC\Factions\CPC_Factions_CUP_Latin\data\preview\##x##.jpg

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
