
	class CPC_Duala_O_NPFD_soldier_base : B_Soldier_base_F
	{
		side = 0;
		scope = 1;
		scopeCurator = 0;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		identityTypes[] = {"LanguageGRE_F","Head_African",""};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_crewman.p3d";
		uniformClass = "CPC_Duala_Uniform_NPFD_1";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\data\partisans\part_ttsko_full_co.paa"
		};
		icon = "iconMan";
		headgearList[] =
		{
			"",1,
			"H_Booniehat_oli",1,
			"CUP_H_SLA_BeretRed",1,
			"H_Bandanna_khk",1,
			"H_Booniehat_khk",1,
			"CUP_H_FR_BandanaGreen",1,
			"H_Bandanna_camo",1
		};
		#include "\CUP\Creatures\hitpoints_uniform_none.h"
	};
	class CPC_Duala_O_NPFD_soldier_1 : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Rifleman (AK47)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CUP_V_I_Carrier_Belt","CUP_H_SLA_BeretRed","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","CUP_H_SLA_BeretRed","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_2 : CPC_Duala_O_NPFD_soldier_1
	{
		displayName = "Rifleman (AKM)";
		linkedItems[] = {"CUP_V_I_Carrier_Belt","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKM","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
	};
	class CPC_Duala_O_NPFD_soldier_3 : CPC_Duala_O_NPFD_soldier_1
	{
		displayName = "Rifleman (AKS)";
		linkedItems[] = {"CUP_V_I_Carrier_Belt","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};
	};
	class CPC_Duala_O_NPFD_soldier_TL : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Chef de groupe";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		headgearList[] =
		{
			"CUP_H_SLA_BeretRed",1
		};
		linkedItems[] = {"CPC_Vest_Chestrig_2_Brown","CUP_H_SLA_BeretRed","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_2_Brown","CUP_H_SLA_BeretRed","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_AR : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Auto. Rifleman";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "CPC_Duala_Backpack_NPFD_AR";
		linkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_sniper : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Sniper";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		magazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_MG : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "CPC_Duala_Backpack_NPFD_MG";
		linkedItems[] = {"CUP_V_I_Carrier_Belt","CUP_H_FR_BandanaGreen","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","CUP_H_FR_BandanaGreen","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_lmg_UK59","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_UK59","Throw","Put"};
		magazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_Medic : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		picture = "pictureHeal";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CPC_Duala_Backpack_NPFD_Medic";
		linkedItems[] = {"CPC_Vest_Chestrig_1_Brown","G_Shades_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Brown","G_Shades_Red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_AT : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CPC_Duala_Backpack_NPFD_AT";
		linkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Bandanna_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Bandanna_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","SmokeShell","SmokeShell"};
	};
	class CPC_Duala_O_NPFD_soldier_AAT : CPC_Duala_O_NPFD_soldier_2
	{
		displayName = "Asst. AT Specialist";
		backpack = "CPC_Duala_Backpack_NPFD_AT";
	};
	class CPC_Duala_O_NPFD_soldier_ENG : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Explosive Specialist";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_Duala_Backpack_NPFD_ENG";
		linkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKM","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_4 : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Rifleman (M16)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Bandanna_sand","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Brown","H_Bandanna_sand","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_O_NPFD_soldier_GL : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02","CUP_FR_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_SLA_Carrier_Belt02","CUP_FR_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_glaunch_M79","Throw","Put"};
		respawnWeapons[] = {"CUP_glaunch_M79","Throw","Put"};
		magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","SmokeShell","SmokeShell"};
	};
	class CPC_Duala_O_NPFD_soldier_AA : CPC_Duala_O_NPFD_soldier_base
	{
		displayName = "AA Specialist";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Vest_Chestrig_1_Brown","CUP_H_SLA_BeretRed","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Brown","CUP_H_SLA_BeretRed","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	
	
	// Vehicles
	
	class CUP_C_Datsun;
	class CPC_Duala_O_NPFD_Datsun : CUP_C_Datsun
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_1";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
        textureList[] =
		{
			"greenBlackBeigeDesert", 1,
			"greenBlackBeigeDesertDot", 1,
			"greenBeigeDesert", 1,
			"desert", 1,
			"blueRed", 1,
			"blue", 1,
			"striped", 1,
			"redStarWoodland", 1,
			"greenBeigeWoodland", 1,
			"greenBrownBeigeWoodland", 1
		};
		animationList[] =
		{
			"hideGrille", 0.5,
			"hideRearDoor", 1,
			"hideSpareTire", 0.5,
			"hideRollBar", 0.5
		};
	};
	
	class CUP_O_Datsun_PK;
	class CPC_Duala_O_NPFD_Datsun_PK : CUP_O_Datsun_PK
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_3";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
        textureList[] =
		{
			"greenBlackBeigeDesert", 1,
			"greenBlackBeigeDesertDot", 1,
			"greenBeigeDesert", 1,
			"desert", 1,
			"blueRed", 1,
			"blue", 1,
			"striped", 1
		};
		animationList[] =
		{
			"hideGrille", 0.5,
			"hideRearDoor", 1,
			"hideSpareTire", 0.5,
			"hideRollBar", 0.5
		};
	};
	
	class CUP_C_Ural_Civ_01;
	class CPC_Duala_O_NPFD_Ural_1 : CUP_C_Ural_Civ_01
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_3";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
	};
	class CUP_C_Ural_Civ_02;
	class CPC_Duala_O_NPFD_Ural_2 : CUP_C_Ural_Civ_02
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_2";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
	};
	class CPC_Duala_O_NPFD_Ural_3 : CUP_C_Ural_Civ_02
	{
		side = 0;
		scope = 2;
		displayName = "Ural (Green)";
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_1";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"
		};
	};
	class CUP_C_Ural_Open_Civ_01;
	class CPC_Duala_O_NPFD_Ural_Open_1 : CUP_C_Ural_Open_Civ_01
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_3";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
	};
	class CUP_C_Ural_Open_Civ_02;
	class CPC_Duala_O_NPFD_Ural_Open_2 : CUP_C_Ural_Open_Civ_02
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_2";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
	};
	class CPC_Duala_O_NPFD_Ural_Open_3 : CUP_C_Ural_Open_Civ_02
	{
		side = 0;
		scope = 2;
		displayName = "Ural (Green)(Open)";
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_1";
        typicalCargo[] = {"CPC_Duala_O_NPFD_soldier_1","CPC_Duala_O_NPFD_soldier_2","CPC_Duala_O_NPFD_soldier_AR","CPC_Duala_O_NPFD_soldier_3"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"
		};
	};
	class CPC_Duala_O_NPFD_Ural_ZU23 : CUP_Ural_ZU23_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_NPFD";
		crew = "CPC_Duala_O_NPFD_soldier_2";
        hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa"
		};
	};