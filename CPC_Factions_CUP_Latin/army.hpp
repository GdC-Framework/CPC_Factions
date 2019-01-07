	class B_Soldier_base_F: SoldierWB {};
	class CPC_LAT_B_EJE_soldier_base : B_Soldier_base_F
	{
		side = 1;
		scope = 1;
		scopeCurator = 0;
		accuracy = 3.9;
		sensitivity = 3;
		threat[] = { 1, 0.1, 0.1 };
		camouflage = 1.4;
		minFireTime = 7;
		cost = 300000;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		identityTypes[] = {"LanguageGRE_F","Head_Greek",""};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_US_BDU.p3d";
		uniformClass = "CUP_U_B_US_BDU";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconMan";
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_LAT_B_EJE_soldier_1 : CPC_LAT_B_EJE_soldier_base
	{
		displayName = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CUP_V_B_PASGT_OD","CUP_H_US_H_PASGT_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_PASGT_OD","CUP_H_US_H_PASGT_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_FNFAL5061","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_1);
	};
	class CPC_LAT_B_EJE_soldier_light : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Rifleman (light)";
		linkedItems[] = {"CUP_V_B_ALICE","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_ALICE","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_light);
	};
	class CPC_LAT_B_EJE_soldier_M : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Marksman";
		weapons[] = {"CPC_LAT_srifle_M14_leupoldmk4","Throw","Put"};
		respawnWeapons[] = {"CPC_LAT_srifle_M14_leupoldmk4","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_M);
	};
	class CPC_LAT_B_EJE_soldier_AT : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "AT Specialist (M47)";
		icon = "iconManAT";
		linkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_US_H_PASGT_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_US_H_PASGT_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_launch_M47","CUP_arifle_FNFAL5061","Throw","Put"};
		respawnWeapons[] = {"CUP_launch_M47","CUP_arifle_FNFAL5061","Throw","Put"};
		magazines[] = {"CUP_Dragon_EP1_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_AT);
	};
	class CPC_LAT_B_EJE_soldier_AAT : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Asst. AT Specialist";
		backpack = "CPC_LAT_Backpack_EJE_AT";
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_AAT);
	};
	class CPC_LAT_B_EJE_soldier_MG : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Machinegunner";
		icon = "iconManMG";
		backpack = "CPC_LAT_Backpack_EJE_MG";
		weapons[] = {"CUP_lmg_M60E4_norail","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M60E4_norail","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_MG);
	};
	class CPC_LAT_B_EJE_soldier_AMG : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Asst. Machinegunner";
		backpack = "CPC_LAT_Backpack_EJE_MG";
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_AMG);
	};
	class CPC_LAT_B_EJE_soldier_Medic : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Medic";
		picture = "pictureHeal";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CPC_LAT_Backpack_EJE_Medic";
		linkedItems[] = {"CUP_V_B_PASGT_OD","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_PASGT_OD","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_Medic);
	};
	class CPC_LAT_B_EJE_soldier_crew : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Crew";
		linkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_USMC_Crew_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_USMC_Crew_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_FNFAL_OSW","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL_OSW","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_crew);
	};
	class CPC_LAT_B_EJE_soldier_TL : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Team leader";
		icon = "iconManLeader";
		weapons[] = {"CUP_arifle_FNFAL5061","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061","Binocular","Throw","Put"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_TL);
	};
	class CPC_LAT_B_EJE_soldier_Officer : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Officer";
		icon = "iconManOfficer";
		cost = 450000;
		linkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_US_patrol_cap_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_US_patrol_cap_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_FNFAL_OSW","CUP_hgun_Colt1911","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL_OSW","CUP_hgun_Colt1911","Binocular","Throw","Put"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShellOrange","SmokeShellOrange","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShellOrange","SmokeShellOrange","CUP_HandGrenade_RGD5"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_Officer);
	};
	class CPC_LAT_B_EJE_soldier_HeliPilot : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Helicopter Pilot";
		ACE_GForceCoef = 0.55;
		linkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_USMC_Helmet_Pilot","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		respawnLinkedItems[] = {"CUP_V_B_PASGT_no_bags_OD","CUP_H_USMC_Helmet_Pilot","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_14"};
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell"};
		respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell"};
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_HeliPilot);
	};
	class CPC_LAT_B_EJE_soldier_Pilot : CPC_LAT_B_EJE_soldier_HeliPilot
	{
		displayName = "Pilot";
		backpack = "CUP_T10_Parachute_backpack";
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_Pilot);
	};
	class CPC_LAT_B_EJE_soldier_ENG : CPC_LAT_B_EJE_soldier_1
	{
		displayName = "Sapper";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_LAT_Backpack_EJE_ENG";
		CPC_PREVIEW(CPC_LAT_B_EJE_soldier_ENG);
	};
	
	
	// Vehicles
	

	// Tracked
	class CUP_M113_Base;
	class CPC_LAT_B_EJE_M113 : CUP_M113_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		accuracy = 0.3;
		maximumLoad = 5000;
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_crew";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		HiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_olive_drab_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"};
		VEHICLECARGOBIGEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_M113);
	};
	class CUP_B_M60A3_USMC;
	class CPC_LAT_B_EJE_M60A3 : CUP_B_M60A3_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_crew";
		VEHICLECARGOBIGEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_M60A3);
	};
	
	// Wheeled
	class CUP_B_MTVR_USMC;
	class CPC_LAT_B_EJE_MTVR : CUP_B_MTVR_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_MTVR);
	};
	class CUP_B_MTVR_Ammo_USMC;
	class CPC_LAT_B_EJE_MTVR_Ammo : CUP_B_MTVR_Ammo_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_MTVR_Ammo);
	};
	class CUP_B_MTVR_Refuel_USMC;
	class CPC_LAT_B_EJE_MTVR_Refuel : CUP_B_MTVR_Refuel_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_MTVR_Refuel);
	};
	class CUP_B_MTVR_Repair_USMC;
	class CPC_LAT_B_EJE_MTVR_Repair : CUP_B_MTVR_Repair_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_MTVR_Repair);
	};
	class Car;
	class Car_F: Car
	{
		class AnimationSources;
	};
	class CUP_LR_Base: Car_F {};
	class CUP_LR_Transport_Base: CUP_LR_Base
	{
		class AnimationSources: AnimationSources
		{
			class selection_bar;
		};
	};
	class CPC_LAT_B_EJE_LR_Transport : CUP_LR_Transport_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"};
		class AnimationSources : AnimationSources
		{	
			class selection_bar: selection_bar
			{
				initPhase=1;			
			};			
		};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_LR_Transport);
	};
	class CUP_LR_MG_Base: CUP_LR_Base
	{
		class AnimationSources: AnimationSources
		{
			class selection_bar;
		};
	};
	class CPC_LAT_B_EJE_LR_MG : CUP_LR_MG_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
		typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1"};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"};
		class AnimationSources : AnimationSources
		{	
			class selection_bar: selection_bar
			{
				initPhase=1;			
			};			
		};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_LR_MG);
	};
	class CUP_LR_Ambulance_Base: CUP_LR_Base
	{
		class AnimationSources: AnimationSources
		{
			class selection_bar;
		};
	};
	class CPC_LAT_B_EJE_LR_Ambulance : CUP_LR_Ambulance_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_Medic";
		typicalCargo[] = {"CPC_LAT_B_EJE_soldier_Medic"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_w_lr_base_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_amb_ext_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_w_lr_special_co.paa"};
		class AnimationSources : AnimationSources
		{	
			class selection_bar: selection_bar
			{
				initPhase=1;			
			};			
		};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_LR_Ambulance);
	};
	class CPC_LAT_B_EJE_BTR40 : CUP_BTR40_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
		typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1"};
        hiddenSelectionsTextures[] ={"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa"};
		VEHICLECARGOBIGEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_BTR40);
	};
	class CPC_LAT_B_EJE_BTR40_MG : CUP_BTR40_MG_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
		typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1"};
        hiddenSelectionsTextures[] ={"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa"};
		VEHICLECARGOBIGEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_BTR40_MG);
	};
	
	//Air
	class CUP_O_C47_SLA;
	class CPC_LAT_B_EJE_C47 : CUP_O_C47_SLA
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_Pilot";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_C47);
	};
	
	//Static
	class CUP_B_M119_USMC;
	class CPC_LAT_B_EJE_M119 : CUP_B_M119_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
		CPC_PREVIEW(CPC_LAT_B_EJE_M119);
	};
	class CPC_LAT_B_EJE_M2StaticMG : CUP_B_M2StaticMG_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
		CPC_PREVIEW(CPC_LAT_B_EJE_M2StaticMG);
	};
	class CPC_LAT_B_EJE_M2StaticMG_MiniTripod : CUP_B_M2StaticMG_MiniTripod_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
		CPC_PREVIEW(CPC_LAT_B_EJE_M2StaticMG_MiniTripod);
	};
	class CPC_LAT_B_EJE_M252 : CUP_B_M252_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
		CPC_PREVIEW(CPC_LAT_B_EJE_M252);
	};
	
	// boats
	
	class CUP_B_RHIB_USMC;
	class CPC_LAT_B_EJE_RHIB : CUP_B_RHIB_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_RHIB);
	};
	class CPC_LAT_B_EJE_Zodiac : CUP_B_Zodiac_USMC
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_Zodiac);
	};
	class CUP_I_LCVP_RACS;
	class CPC_LAT_B_EJE_LCVP : CUP_I_LCVP_RACS
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_LCVP);
	};
	class CUP_I_LCVP_VIV_RACS;
	class CPC_LAT_B_EJE_LCVP_VIV : CUP_I_LCVP_VIV_RACS
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_1";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_LCVP_VIV);
	};
	
	
	class CUP_I_UH1H_TK_GUE;
	class CPC_LAT_B_EJE_UH1H : CUP_I_UH1H_TK_GUE
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_HeliPilot";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_UH1H);
	};
	class CUP_I_UH1H_armed_TK_GUE;
	class CPC_LAT_B_EJE_UH1H_armed : CUP_I_UH1H_armed_TK_GUE
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_HeliPilot";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_UH1H_armed);
	};
	class CUP_I_UH1H_slick_TK_GUE;
	class CPC_LAT_B_EJE_UH1H_slick : CUP_I_UH1H_slick_TK_GUE
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		faction = "CPC_B_EJE";
		crew = "CPC_LAT_B_EJE_soldier_HeliPilot";
        typicalCargo[] = {"CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_1","CPC_LAT_B_EJE_soldier_TL"};
		VEHICLECARGOSMALLEJE
		CPC_PREVIEW(CPC_LAT_B_EJE_UH1H_slick);
	};