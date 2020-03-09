	class I_Soldier_base_F: SoldierGB {};
	class CPC_LAT_I_PIC_soldier_base_1 : I_Soldier_base_F
	{
		side = 2;
		scope = 1;
		scopeCurator = 0;
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.2;
		minFireTime = 7;
		canCarryBackPack = 1;
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		identityTypes[] = {"LanguageGRE_F","Head_Greek",""};
		uniformClass = "CPC_Latin_Uniform_PIC_olive";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2.p3d";
		hiddenSelections[] = {"Camo1", "Camo2","Camo3", "Camo4", "Flag","insignia"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_OD_CO.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_OD_CO.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_OD_CO.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\BDUv2\BDUv2_OD_CO.paa"
		};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_US_patrol_cap_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_US_patrol_cap_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CPC_LAT_I_PIC_soldier_base_2: CPC_LAT_I_PIC_soldier_base_1
	{
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		uniformClass = "CPC_Latin_Uniform_PIC_olive_2";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2_dirty.p3d";
	};
	class CPC_LAT_I_PIC_soldier_1 : CPC_LAT_I_PIC_soldier_base_2
	{
		displayName = "Rifleman (FNFAL)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_1);
	};
	class CPC_LAT_I_PIC_soldier_2 : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Rifleman (AK)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"CUP_arifle_AK47","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_2);
	};
	class CPC_LAT_I_PIC_soldier_3 : CPC_LAT_I_PIC_soldier_base_2
	{
		displayName = "Rifleman (AKS)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_3);
	};
	class CPC_LAT_I_PIC_soldier_4 : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Rifleman (LeeEnfield)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_4);
	};
	class CPC_LAT_I_PIC_soldier_GL : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		role = "Grenadier";
		weapons[] = {"CUP_glaunch_M79","Throw","Put"};
		respawnWeapons[] = {"CUP_glaunch_M79","Throw","Put"};
		magazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_GL);
	};
	class CPC_LAT_I_PIC_soldier_M : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		role = "Marksman";
		cost = 250000;
		weapons[] = {"CUP_srifle_LeeEnfield_T","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield_T","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_M);
	};
	class CPC_LAT_I_PIC_soldier_LAT : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Rifleman (RPG-18)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"CUP_RPG18_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_LAT);
	};
	class CPC_LAT_I_PIC_soldier_AT : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.4;
		secondaryAmmoCoef = 0.5;
		backpack = "CPC_LAT_Backpack_PIC_AT";
		weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_AT);
	};
	class CPC_LAT_I_PIC_soldier_AAT : CPC_LAT_I_PIC_soldier_base_2
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		role = "Assistant";
		cost = 130000;
		camouflage = 1.4;
		backpack = "CPC_LAT_Backpack_PIC_AT";
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_AAT);
	};
	class CPC_LAT_I_PIC_soldier_AA : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "AA Specialist";
		scope = 2;
		scopeCurator = 2;
		cost = 130000;
		threat[] = {0.8,0.1,1.0};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
		weapons[] = {"CUP_arifle_AK47","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_AA);
	};
	class CPC_LAT_I_PIC_soldier_MG : CPC_LAT_I_PIC_soldier_base_2
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		role = "MachineGunner";
		camouflage = 1.4;
		backpack = "CPC_LAT_Backpack_PIC_MG";
		weapons[] = {"CUP_lmg_UK59","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_UK59","Throw","Put"};
		magazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_MG);
	};
	class CPC_LAT_I_PIC_soldier_AMG : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Asst. Machinegunner";
		scope = 2;
		scopeCurator = 2;
		role = "Assistant";
		backpack = "CPC_LAT_Backpack_PIC_MG";
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_AMG);
	};
	class CPC_LAT_I_PIC_soldier_AR : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Autorifleman";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		role = "MachineGunner";
		camouflage = 1.4;
		backpack = "CPC_LAT_Backpack_PIC_AR";
		weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_AR);
	};
	class CPC_LAT_I_PIC_soldier_Medic : CPC_LAT_I_PIC_soldier_base_2
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		backpack = "CPC_LAT_Backpack_EJE_Medic";
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_Medic);
	};
	class CPC_LAT_I_PIC_soldier_TL : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		cost = 250000;
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Binocular","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_TL);
	};
	class CPC_LAT_I_PIC_soldier_Officer : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Officer";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManOfficer";
		cost = 250000;
		weapons[] = {"CUP_arifle_AKS","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_ChDKZ_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_ChDKZ_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_Officer);
	};
	class CPC_LAT_I_PIC_soldier_ENG : CPC_LAT_I_PIC_soldier_base_1
	{
		displayName = "Explosive specialist";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		backpack = "CPC_LAT_Backpack_EJE_ENG";
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_I_PIC_soldier_ENG);
	};
	
	
	// VEHICLES
	class CUP_B_M2StaticMG_USMC;
	class CPC_LAT_I_PIC_M2StaticMG : CUP_B_M2StaticMG_USMC
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_M2StaticMG);
	};
	class CUP_B_M2StaticMG_MiniTripod_USMC;
	class CPC_LAT_I_PIC_M2StaticMG_MiniTripod : CUP_B_M2StaticMG_MiniTripod_USMC
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_M2StaticMG_MiniTripod);
	};
	class CUP_B_M252_USMC;
	class CPC_LAT_I_PIC_M252 : CUP_B_M252_USMC
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_M252);
	};
	class CUP_O_DSHKM_ChDKZ;
	class CPC_LAT_I_PIC_DSHKM : CUP_O_DSHKM_ChDKZ
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_DSHKM);
	};
	class CUP_O_DSHkM_MiniTriPod_ChDKZ;
	class CPC_LAT_I_PIC_DSHkM_MiniTriPod : CUP_O_DSHkM_MiniTriPod_ChDKZ
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_DSHkM_MiniTriPod);
	};
	class CUP_O_SPG9_ChDKZ;
	class CPC_LAT_I_PIC_SPG9 : CUP_O_SPG9_ChDKZ
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_SPG9);
	};
	class CUP_O_2b14_82mm_ChDKZ;
	class CPC_LAT_I_PIC_2b14_82mm : CUP_O_2b14_82mm_ChDKZ
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_2b14_82mm);
	};
	class CUP_O_ZU23_ChDKZ;
	class CPC_LAT_I_PIC_ZU23 : CUP_O_ZU23_ChDKZ
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		CPC_PREVIEW(CPC_LAT_I_PIC_ZU23);
	};
	class CUP_C_Datsun;
	class CPC_LAT_I_PIC_Datsun : CUP_C_Datsun
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
        textureList[] =
		{
			"greenBeigeDesert", 1,
			"blueRed", 0.5,
			"blue", 0.5,
			"striped", 0.5,
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
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Datsun);
	};
	
	class CUP_O_Datsun_PK;
	class CPC_LAT_I_PIC_Datsun_PK : CUP_O_Datsun_PK
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
        textureList[] =
		{
			"greenBeigeDesert", 1,
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
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Datsun_PK);
	};
	
	//Hilux
	#define HILUX_PIC_DATA\
		dlc = "CPC_Factions_CUP";\
		author = "CPC Faction";\
		scope = 2;\
		side = 2;\
		crew = "CPC_LAT_I_PIC_soldier_2";\
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_Duala_O_NPFD_soldier_3","CPC_LAT_I_PIC_soldier_AR","CPC_Duala_O_NPFD_soldier_4"};\
		faction = "CPC_I_PIC";\
		class EventHandlers: EventHandlers\
		{\
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";\
		};\
        textureList[] =\
		{\
			"Camo", 1,\
			"Olive", 1,\
			"Grey", 0.2,\
			"White", 0.2\
		};\
	
	class CUP_Hilux_Base: Car_F {};
	class CUP_Hilux_unarmed_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_unarmed : CUP_Hilux_unarmed_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_2";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_Duala_O_NPFD_soldier_3","CPC_LAT_I_PIC_soldier_AR","CPC_Duala_O_NPFD_soldier_4"};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
        textureList[] =
		{
			"Camo", 1,
			"Olive", 1,
			"Grey", 0.4,
			"White", 0.4
		};
	};
	class CUP_Hilux_DSHKM_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_DSHKM : CUP_Hilux_DSHKM_Base
	{
		HILUX_PIC_DATA
	};
	class CUP_Hilux_SPG9_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_SPG9 : CUP_Hilux_SPG9_Base
	{
		HILUX_PIC_DATA
	};
	class CUP_Hilux_metis_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_metis : CUP_Hilux_metis_Base
	{
		HILUX_PIC_DATA
	};
	class CUP_Hilux_MLRS_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_MLRS : CUP_Hilux_MLRS_Base
	{
		HILUX_PIC_DATA
	};
	class CUP_Hilux_zu23_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_zu23 : CUP_Hilux_zu23_Base
	{
		HILUX_PIC_DATA
	};
	class CUP_Hilux_M2_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_M2 : CUP_Hilux_M2_Base
	{
		HILUX_PIC_DATA
	};
	class CUP_Hilux_UB32_Base: CUP_Hilux_Base {};
	class CPC_LAT_I_PIC_Hilux_UB32 : CUP_Hilux_UB32_Base
	{
		HILUX_PIC_DATA
	};
	
	class CUP_C_Ural_Civ_01;
	class CPC_LAT_I_PIC_Ural_1 : CUP_C_Ural_Civ_01
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Ural_1);
	};
	class CUP_C_Ural_Civ_02;
	class CPC_LAT_I_PIC_Ural_2 : CUP_C_Ural_Civ_02
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Ural_2);
	};
	class CPC_LAT_I_PIC_Ural_3 : CUP_C_Ural_Civ_02
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		displayName = "Ural (Green)";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"
		};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Ural_3);
	};
	class CUP_C_Ural_Open_Civ_01;
	class CPC_LAT_I_PIC_Ural_Open_1 : CUP_C_Ural_Open_Civ_01
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Ural_Open_1);
	};
	class CUP_C_Ural_Open_Civ_02;
	class CPC_LAT_I_PIC_Ural_Open_2 : CUP_C_Ural_Open_Civ_02
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Ural_Open_2);
	};
	class CPC_LAT_I_PIC_Ural_Open_3 : CUP_C_Ural_Open_Civ_02
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
		displayName = "Ural (Green) (Open)";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"
		};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Ural_Open_3);
	};
	class CUP_O_Ural_ZU23_CHDKZ;
	class CPC_LAT_I_PIC_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
        hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"
		};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Ural_ZU23);
	};
	class CUP_BTR40_Base;
	class CPC_LAT_I_PIC_BTR40 : CUP_BTR40_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
        hiddenSelectionsTextures[] ={"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_BTR40);
	};
	class CUP_BTR40_MG_Base;
	class CPC_LAT_I_PIC_BTR40_MG : CUP_BTR40_MG_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
        hiddenSelectionsTextures[] ={"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_BTR40_MG);
	};
	class CUP_V3S_Open_Base;
	class CPC_LAT_I_PIC_V3S_Open : CUP_V3S_Open_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		hiddenSelections[] ={"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co.paa"
		};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_V3S_Open);
	};
	class CUP_V3S_Covered_Base;
	class CPC_LAT_I_PIC_V3S_Covered : CUP_V3S_Covered_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		hiddenSelections[] ={"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] =
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_reammo_egue_co.paa"
		};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_V3S_Covered);
	};
	class CUP_B_Zodiac_USMC;
	class CPC_LAT_I_PIC_Zodiac : CUP_B_Zodiac_USMC
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_Zodiac);
	};
	class CUP_O_PBX_SLA;
	class CPC_LAT_I_PIC_PBX : CUP_O_PBX_SLA
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_I_PIC";
		crew = "CPC_LAT_I_PIC_soldier_1";
        typicalCargo[] = {"CPC_LAT_I_PIC_soldier_1","CPC_LAT_I_PIC_soldier_2","CPC_LAT_I_PIC_soldier_AR","CPC_LAT_I_PIC_soldier_4"};
		VEHICLECARGOPIC
		CPC_PREVIEW(CPC_LAT_I_PIC_PBX);
	};