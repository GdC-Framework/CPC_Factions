	class B_Soldier_base_F: SoldierWB {};
	class CPC_JUN_B_AMIL_soldier_base : B_Soldier_base_F
	{
		side = 1;
		scope = 1;
		scopeCurator = 0;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		identityTypes[] = {"LanguageCHI_F","Head_Asian",""};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "CPC_JUN_Uniform_AMIL";
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
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_erdl_co.paa"};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_JUN_B_AMIL_soldier_1 : CPC_JUN_B_AMIL_soldier_base
	{
		displayName = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhsgref_alice_webbing","rhsgref_helmet_pasgt_erdl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhsgref_helmet_pasgt_erdl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_m21a","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_1);
	};
	class CPC_JUN_B_AMIL_soldier_2 : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Rifleman (M4)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_2);
	};
	class CPC_JUN_B_AMIL_soldier_light : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Rifleman (light)";
		scope = 2;
		scopeCurator = 2;
		camouflage = 1.2;
		linkedItems[] = {"rhsgref_alice_webbing","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_light);
	};
	class CPC_JUN_B_AMIL_soldier_M : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		role = "Marksman";
		cost = 250000;
		linkedItems[] = {"rhsgref_alice_webbing","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_JUN_srifle_DMR_06_olive_KHS","Throw","Put"};
		respawnWeapons[] = {"CPC_JUN_srifle_DMR_06_olive_KHS","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_M);
	};
	class CPC_JUN_B_AMIL_soldier_LAT : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Rifleman (M72A7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		weapons[] = {"rhs_weap_m21a","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","rhs_weap_m72a7","Throw","Put"};
		magazines[] = {"rhs_m72a7_mag","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_m72a7_mag","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_LAT);
	};
	class CPC_JUN_B_AMIL_soldier_AT : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "AT Specialist (SMAW)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		backpack = "CPC_JUN_Backpack_AMIL_AT";
		weapons[] = {"rhs_weap_m21a","rhs_weap_smaw_gr_optic","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","rhs_weap_smaw_gr_optic","Throw","Put"};
		magazines[] = {"rhs_mag_smaw_SR","rhs_mag_smaw_HEAA","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_mag_smaw_SR","rhs_mag_smaw_HEAA","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_AT);
	};
	class CPC_JUN_B_AMIL_soldier_AAT : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AMIL_AT";
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_AAT);
	};
	class CPC_JUN_B_AMIL_soldier_MG : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		role = "MachineGunner";
		weapons[] = {"rhs_weap_m240G","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240G","Throw","Put"};
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","SmokeShell","rhs_mag_m67"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer","SmokeShell","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_MG);
	};
	class CPC_JUN_B_AMIL_soldier_AMG : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Asst. Machinegunner";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AMIL_MG";
		weapons[] = {"rhs_weap_m21a","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","Binocular","Throw","Put"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_AMG);
	};
	class CPC_JUN_B_AMIL_soldier_AA : CPC_JUN_B_AMIL_soldier_1
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
		weapons[] = {"rhs_weap_m21a","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_fim92_mag"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_fim92_mag"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_AA);
	};
	class CPC_JUN_B_AMIL_soldier_Medic : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		backpack = "CPC_JUN_Backpack_AMIL_Medic";
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_Medic);
	};
	class CPC_JUN_B_AMIL_soldier_crew : CPC_JUN_B_AMIL_soldier_base
	{
		displayName = "Crew";
		scope = 2;
		scopeCurator = 2;
		role = "Crewman";
		cost = 93000;
		camouflage = 1.6;
		linkedItems[] = {"rhssaf_vest_md99_md2camo","rhsusf_cvc_green_alt_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo","rhsusf_cvc_green_alt_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_m3a1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m3a1","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","SmokeShell","SmokeShell","rhs_mag_m67"};
		respawnMagazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","SmokeShell","SmokeShell","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_crew);
	};
	class CPC_JUN_B_AMIL_soldier_TL : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		role = "Grenadier";
		cost = 250000;
		camouflage = 1.4;
		weapons[] = {"CPC_JUN_rhs_weap_m21a_pr_CCO","Binocular","Throw","Put"};
		respawnWeapons[] = {"CPC_JUN_rhs_weap_m21a_pr_CCO","Binocular","Throw","Put"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_TL);
	};
	class CPC_JUN_B_AMIL_soldier_Officer : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Officer";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManOfficer";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.6;
		linkedItems[] = {"rhssaf_vest_md99_md2camo_radio","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo_radio","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_lrf_Vector21","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_lrf_Vector21","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShellBlue","SmokeShellBlue","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShellBlue","SmokeShellBlue","rhs_mag_m67","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_Officer);
	};
	class CPC_JUN_B_AMIL_soldier_HeliPilot : CPC_JUN_B_AMIL_soldier_1
	{
		displayName = "Helicopter Pilot";
		scope = 2;
		scopeCurator = 2;
		ACE_GForceCoef = 0.55;
		role = "Crewman";
		camouflage = 2.0;
		cost = 93000;
		linkedItems[] = {"rhssaf_vest_md99_md2camo_radio","rhsusf_hgu56p_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo_radio","rhsusf_hgu56p_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		weapons[] = {"rhs_weap_m3a1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m3a1","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","SmokeShell","SmokeShell","rhs_mag_m67"};
		respawnMagazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG","SmokeShell","SmokeShell","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_HeliPilot);
	};
	class CPC_JUN_B_AMIL_soldier_Pilot : CPC_JUN_B_AMIL_soldier_HeliPilot
	{
		displayName = "Pilot";
		scope = 2;
		scopeCurator = 2;
		role = "Crewman";
		cost = 93000;
		backpack = "rhs_d6_Parachute_backpack";
		linkedItems[] = {"V_TacVest_blk","rhs_zsh7a_alt","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","rhs_zsh7a_alt","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","SmokeShellBlue"};
		respawnMagazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","SmokeShellBlue"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_Pilot);
	};
	class CPC_JUN_B_AMIL_soldier_ENG : CPC_JUN_B_AMIL_soldier_light
	{
		displayName = "Sapper";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		camouflage = 1.6;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		backpack = "CPC_JUN_Backpack_AMIL_ENG";
		weapons[] = {"rhs_weap_m21a","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_ENG);
	};
	// SF
	class CPC_JUN_B_AMIL_soldier_SF_1 : CPC_JUN_B_AMIL_soldier_base
	{
		displayName = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "MenRecon";
		camouflage = 0.6;
		detectSkill = 18;
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		linkedItems[] = {"rhsgref_otv_khaki","rhsgref_helmet_pasgt_erdl_rhino","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"rhsgref_otv_khaki","rhsgref_helmet_pasgt_erdl_rhino","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		weapons[] = {"CPC_JUN_rhs_weap_m4_carryhandle_CCO_laser","Throw","Put"};
		respawnWeapons[] = {"CPC_JUN_rhs_weap_m4_carryhandle_CCO_laser","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_SF_1);
	};
	class CPC_JUN_B_AMIL_soldier_SF_LAT : CPC_JUN_B_AMIL_soldier_SF_1
	{
		displayName = "Rifleman (M72A7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		role = "MissileSpecialist";
		threat[] = {0.8,0.8,0.3};
		weapons[] = {"CPC_JUN_rhs_weap_m4_carryhandle_CCO_laser","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"CPC_JUN_rhs_weap_m4_carryhandle_CCO_laser","rhs_weap_m72a7","Throw","Put"};
		magazines[] = {"rhs_m72a7_mag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		respawnMagazines[] = {"rhs_m72a7_mag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_SF_LAT);
	};
	class CPC_JUN_B_AMIL_soldier_SF_GL : CPC_JUN_B_AMIL_soldier_SF_1
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		role = "Grenadier";
		weapons[] = {"CPC_JUN_rhs_weap_m4_m203S_CCO_laser","Throw","Put"};
		respawnWeapons[] = {"CPC_JUN_rhs_weap_m4_m203S_CCO_laser","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_SF_GL);
	};
	class CPC_JUN_B_AMIL_soldier_SF_Medic : CPC_JUN_B_AMIL_soldier_SF_1
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		picture = "pictureHeal";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		attendant = 1;
		backpack = "CPC_JUN_Backpack_AMIL_Medic";
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_SF_Medic);
	};
	class CPC_JUN_B_AMIL_soldier_SF_AR : CPC_JUN_B_AMIL_soldier_SF_1
	{
		displayName = "Autorifleman";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		role = "MachineGunner";
		backpack = "CPC_JUN_Backpack_AMIL_AR";
		weapons[] = {"rhs_weap_m249","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249","Throw","Put"};
		magazines[] = {"rhsusf_200Rnd_556x45_box","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_SF_AR);
	};
	class CPC_JUN_B_AMIL_soldier_SF_AAR : CPC_JUN_B_AMIL_soldier_SF_1
	{
		displayName = "Asst. Autorifleman";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AMIL_AR";
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_SF_AAR);
	};
	class CPC_JUN_B_AMIL_soldier_SF_TL : CPC_JUN_B_AMIL_soldier_SF_1
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		backpack = "B_Kitbag_rgr";
		weapons[] = {"CPC_JUN_rhs_weap_m4_carryhandle_ACOG_laser","Binocular","Throw","Put"};
		respawnWeapons[] = {"CPC_JUN_rhs_weap_m4_carryhandle_ACOG_laser","Binocular","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShellBlue","SmokeShellBlue","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","SmokeShellBlue","SmokeShellBlue","rhs_mag_m67","rhs_mag_m67","Chemlight_blue"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_soldier_SF_TL);
	};
	
	
	// Vehicles
	

	// Tracked
	class rhsgref_hidf_m113a3_unarmed;
	class CPC_JUN_B_AMIL_M113_unarmed : rhsgref_hidf_m113a3_unarmed
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_crew";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		editorSubcategory = "rhs_EdSubcat_apc";
		HiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_l_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_l_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"};
		textureList[] = {};
		VEHICLECARGOBIGAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M113_unarmed);
	};
	class rhsgref_hidf_m113a3_m2;
	class CPC_JUN_B_AMIL_M113_m2 : rhsgref_hidf_m113a3_m2
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_crew";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		editorSubcategory = "rhs_EdSubcat_apc";
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_h_90s_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_h_90s_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"};
		textureList[] = {};
		VEHICLECARGOBIGAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M113_m2);
	};
	
	// Wheeled
	class rhsgref_hidf_m1025;
	class CPC_JUN_B_AMIL_M1025 : rhsgref_hidf_m1025
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M1025);
	};
	class rhsgref_hidf_m1025_m2;
	class CPC_JUN_B_AMIL_M1025_m2 : rhsgref_hidf_m1025_m2
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M1025_m2);
	};
	class rhsgref_hidf_M998_2dr_fulltop;
	class CPC_JUN_B_AMIL_M998_2dr_fulltop : rhsgref_hidf_M998_2dr_fulltop
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M998_2dr_fulltop);
	};
	class rhsgref_hidf_M998_2dr_halftop;
	class CPC_JUN_B_AMIL_M998_2dr_halftop : rhsgref_hidf_M998_2dr_halftop
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M998_2dr_halftop);
	};
	class rhsgref_hidf_M998_2dr;
	class CPC_JUN_B_AMIL_M998_2dr : rhsgref_hidf_M998_2dr
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M998_2dr);
	};
	class rhsusf_M1117_base: Wheeled_APC_F
	{
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
		};
	};
	class rhsusf_M1117_D: rhsusf_M1117_base	{};
	class rhsusf_M1117_W: rhsusf_M1117_D {};
	class rhsusf_M1117_O: rhsusf_M1117_W {};
	class CPC_JUN_B_AMIL_M1117 : rhsusf_M1117_O
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_crew";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_1","CPC_JUN_B_AMIL_soldier_LAT","CPC_JUN_B_AMIL_soldier_TL"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType = "CPC_JUN_B_AMIL_soldier_crew";
			};
		};
		class AnimationSources: AnimationSources
		{
			class DUKE_Hide
			{
				source = "user";
				mass = -20;
				displayName = "hide DUKE antennas";
				animPeriod = 1e-005;
				initPhase = 1;
			};
		};
		VEHICLECARGOBIGAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_M1117);
	};
	
	// boats
	class CPC_JUN_B_AMIL_ZODIAC : B_Boat_Transport_01_F
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_ZODIAC);
	};
	
	// statics
	class CPC_JUN_B_AMIL_M2 : rhs_m2staticmg_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_2";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_M2);
	};
	class CPC_JUN_B_AMIL_M2_MiniTriPod : RHS_M2StaticMG_MiniTripod_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_2";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_M2_MiniTriPod);
	};
	class RHS_ZU23_base;
	class CPC_JUN_B_AMIL_ZU23 : RHS_ZU23_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_2";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_ZU23);
	};
	class RHS_TOW_TriPod_base;
	class CPC_JUN_B_AMIL_TOW : RHS_TOW_TriPod_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_TOW);
	};
	class RHS_M119_base;
	class CPC_JUN_B_AMIL_M119 : RHS_M119_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_2";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_M119);
	};
	class RHS_M252_Base;
	class CPC_JUN_B_AMIL_M252 : RHS_M252_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_1";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		CPC_PREVIEW(CPC_JUN_B_AMIL_M252);
	};
	
	// Helicopters
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class CargoTurret;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H {};
	class RHS_UH60_Base: Heli_Transport_01_base_F {};
	class RHS_UH60M_base: RHS_UH60_Base {};
	class RHS_UH60M_US_base: RHS_UH60M_base {};
	class RHS_UH60M: RHS_UH60M_US_base
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret {};
			class MainTurret: MainTurret {};
			class RightDoorGun: MainTurret {};
			class CargoTurret_01: CargoTurret {};
			class CargoTurret_02: CargoTurret_01 {};
			class CargoTurret_03: CargoTurret_01 {};
			class CargoTurret_04: CargoTurret_03 {};
		};
	};
	class CPC_JUN_B_AMIL_UH60M: RHS_UH60M
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_HeliPilot";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret {};
			class MainTurret: MainTurret
			{
				gunnerType = "CPC_JUN_B_AMIL_soldier_HeliPilot";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType = "CPC_JUN_B_AMIL_soldier_HeliPilot";				
			};
			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
			class CargoTurret_04: CargoTurret_04 {};
		};
		VEHICLECARGOBIGAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_UH60M);
	};
	class RHS_UH60M2;
	class CPC_JUN_B_AMIL_UH60M2: RHS_UH60M2
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_HeliPilot";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		VEHICLECARGOBIGAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_UH60M2);
	};
	class RHS_UH60M_MEV2;
	class CPC_JUN_B_AMIL_UH60M_MEV2: RHS_UH60M_MEV2
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_HeliPilot";
        typicalCargo[] = {"CPC_JUN_B_AMIL_soldier_1"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_UH60M_MEV2);
	};
	class RHS_AH1Z;
	class CPC_JUN_B_AMIL_AH1Z: RHS_AH1Z
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_HeliPilot";
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_AH1Z);
	};
	class rhs_uh1h_hidf;
	class CPC_JUN_B_AMIL_UH1H: rhs_uh1h_hidf
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_HeliPilot";
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_UH1H);
	};
	class rhs_uh1h_hidf_gunship;
	class CPC_JUN_B_AMIL_UH1H_gunship: rhs_uh1h_hidf_gunship
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_HeliPilot";
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_UH1H_gunship);
	};
	class rhs_uh1h_hidf_unarmed;
	class CPC_JUN_B_AMIL_UH1H_unarmed: rhs_uh1h_hidf_unarmed
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_AMIL";
		crew = "CPC_JUN_B_AMIL_soldier_HeliPilot";
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		VEHICLECARGOSMALLAMIL
		CPC_PREVIEW(CPC_JUN_B_AMIL_UH1H_unarmed);
	};