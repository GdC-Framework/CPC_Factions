	
	class CPC_Afrique_I_pirate_base_1 : B_Soldier_base_F
	{
		side = 2;
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
		faction = "CPC_I_Pirate";
		identityTypes[] = {"LanguageFRE_F","Head_African",""};
		model = "\A3\Characters_F\Civil\c_poloshirt.p3d";
		uniformClass = "CPC_Afrique_Clothes_Pirate_1";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		hiddenSelectionsTextures[] = {
		"\CPC\Factions\CPC_Factions_CUP_Afrique\Data\pirate_uniform1.paa"
		};
		headgearList[] =
		{
			"",1,
			"H_Booniehat_oli",1,
			"H_Bandanna_khk",1,
			"H_Booniehat_khk",1,
			"CUP_H_FR_BandanaGreen",1,
			"H_Bandanna_camo",1,
			"H_Bandanna_gry",1,
			"H_Cap_blk",1,
			"H_Cap_oli",1,
			"H_Shemag_olive",1,
			"H_ShemagOpen_tan",1,
			"H_ShemagOpen_khk",1,
			"CUP_H_SLA_Helmet",1
			
		};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_Afrique_I_pirate_base_2 : CPC_Afrique_I_pirate_base_1
	{
		side = 2;
		scope = 1;
		scopeCurator = 0;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		uniformClass = "CPC_Afrique_Clothes_Pirate_2";
		hiddenSelectionsTextures[] = {
		"\CPC\Factions\CPC_Factions_CUP_Afrique\Data\pirate_uniform2.paa"
		};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_Afrique_I_pirate_base_3 : CPC_Afrique_I_pirate_base_1
	{
		side = 2;
		scope = 1;
		scopeCurator = 0;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		uniformClass = "CPC_Afrique_Clothes_Pirate_3";
		hiddenSelectionsTextures[] = {
		"\CPC\Factions\CPC_Factions_CUP_Afrique\Data\pirate_uniform3.paa"
		};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	
	class CPC_Afrique_I_pirate_soldier_TL : CPC_Afrique_I_pirate_base_1
	{
		displayName = "Leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		cost = 250000;
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Com","H_Bandanna_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Com","H_Bandanna_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS74U","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS74U","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_TL);
	};
	
	class CPC_Afrique_I_pirate_soldier_1 : CPC_Afrique_I_pirate_base_2
	{
		displayName = "Rifleman (AK74)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK74","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_1);
	};
	
	class CPC_Afrique_I_pirate_soldier_2 : CPC_Afrique_I_pirate_base_3
	{
		displayName = "Rifleman (AK47)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Cap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Cap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_TYPE_56_2_Early","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_2);
	};
	
	class CPC_Afrique_I_pirate_soldier_3 : CPC_Afrique_I_pirate_base_3
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		role = "Marksman";
		cost = 250000;
		linkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_Afrique_arifle_AK74_PSO","Binocular","Throw","Put"};
		respawnWeapons[] = {"CPC_Afrique_arifle_AK74_PSO","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_3);
	};
	
	class CPC_Afrique_I_pirate_soldier_MG : CPC_Afrique_I_pirate_base_2
	{
		displayName = "Machinegunner (PKM)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		backpack = "CPC_Afrique_Backpack_Pirate_MG";
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","H_Booniehat_khk","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","H_Booniehat_khk","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_MG);
	};
		
	class CPC_Afrique_I_pirate_soldier_AR : CPC_Afrique_I_pirate_base_1
	{
		displayName = "Auto. Rifleman (RPK)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		linkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","H_Bandanna_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","H_Bandanna_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_AR);
	};
	
	class CPC_Afrique_I_pirate_soldier_GL : CPC_Afrique_I_pirate_base_1
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		role = "Grenadier";
		cost = 200000;
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M",
		"CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M",
		"SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M",
		"CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M",
		"CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M",
		"CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M",
		"SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_GL);
	};

	class CPC_Afrique_I_pirate_soldier_AT : CPC_Afrique_I_pirate_base_2
	{
		displayName = "AT Specialist";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		backpack = "CPC_Afrique_Backpack_Pirate_AT";
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_B_RPGPack_Khaki","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_B_RPGPack_Khaki","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_PG7V_M","CUP_OG7_M","CUP_OG7_M","CUP_PG7V_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_PG7V_M","CUP_OG7_M","CUP_OG7_M","CUP_PG7V_M"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_AT);
	};
	
	class CPC_Afrique_I_pirate_soldier_ENG : CPC_Afrique_I_pirate_base_3
	{
		displayName = "Sapper";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		camouflage = 1.5;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		backpack = "CPC_Duala_Backpack_NPFD_ENG";
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS74U","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS74U","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_ENG);
	};
	
	class CPC_Afrique_I_pirate_soldier_Medic : CPC_Afrique_I_pirate_base_3
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.5;
		backpack = "CPC_Duala_Backpack_NPFD_Medic";
		linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS74U","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS74U","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_soldier_Medic);
	};
	//Vehicles
	class CPC_Afrique_I_pirate_Zodiac : CUP_B_Zodiac_USMC
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_Pirate";
		crew = "CPC_Afrique_I_pirate_soldier_2";
        typicalCargo[] = {"CPC_Afrique_I_pirate_soldier_1","CPC_Afrique_I_pirate_soldier_2","CPC_Afrique_I_pirate_soldier_AR","CPC_Afrique_I_pirate_soldier_GL"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_Zodiac);
	};
	class CPC_Afrique_I_pirate_PBX : CUP_O_PBX_SLA
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_Pirate";
		crew = "CPC_Afrique_I_pirate_soldier_1";
        typicalCargo[] = {"CPC_Afrique_I_pirate_soldier_1","CPC_Afrique_I_pirate_soldier_2","CPC_Afrique_I_pirate_soldier_AR","CPC_Afrique_I_pirate_soldier_GL"};
		CPC_PREVIEW(CPC_Afrique_I_pirate_PBX);
	};
