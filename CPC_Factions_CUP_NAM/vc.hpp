	class CPC_NAM_O_VC_soldier_1_base : B_Soldier_base_F
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.4;
		minFireTime = 7;
		canCarryBackPack = 1;
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		identityTypes[] = {"LanguageCHI_F","Head_Asian",""};
		uniformClass = "CUP_O_TKI_Khet_Partug_06";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
		headgearList[] =
		{
			"",1,
			"H_Bandanna_gry",0.5,
			"H_Bandanna_khk",0.3,
			"H_Booniehat_khk",0.3,
			"H_Booniehat_oli",0.1,
			"H_HeadBandage_stained_F",0.1,
			"H_HeadBandage_bloody_F",0.1,
			"",0.1,
			"H_Booniehat_khk",0.1
		};
	};

	class CPC_NAM_O_VC_soldier_TL: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		cost = 250000;
		camouflage = 1.4;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_TL)
		linkedItems[] = {"CUP_V_CDF_CrewBelt","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_CDF_CrewBelt","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_AKS","CUP_hgun_Makarov","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","CUP_hgun_Makarov","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class CPC_NAM_O_VC_soldier_1: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AK)";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_1)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_AK47_Early","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47_Early","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell"};
	};
	class CPC_NAM_O_VC_soldier_2: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (M14)";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_2)
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_srifle_M14","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_M14","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_DMR","16Rnd_9x21_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","16Rnd_9x21_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
	class CPC_NAM_O_VC_soldier_3: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (M16)";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_3)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","16Rnd_9x21_Mag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","16Rnd_9x21_Mag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_O_VC_soldier_4: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Shotgun)";
		//icon = "iconManMG"; //Is this guy MG ?
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_4)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"sgun_HunterShotgun_01_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"sgun_HunterShotgun_01_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"2Rnd_12Gauge_Pellets","16Rnd_9x21_Mag","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
		respawnMagazines[] = {"2Rnd_12Gauge_Pellets","16Rnd_9x21_Mag","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
	};
	class CPC_NAM_O_VC_soldier_5: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AKM)";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_5)
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_AKM_Early","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKM_Early","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class CPC_NAM_O_VC_soldier_6: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Type 56)";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_6)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_TYPE_56_2_Early","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class CPC_NAM_O_VC_soldier_7: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (SA-58)";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_7)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_Sa58P","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Sa58P","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M"};
	};
	class CPC_NAM_O_VC_soldier_8: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Mosin)";
		//icon = "iconManMG"; //Is this guy MG ?
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_8)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_srifle_Mosin_Nagant","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_Mosin_Nagant","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_5Rnd_762x54_Mosin_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M"};
		respawnMagazines[] = {"CUP_5Rnd_762x54_Mosin_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M"};
	};
	class CPC_NAM_O_VC_soldier_9: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (SKS)";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_9)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_SKS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_SKS","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x39_SKS_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
		respawnMagazines[] = {"CUP_10Rnd_762x39_SKS_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
	};
	class CPC_NAM_O_VC_soldier_10: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Enfield)";
		//icon = "iconManMG"; //Is this guy MG ?
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_10)
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
	};
	class CPC_NAM_O_VC_soldier_AR: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_AR)
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_RPK74","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_RPK74","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","16Rnd_9x21_Mag","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};
		respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","16Rnd_9x21_Mag","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};
	};
	class CPC_NAM_O_VC_soldier_MG: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		cost = 220000;
		icon = "iconManMG";
		role = "MachineGunner";
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_MG)
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_lmg_UK59","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_UK59","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","16Rnd_9x21_Mag","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer"};
		respawnMagazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","16Rnd_9x21_Mag","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer"};
	};
	class CPC_NAM_O_VC_soldier_AMG: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Machinegunner";
		role = "Assistant";
		camouflage = 1.5;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_AMG)
		backpack = "CPC_NAM_Backpack_VC_AMG";
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_AKS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class CPC_NAM_O_VC_soldier_AT: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Specialist (RPG-7)";
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_AT)
		backpack = "CPC_NAM_Backpack_VC_AT";
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_AK47_Early","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47_Early","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class CPC_NAM_O_VC_soldier_ENG: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Explosive Specialist";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		camouflage = 1.6;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_ENG)
		backpack = "CPC_NAM_Backpack_VC_ENG";
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_AK47_Early","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47_Early","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell"};
	};
	class CPC_NAM_O_VC_soldier_M1: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sharpshooter (SVD)";
		role = "Marksman";
		cost = 250000;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_M1)
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_SVD_pso","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
	};
	class CPC_NAM_O_VC_soldier_M2: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sharpshooter (Mosin)";
		role = "Marksman";
		cost = 250000;
		//icon = "iconManMG"; //Is this guy MG ?
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_M2)
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_srifle_Mosin_Nagant_PEM","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_Mosin_Nagant_PEM","Throw","Put"};
		magazines[] = {"CUP_5Rnd_762x54_Mosin_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M"};
		respawnMagazines[] = {"CUP_5Rnd_762x54_Mosin_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M"};
	};
	class CPC_NAM_O_VC_soldier_AA: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "AA Specialist (Strela)";
		cost = 130000;
		threat[] = {0.8,0.1,1.0};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_AA)
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_TYPE_56_2_Early","CUP_launch_9K32Strela_Loaded","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early","CUP_launch_9K32Strela_Loaded","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","16Rnd_9x21_Mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class CPC_NAM_O_VC_soldier_Medic: CPC_NAM_O_VC_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		CPC_PREVIEW(CPC_NAM_O_VC_soldier_medic)
		backpack = "CPC_NAM_Backpack_VC_Medic";
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_AK47_Early","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47_Early","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell"};
	};
	
	//Vehicles
	
	class CUP_C_Ural_Civ_02;
	class CPC_NAM_O_VC_Ural : CUP_C_Ural_Civ_02
	{
		side = 0;
		scope = 2;
		displayName = "Ural (Green)";
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_1";
        typicalCargo[] = {"CPC_NAM_O_VC_soldier_1","CPC_NAM_O_VC_soldier_2","CPC_NAM_O_VC_soldier_AR","CPC_NAM_O_VC_soldier_3"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"
		};
		VEHICLECARGOVC
		CPC_PREVIEW(CPC_NAM_O_VC_Ural)
	};
	class CUP_C_Ural_Open_Civ_02;
	class CPC_NAM_O_VC_Ural_Open : CUP_C_Ural_Open_Civ_02
	{
		side = 0;
		scope = 2;
		displayName = "Ural (Green) (Open)";
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_1";
        typicalCargo[] = {"CPC_NAM_O_VC_soldier_1","CPC_NAM_O_VC_soldier_2","CPC_NAM_O_VC_soldier_AR","CPC_NAM_O_VC_soldier_3"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"
		};
		VEHICLECARGOVC
		CPC_PREVIEW(CPC_NAM_O_VC_Ural_Open)
	};
	class CUP_O_Ural_ZU23_CHDKZ;
	class CPC_NAM_O_VC_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_2";
        hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"
		};
		VEHICLECARGOVC
		CPC_PREVIEW(CPC_NAM_O_VC_Ural_ZU23)
	};
	class CUP_BTR40_Base;
	class CPC_NAM_O_VC_BTR40 : CUP_BTR40_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_1";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_2","CPC_NAM_O_VC_soldier_5","CPC_NAM_O_VC_soldier_3"};
        hiddenSelectionsTextures[] ={"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa"};
		VEHICLECARGOVC
		CPC_PREVIEW(CPC_NAM_O_VC_BTR40)
	};
	class CUP_BTR40_MG_Base;
	class CPC_NAM_O_VC_BTR40_MG : CUP_BTR40_MG_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_1";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_2","CPC_NAM_O_VC_soldier_5","CPC_NAM_O_VC_soldier_3"};
        hiddenSelectionsTextures[] ={"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa"};
		VEHICLECARGOVC
		CPC_PREVIEW(CPC_NAM_O_VC_BTR40_MG)
	};
	
	class CUP_DSHKM_base;
	class CPC_NAM_O_VC_DSHKM : CUP_DSHKM_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_1";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_1"};
		CPC_PREVIEW(CPC_NAM_O_VC_DSHKM)
	};
	class CUP_DSHKM_MiniTripod_base;
	class CPC_NAM_O_VC_DSHKM_MiniTripod : CUP_DSHKM_MiniTripod_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_2";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_2"};
		CPC_PREVIEW(CPC_NAM_O_VC_DSHKM)
	};
	class CUP_2b14_82mm_Base;
	class CPC_NAM_O_VC_2b14_82mm : CUP_2b14_82mm_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_3";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_3"};
		CPC_PREVIEW(CPC_NAM_O_VC_2b14_82mm)
	};
	class CUP_SPG9_base;
	class CPC_NAM_O_VC_SPG9 : CUP_SPG9_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_5";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_5"};
		CPC_PREVIEW(CPC_NAM_O_VC_SPG9)
	};
	class CUP_O_D30_TK;
	class CPC_NAM_O_VC_D30 : CUP_O_D30_TK
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_6";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_6"};
	};
	class CUP_O_D30_AT_TK;
	class CPC_NAM_O_VC_D30_AT : CUP_O_D30_AT_TK
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_2";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_2"};
	};
	class CUP_O_ZU23_TK;
	class CPC_NAM_O_VC_ZU23 : CUP_O_ZU23_TK
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_1";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_1"};
	};
	class CUP_V3S_Open_Base;
	class CPC_NAM_O_VC_V3S_Open : CUP_V3S_Open_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_1";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_1"};
		hiddenSelections[] ={"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co.paa"
		};
		VEHICLECARGOVC
		CPC_PREVIEW(CPC_NAM_O_VC_V3S_Open)
	};
	class CUP_V3S_Covered_Base;
	class CPC_NAM_O_VC_V3S_Covered : CUP_V3S_Covered_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_O_NAM_VC";
		crew = "CPC_NAM_O_VC_soldier_2";
		typicalCargo[] = {"CPC_NAM_O_VC_soldier_2"};
		hiddenSelections[] ={"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] =
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_reammo_egue_co.paa"
		};
		VEHICLECARGOVC
		CPC_PREVIEW(CPC_NAM_O_VC_V3S_Covered)
	};
