
	class B_Soldier_base_F: SoldierWB {};
	class CPC_NAM_B_US_soldier_1_base : B_Soldier_base_F
	{
		side = 1;
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
		faction = "CPC_B_NAM_US";
		identityTypes[] = {"LanguageENG_F","Head_NATO",""};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2.p3d";
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Flag","insignia"};
		hiddenSelectionsTextures[] = {
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa",
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa",
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa",
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa"
		};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
		headgearList[] =
		{
			"CUP_H_USArmy_Helmet_M1_plain_Olive",1,
			"CUP_H_USArmy_Helmet_M1_plain_Vine",1,
			"CUP_H_USArmy_Helmet_M1_Olive",1,
			"CUP_H_USArmy_Helmet_M1_Vine",1,
			"H_Booniehat_mgrn",0.2,
			"CUP_H_FR_BandanaGreen",0.2
		};
	};
	class CPC_NAM_B_US_soldier_2_base : CPC_NAM_B_US_soldier_1_base
	{
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_dirty.p3d";
		uniformClass = "CPC_Nam_Uniform_B_BDU_OD_Dirty";
	};
	class CPC_NAM_B_US_soldier_3_base : CPC_NAM_B_US_soldier_1_base
	{
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll.p3d";
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll";
	};
	class CPC_NAM_B_US_soldier_4_base : CPC_NAM_B_US_soldier_1_base
	{
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll_dirty.p3d";
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll_Dirty";
	};
	class CPC_NAM_B_US_soldier_5_base : CPC_NAM_B_US_soldier_1_base
	{
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2.p3d";
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll2";
	};
	class CPC_NAM_B_US_soldier_6_base : CPC_NAM_B_US_soldier_1_base
	{
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_u_BDUv2_roll2_dirty.p3d";
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll2_Dirty";
	};
	
	class CPC_NAM_B_US_soldier_TL: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		cost = 250000;
		camouflage = 1.4;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_TL)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Dirty";
		backpack = "CPC_NAM_Backpack_US_TL";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Binocular","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_B_US_soldier_1: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		CPC_PREVIEW(CPC_NAM_B_US_soldier_1)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Dirty";
		backpack = "CUP_B_AlicePack_OD";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_B_US_soldier_Medic: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_Medic)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll_Dirty";
		backpack = "CPC_NAM_Backpack_US_Medic";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_B_US_soldier_MG: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_MG)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll2_Dirty";
		backpack = "CPC_NAM_Backpack_US_MG";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_lmg_M60","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M60","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell","SmokeShell","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell","SmokeShell","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
	};
	class CPC_NAM_B_US_soldier_GL: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier (M79)";
		role = "Grenadier";
		cost = 200000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_GL)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Dirty";
		backpack = "CPC_NAM_Backpack_US_GL";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_glaunch_M79","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_glaunch_M79","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_1Rnd_HE_M203","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell","SmokeShell","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
		respawnMagazines[] = {"CUP_1Rnd_HE_M203","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell","SmokeShell","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
	};
	class CPC_NAM_B_US_soldier_RTO: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		CPC_PREVIEW(CPC_NAM_B_US_soldier_RTO)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll2_Dirty";
		backpack = "B_RadioBag_01_black_F";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_B_US_soldier_ENG: CPC_NAM_B_US_soldier_1_base
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
		CPC_PREVIEW(CPC_NAM_B_US_soldier_ENG)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Dirty";
		backpack = "CPC_NAM_Backpack_US_ENG";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_B_US_soldier_A: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer (M14)";
		role = "Rifleman";
		camouflage = 1.5;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_A)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll2_Dirty";
		backpack = "CPC_NAM_Backpack_US_A";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_srifle_M14","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_M14","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
	};
	class CPC_NAM_B_US_soldier_LAT: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (M72A6)";
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		CPC_PREVIEW(CPC_NAM_B_US_soldier_LAT)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Roll_Dirty";
		backpack = "CUP_B_AlicePack_OD";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","CUP_launch_M72A6","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","CUP_launch_M72A6","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_M72A6_M","CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_M72A6_M","CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_B_US_soldier_M: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sharpshooter (M40)";
		role = "Marksman";
		cost = 250000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_M)
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD_Dirty";
		backpack = "CUP_B_AlicePack_OD";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USArmy_Helmet_M1_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_srifle_Remington700_scoped","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_Remington700_scoped","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_6Rnd_762x51_R700","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700"};
		respawnMagazines[] = {"CUP_6Rnd_762x51_R700","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700","CUP_6Rnd_762x51_R700"};
	};
	class CPC_NAM_B_US_soldier_crew: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		role = "Crewman";
		cost = 93000;
		camouflage = 1.6;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_crew)
		headgearList[] = {"CUP_H_CZ_Helmet05",1};
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_CZ_Helmet05","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_CZ_Helmet05","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
	};
	class CPC_NAM_B_US_soldier_pilot: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Pilot";
		role = "Crewman";
		camouflage = 2.0;
		cost = 93000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_pilot)
		headgearList[] = {"CUP_H_USMC_Helmet_Pilot",1};
		uniformClass = "CPC_NAM_Uniform_B_BDU_OD";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_USMC_Helmet_Pilot","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_USMC_Helmet_Pilot","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellBlue","SmokeShellBlue"};
		respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellBlue","SmokeShellBlue"};
	};
	
	
	/* SF */
	
	class CPC_NAM_B_US_soldier_SF_1: CPC_NAM_B_US_soldier_1_base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MenRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "Rifleman";
		camouflage = 0.6;
		detectSkill = 18;
		displayName = "Rifleman";
		CPC_PREVIEW(CPC_NAM_B_US_soldier_SF_1)
		uniformClass = "CUP_U_B_BDUv2_roll2_dirty_Tigerstripe";
		backpack = "CUP_B_AlicePack_OD";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_FR_BandanaGreen","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_FR_BandanaGreen","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_Colt727","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Colt727","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		headgearList[] =
		{
			"CUP_H_FR_BandanaGreen",1,
			"H_Bandanna_khk",1,
			"H_Booniehat_mgrn",1,
			"H_Booniehat_oli",1
		};
	};
	class CPC_NAM_B_US_soldier_SF_GL: CPC_NAM_B_US_soldier_SF_1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier (M72A6)";
		role = "Grenadier";
		cost = 200000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_SF_GL)
		uniformClass = "CUP_U_B_BDUv2_roll_dirty_Tigerstripe";
		backpack = "CPC_NAM_Backpack_US_SF_GL";
		linkedItems[] = {"CUP_V_B_ALICE","H_Bandanna_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","H_Bandanna_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_M16A1GL","CUP_launch_M72A6_Loaded","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A1GL","CUP_launch_M72A6_Loaded","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_M72A6_M","CUP_20Rnd_556x45_Stanag","CUP_M72A6_M","CUP_7Rnd_45ACP_1911","CUP_1Rnd_HE_M203","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
		respawnMagazines[] = {"CUP_M72A6_M","CUP_20Rnd_556x45_Stanag","CUP_M72A6_M","CUP_7Rnd_45ACP_1911","CUP_1Rnd_HE_M203","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
	};
	class CPC_NAM_B_US_soldier_SF_MG: CPC_NAM_B_US_soldier_SF_1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_SF_MG)
		uniformClass = "CUP_U_B_BDUv2_roll2_dirty_Tigerstripe";
		backpack = "CPC_NAM_Backpack_US_SF_MG";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_FR_BandanaGreen","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_FR_BandanaGreen","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_lmg_M60","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M60","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
	};
	class CPC_NAM_B_US_soldier_SF_ENG: CPC_NAM_B_US_soldier_SF_1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_SF_ENG)
		uniformClass = "CUP_U_B_BDUv2_dirty_Tigerstripe";
		backpack = "CPC_NAM_Backpack_US_SF_ENG";
		linkedItems[] = {"CUP_V_B_ALICE","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CPC_NAM_smg_Mac10_snds","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CPC_NAM_smg_Mac10_snds","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_30Rnd_45ACP_MAC10_M","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M"};
		respawnMagazines[] = {"CUP_30Rnd_45ACP_MAC10_M","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M"};
	};
	class CPC_NAM_B_US_soldier_SF_TL: CPC_NAM_B_US_soldier_SF_1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		cost = 250000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_SF_TL)
		uniformClass = "CUP_U_B_BDUv2_roll_dirty_Tigerstripe";
		backpack = "CPC_NAM_Backpack_US_SF_TL";
		linkedItems[] = {"CUP_V_B_ALICE","CUP_H_US_patrol_cap_tigerstripe","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","CUP_H_US_patrol_cap_tigerstripe","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CUP_arifle_Colt727","CUP_hgun_Colt1911","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Colt727","CUP_hgun_Colt1911","Binocular","Throw","Put"};
		magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
		headgearList[] =
		{
			"CUP_H_US_patrol_cap_tigerstripe",1
		};
	};
	class CPC_NAM_B_US_soldier_SF_M: CPC_NAM_B_US_soldier_SF_1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		role = "Marksman";
		cost = 250000;
		CPC_PREVIEW(CPC_NAM_B_US_soldier_SF_M)
		uniformClass = "CUP_U_B_BDUv2_dirty_Tigerstripe";
		backpack = "CPC_NAM_Backpack_US_SF_M";
		linkedItems[] = {"CUP_V_B_ALICE","H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"CPC_NAM_srifle_M14_optic","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CPC_NAM_srifle_M14_optic","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
	};
	
	
	class CUP_B_M113_USA;
	class CPC_NAM_B_US_M113 : CUP_B_M113_USA
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_crew";
        typicalCargo[] = {"CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_TL"};
		HiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_olive_drab_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"};
		VEHICLECARGOUS
		CPC_PREVIEW(CPC_NAM_B_US_M113)
	};
	class CUP_B_M163_USA;
	class CPC_NAM_B_US_M163 : CUP_B_M163_USA
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_crew";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_01_green_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_02_green_co.paa"};
		VEHICLECARGOUS
		CPC_PREVIEW(CPC_NAM_B_US_M163)
	};
	
	class CUP_B_C47_USA;
	class CPC_NAM_B_US_C47 : CUP_B_C47_USA
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
		VEHICLECARGOUS
	};
	class CUP_B_AC47_Spooky_USA;
	class CPC_NAM_B_US_AC47_Spooky : CUP_B_AC47_Spooky_USA
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
		VEHICLECARGOUS
	};
	class CUP_B_C130J_USMC;
	class CPC_NAM_B_US_C130J : CUP_B_C130J_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_usmc_co.paa","CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_usmc_co.paa"};
		VEHICLECARGOUS
		CPC_PREVIEW(CPC_NAM_B_US_C130J)
	};
	class CUP_B_C130J_Cargo_USMC;
	class CPC_NAM_B_US_C130J_Cargo : CUP_B_C130J_Cargo_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_usmc_co.paa","CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_usmc_co.paa"};
		VEHICLECARGOUS
		CPC_PREVIEW(CPC_NAM_B_US_C130J_Cargo)
	};
	
	class CUP_B_M119_USMC;
	class CPC_NAM_B_US_M119 : CUP_B_M119_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_1";
	};
	class CUP_B_M2StaticMG_USMC;
	class CPC_NAM_B_US_M2StaticMG : CUP_B_M2StaticMG_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_1";
	};
	class CUP_B_M2StaticMG_MiniTripod_USMC;
	class CPC_NAM_B_US_M2StaticMG_MiniTripod : CUP_B_M2StaticMG_MiniTripod_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_1";
	};
	class CUP_B_M252_USMC;
	class CPC_NAM_B_US_M252 : CUP_B_M252_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_1";
	};
	
	class CUP_B_Zodiac_USMC;
	class CPC_NAM_B_US_Zodiac : CUP_B_Zodiac_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_1";
        typicalCargo[] = {"CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_TL"};
		VEHICLECARGOUS
	};
	
	class CUP_I_UH1H_TK_GUE;
	class CPC_NAM_B_US_UH1H : CUP_I_UH1H_TK_GUE
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
        typicalCargo[] = {"CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_TL"};
		maxFordingDepth = 0.55;
		VEHICLECARGOUS
	};
	class CUP_I_UH1H_armed_TK_GUE;
	class CPC_NAM_B_US_UH1H_armed : CUP_I_UH1H_armed_TK_GUE
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
        typicalCargo[] = {"CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_TL"};
		maxFordingDepth = 0.55;
		VEHICLECARGOUS
	};
	class CUP_I_UH1H_slick_TK_GUE;
	class CPC_NAM_B_US_UH1H_slick : CUP_I_UH1H_slick_TK_GUE
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
        typicalCargo[] = {"CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_TL"};
		maxFordingDepth = 0.55;
		VEHICLECARGOUS
	};
	class CUP_B_CH47F_USA;
	class CPC_NAM_B_US_CH47F : CUP_B_CH47F_USA
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_NAM_US";
		crew = "CPC_NAM_B_US_soldier_pilot";
        typicalCargo[] = {"CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_1","CPC_NAM_B_US_soldier_TL"};
		VEHICLECARGOUS
	};
	

