	class I_Soldier_base_F: SoldierGB {};
	class CPC_JUN_I_AGUE_soldier_base_1 : I_Soldier_base_F
	{
		side = 2;
		scope = 1;
		scopeCurator = 0;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		identityTypes[] = {"LanguageCHI_F","Head_Asian",""};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "rhsgref_uniform_olive";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
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
		#include "\CPC\Factions\hitpoints_uniform_none.h"
		linkedItems[] = {"rhsgref_chicom","CPC_JUN_fieldcap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","CPC_JUN_fieldcap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearList[] =
		{
			"CPC_JUN_fieldcap",0.9,
			"CPC_JUN_fieldcap",0.9,
			"CPC_JUN_fieldcap",0.9,
			"CPC_JUN_fieldcap",0.9,
			"H_Bandanna_khk",0.5,
			"H_Bandanna_gry",0.5,
			"H_Bandanna_cbr",0.5,
			"H_Bandanna_sgg",0.5,
			"H_Bandanna_camo",0.5,
			"rhssaf_bandana_md2camo",0.5,
			"rhssaf_bandana_smb",0.5,
			"H_Booniehat_khk",0.5,
			"H_Booniehat_oli",0.5,
			"H_Hat_Safari_olive_F",0.1,
			"H_HeadBandage_stained_F",0.1,
			"H_HeadBandage_bloody_F",0.1
		};
	};
	class CPC_JUN_I_AGUE_soldier_1 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (AKM)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_1);
	};
	class CPC_JUN_I_AGUE_soldier_2 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (AKMS)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_2);
	};
	class CPC_JUN_I_AGUE_soldier_3 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (KAR98K)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_kar98k","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_kar98k","Throw","Put"};
		magazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_3);
	};
	class CPC_JUN_I_AGUE_soldier_4 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (Izh18)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_Izh18","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_Izh18","Throw","Put"};
		magazines[] = {"rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_4);
	};
	class CPC_JUN_I_AGUE_soldier_5 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (M1 Garand)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
		magazines[] = {"rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_5);
	};
	class CPC_JUN_I_AGUE_soldier_6 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (M3A1)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_m3a1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m3a1","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_6);
	};
	class CPC_JUN_I_AGUE_soldier_GL : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		role = "Grenadier";
		cost = 200000;
		backpack = "CPC_JUN_Backpack_AGUE_GL";
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_GL);
	};
	class CPC_JUN_I_AGUE_soldier_GL_2 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Grenadier (M79)";
		scope = 2;
		scopeCurator = 2;
		role = "Grenadier";
		cost = 200000;
		weapons[] = {"rhs_weap_m79","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m79","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_GL_2);
	};
	class CPC_JUN_I_AGUE_soldier_M : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		role = "Marksman";
		cost = 250000;
		weapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_M);
	};
	class CPC_JUN_I_AGUE_soldier_LAT : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (RPG-26)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		linkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akm","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_rpg26","Throw","Put"};
		magazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_LAT);
	};
	class CPC_JUN_I_AGUE_soldier_AT : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		backpack = "CPC_JUN_Backpack_AGUE_AT";
		weapons[] = {"rhs_weap_akms","rhs_weap_rpg7_pgo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","rhs_weap_rpg7_pgo","Throw","Put"};
		magazines[] = {"rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_AT);
	};
	class CPC_JUN_I_AGUE_soldier_AAT : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AGUE_AT";
		linkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_AAT);
	};
	class CPC_JUN_I_AGUE_soldier_MG : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		role = "MachineGunner";
		backpack = "CPC_JUN_Backpack_AGUE_MG";
		linkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_MG);
	};
	class CPC_JUN_I_AGUE_soldier_AMG : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Asst. Machinegunner";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AGUE_MG";
		weapons[] = {"rhs_weap_ak74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_AMG);
	};
	class CPC_JUN_I_AGUE_soldier_Medic : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		backpack = "CPC_JUN_Backpack_AGUE_Medic";
		linkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_Medic);
	};
	class CPC_JUN_I_AGUE_soldier_TL : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		role = "Grenadier";
		cost = 250000;
		camouflage = 1.4;
		linkedItems[] = {"rhsgref_chicom","CPC_JUN_fieldcap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_chicom","CPC_JUN_fieldcap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akms","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_TL);
	};
	class CPC_JUN_I_AGUE_soldier_ENG : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Explosive specialist";
		scope = 2;
		scopeCurator = 2;
		cost = 130000;
		threat[] = {0.8,0.1,1.0};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
		backpack = "CPC_JUN_Backpack_AGUE_ENG";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_soldier_ENG);
	};
	class B_Boat_Transport_01_F;
	class CPC_JUN_I_AGUE_ZODIAC : B_Boat_Transport_01_F
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2"};
		VEHICLECARGOREB
		CPC_PREVIEW(CPC_JUN_I_AGUE_ZODIAC);
	};
	class rhsgref_ins_uaz;
	class CPC_JUN_I_AGUE_uaz : rhsgref_ins_uaz
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2","CPC_JUN_I_AGUE_soldier_3","CPC_JUN_I_AGUE_soldier_LAT","CPC_JUN_I_AGUE_soldier_TL"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
		VEHICLECARGOREB
		CPC_PREVIEW(CPC_JUN_I_AGUE_uaz);
	};
	class rhsgref_ins_uaz_open;
	class CPC_JUN_I_AGUE_uaz_open : rhsgref_ins_uaz_open
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_2";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2","CPC_JUN_I_AGUE_soldier_3","CPC_JUN_I_AGUE_soldier_LAT","CPC_JUN_I_AGUE_soldier_TL"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
		VEHICLECARGOREB
		CPC_PREVIEW(CPC_JUN_I_AGUE_uaz_open);
	};
	class CPC_JUN_I_AGUE_uaz_dshkm : RHS_UAZ_DShKM_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2","CPC_JUN_I_AGUE_soldier_3","CPC_JUN_I_AGUE_soldier_LAT","CPC_JUN_I_AGUE_soldier_TL"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
		class AnimationSources: AnimationSources
		{
			class light_hide
			{
				source = "user";
				mass = 1;
				initPhase = 1;
				animPeriod = 1e-011;
				displayName = "hide light covers";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {gunnerType="CPC_JUN_I_AGUE_soldier_3";};
			class CargoTurret_01: CargoTurret_01 {};
		};
		VEHICLECARGOREB
		CPC_PREVIEW(CPC_JUN_I_AGUE_uaz_dshkm);
	};
	class RHS_UAZ_SPG9_Base: RHS_UAZ_DShKM_Base{};
	class CPC_JUN_I_AGUE_uaz_spg9 : RHS_UAZ_SPG9_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_3";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2","CPC_JUN_I_AGUE_soldier_3","CPC_JUN_I_AGUE_soldier_LAT","CPC_JUN_I_AGUE_soldier_TL"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Default']"};
		class AnimationSources: AnimationSources
		{
			class light_hide
			{
				source = "user";
				mass = 1;
				initPhase = 1;
				animPeriod = 1e-011;
				displayName = "hide light covers";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {gunnerType="CPC_JUN_I_AGUE_soldier_2";};
			class CargoTurret_01: CargoTurret_01 {};
		};
		VEHICLECARGOREB
		CPC_PREVIEW(CPC_JUN_I_AGUE_uaz_spg9);
	};
	class rhsgref_ins_ural;
	class CPC_JUN_I_AGUE_ural : rhsgref_ins_ural
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		displayName = "Ural-4320";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2","CPC_JUN_I_AGUE_soldier_3","CPC_JUN_I_AGUE_soldier_LAT","CPC_JUN_I_AGUE_soldier_TL"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		VEHICLECARGOREB
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural);
	};
	class CPC_JUN_I_AGUE_ural_blue : CPC_JUN_I_AGUE_ural
	{
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "Ural-4320 (Blue)";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural_blue);
	};
	class CPC_JUN_I_AGUE_ural_worker : CPC_JUN_I_AGUE_ural
	{
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "Ural-4320 (Worker)";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural_worker);
	};
	class CPC_JUN_I_AGUE_ural_yellow : CPC_JUN_I_AGUE_ural
	{
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "Ural-4320 (Yellow)";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural_yellow);
	};
	class rhsgref_ins_ural_open;
	class CPC_JUN_I_AGUE_ural_open : rhsgref_ins_ural_open
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_2";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2","CPC_JUN_I_AGUE_soldier_3","CPC_JUN_I_AGUE_soldier_LAT","CPC_JUN_I_AGUE_soldier_TL"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		VEHICLECARGOREB
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural_open);
	};
	class CPC_JUN_I_AGUE_ural_open_blue : CPC_JUN_I_AGUE_ural_open
	{
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "Ural-4320 (Blue/Open)";
		model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural_open_blue);
	};
	class CPC_JUN_I_AGUE_ural_open_worker : CPC_JUN_I_AGUE_ural_open
	{
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "Ural-4320 (Worker/Open)";
		model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural_open_worker);
	};
	class CPC_JUN_I_AGUE_ural_open_yellow : CPC_JUN_I_AGUE_ural_open
	{
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "Ural-4320 (Yellow/Open)";
		model = "\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_ural_open_yellow);
	};
	
	// Statics
	class rhs_DSHKM_base;
	class CPC_JUN_I_AGUE_DSHKM : rhs_DSHKM_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_DSHKM);
	};
	class rhs_DSHkM_Mini_TriPod_base;
	class CPC_JUN_I_AGUE_DSHKM_MiniTriPod : rhs_DSHkM_Mini_TriPod_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_2";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_DSHKM_MiniTriPod);
	};
	class rhs_m2staticmg_base;
	class CPC_JUN_I_AGUE_M2 : rhs_m2staticmg_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_3";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_M2);
	};
	class RHS_M2StaticMG_MiniTripod_base;
	class CPC_JUN_I_AGUE_M2_MiniTriPod : RHS_M2StaticMG_MiniTripod_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_4";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_M2_MiniTriPod);
	};
	class rhs_SPG9_base;
	class CPC_JUN_I_AGUE_SPG9 : rhs_SPG9_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_4";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_SPG9);
	};
	class rhs_SPG9M_base;
	class CPC_JUN_I_AGUE_SPG9M : rhs_SPG9M_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_SPG9M);
	};
	class rhs_D30_base;
	class CPC_JUN_I_AGUE_D30 : rhs_D30_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_4";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_D30);
	};
	class rhs_D30_AT_base;
	class CPC_JUN_I_AGUE_D30_AT : rhs_D30_AT_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_2";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_D30_AT);
	};
	class rhs_2b14_82mm_Base;
	class CPC_JUN_I_AGUE_2b14_82mm : rhs_2b14_82mm_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		CPC_PREVIEW(CPC_JUN_I_AGUE_2b14_82mm);
	};