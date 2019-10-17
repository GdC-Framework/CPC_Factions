class cfgWeapons
{
	class UniformItem;
	class ItemCore;
	class HeadgearItem;
	
	class CUP_Vest_Camo_Base;
	class CUP_V_B_PASGT: CUP_Vest_Camo_Base
	{
		class ItemInfo;
	};
	class CPC_Afrique_Vest_PASGT_Tan: CUP_V_B_PASGT
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName  = "PASGT Vest (Tan)";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {
		"CPC\Factions\CPC_Factions_CUP_Afrique\data\GDF_vest_tan.paa", "CPC\Factions\CPC_Factions_CUP_Afrique\data\GDF_vest_acc_tan.paa"};

		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1", "camo2"};
			hiddenSelectionsTextures[] = {
			"CPC\Factions\CPC_Factions_CUP_Afrique\data\GDF_vest_tan.paa", "CPC\Factions\CPC_Factions_CUP_Afrique\data\GDF_vest_acc_tan.paa"};
		};
	};
	class CPC_Duala_Vest_Carrier_Tan :CPC_Afrique_Vest_PASGT_Tan
	{
		scope = 0;
		scopeArsenal = 0;
	};
	
	class CPC_Duala_Uniform_GFD_desert: ItemCore
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "GFD Uniform (Desert)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\data\ui\icon_u_o_tk_greens_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_Duala_B_GFD_soldier_base;
			containerClass = Supply40;
			mass = 20;
		};
	};
	
	class CUP_U_I_RACS_PilotOverall;
	class CPC_Duala_Uniform_GFD_pilot: CUP_U_I_RACS_PilotOverall
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "GFD Pilot Overall";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_Duala_B_GFD_soldier_HeliPilot;
			containerClass = Supply40;
			mass = 20;
		};
	};
	
	class CPC_Duala_Uniform_NPFD_1: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "NPFD Uniform";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_CUP_Afrique\data\UI\NPFD_Uniform_Africa.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_Duala_O_NPFD_soldier_base;
			containerClass = Supply40;
			mass = 20;
		};
	};
	
	class CPC_Afrique_Clothes_Pirate_1: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "Pirate Clothes";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_CUP_Afrique\data\UI\Pirate_uniform_Africa.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_Afrique_I_pirate_base_1;
			containerClass = Supply30;
			mass = 30;
		};
	};

	class CPC_Afrique_Clothes_Pirate_2: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "Pirate Clothes";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_CUP_Afrique\data\UI\Pirate_uniform_Africa.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_Afrique_I_pirate_base_2;
			containerClass = Supply30;
			mass = 30;
		};
	};	
	
	class CPC_Afrique_Clothes_Pirate_3: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "Pirate Clothes";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_CUP_Afrique\data\UI\Pirate_uniform_Africa.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_Afrique_I_pirate_base_3;
			containerClass = Supply30;
			mass = 30;
		};
	};	
	
	class H_Booniehat_indp;
	class CPC_Duala_Booniehat_NPFD : H_Booniehat_indp
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction" ;
		displayName = "Booniehat (NPFD)";
		picture = "\CPC\Factions\CPC_Factions_CUP_Afrique\data\UI\Booniehat_Africa.paa";
		model = "\A3\Characters_F\Common\booniehat.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_CUP_Afrique\data\NPFD_Booniehat.paa"};
		allowedFacewear[] = {};
		class ItemInfo : HeadgearItem
		{
			uniformModel = "A3\Characters_F\Common\booniehat.p3d";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_CUP_Afrique\data\NPFD_Booniehat.paa"};
		};
	};

	class CPC_Duala_Cappatrol_NPFD : ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "Officer Cap (NPFD)";
		picture = "\CPC\Factions\CPC_Factions_CUP_Afrique\data\UI\cappatrol_Africa.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_CUP_Afrique\data\NPFD_cappatrol.paa"};
		class ItemInfo : HeadgearItem {
			mass = 10;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_CUP_Afrique\data\NPFD_cappatrol.paa"};
			allowedSlots[] = {801, 901, 701, 605};
			modelSides[] = {0, 3};
			#include "\CPC\Factions\hitpoints_headno.h"
		};
	};
	
	class CUP_arifle_M4A1;
	class CPC_Duala_arifle_M4A1_ACOG: CUP_arifle_M4A1
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM16";
				item = "cup_optic_rco";
			};
		};
	};
	
	class CUP_arifle_M4A3_black;
	class CPC_Afrique_arifle_M4A3_black_CCO_laser: CUP_arifle_M4A3_black
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "CUP_optic_CompM2_low";
			};
			class LinkedItemSide
			{
				slot = "CUP_PicatinnySideMountM4";
				item = "cup_acc_anpeq_2_grey";
			};
		};
	};
	class CPC_Afrique_arifle_M4A3_black_ACOG_laser: CUP_arifle_M4A3_black
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "cup_optic_acog";
			};
			class LinkedItemSide
			{
				slot = "CUP_PicatinnySideMountM4";
				item = "cup_acc_anpeq_2_grey";
			};
		};
	};
	class CUP_arifle_M4A1_black;
	class CPC_Afrique_arifle_M4A1_black_CCO_laser: CUP_arifle_M4A1_black
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "CUP_optic_CompM2_low";
			};
			class LinkedItemSide
			{
				slot = "CUP_PicatinnySideMountM4";
				item = "CUP_acc_ANPEQ_15_Black";
			};
		};
	};
	class CUP_lmg_M60E4;
	class CPC_Afrique_lmg_M60E4_CCO: CUP_lmg_M60E4
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM60";
				item = "CUP_optic_CompM2_low";
			};
		};
	};
	class CUP_srifle_L129A1_HG;
	class CPC_Afrique_srifle_L129A1_HG_Leupold_laser: CUP_srifle_L129A1_HG
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountL129";
				item = "CUP_optic_Leupold_VX3";
			};
			class LinkedItemSide
			{
				slot = "CUP_PicatinnySideMountL129";
				item = "CUP_acc_ANPEQ_15_Black";
			};
			class LinkedItemsBipod
			{
				slot = "CUP_PicatinnyUnderMountL129";
				item = "bipod_02_F_blk";
			};
		};
	};
	class CUP_srifle_m110_kac_black;
	class CPC_Afrique_m110_kac_black_Leupold_laser: CUP_srifle_m110_kac_black
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_leupoldmk4";
			};
			class LinkedItemSide
			{
				slot = "PointerSlot";
				item = "cup_acc_anpeq_2_grey";
			};
			class LinkedItemsBipod
			{
				slot = "UnderBarrelSlot";
				item = "bipod_02_F_blk";
			};
		};
	};
	
	class CUP_arifle_FNFAL_railed;
	class CPC_Duala_arifle_FNFAL_railed_SandBshortdot: CUP_arifle_FNFAL_railed
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "cup_optic_sb_11_4x20_pm";
			};
		};
	};
	class CPC_Duala_arifle_FNFAL_railed_AN_PVS_4: CUP_arifle_FNFAL_railed
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_AN_PVS_4";
			};
		};
	};
	
	class CUP_arifle_M16A2;
	class CPC_Afrique_arifle_M16A2_GOSHAWK: CUP_arifle_M16A2
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM16";
				item = "CUP_optic_GOSHAWK_RIS";
			};
		};
	};
	class CPC_Afrique_arifle_M16A2_ANPVS4: CUP_arifle_M16A2
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM16";
				item = "cup_optic_an_pvs_4_m16";
			};
		};
	};
	class CUP_launch_RPG7V;
	class CPC_Duala_launch_RPG7V_PGO7V: CUP_launch_RPG7V
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_PGO7V2";
			};
		};
	};
	class CUP_arifle_AK74;
    class CPC_Afrique_arifle_AK74_PSO: CUP_arifle_AK74
    {
        scope = 1;
        author = "CPC Faction";
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CUP_DovetailMount_AK";
                item = "CUP_optic_PSO_1";
            };
        };
	};
};