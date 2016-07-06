class cfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class ItemCore;
	
	class CUP_Vest_RACS_Camo_Base;
	class CPC_Duala_Vest_Carrier_Tan : CUP_Vest_RACS_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "RACS Carrier Vest (Variant, no radio)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		model = "CPC\Factions\CPC_Factions_Afrique\CPC_Afrique_CarrierVest2.p3d";
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex1_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex2_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex1_co.paa",
				"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex2_co.paa"
			};
			containerClass = "Supply90";
			uniformModel = "CPC\Factions\CPC_Factions_Afrique\CPC_Afrique_CarrierVest2.p3d";
			armor = 0;
			passThrough = 1.0;
			mass = 80;
			#include "\CPC\Factions\hitpoints_vestheavy.h"
		};
	};
	
	class CPC_Duala_Uniform_GFD_desert: ItemCore
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions";
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
		dlc = "CPC_Factions";
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
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "NPFD Uniform";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_Afrique\data\UI\NPFD_Uniform_Africa.paa";
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
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Pirate Clothes";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_Afrique\data\UI\Pirate_uniform_Africa.paa";
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
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Pirate Clothes";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_Afrique\data\UI\Pirate_uniform_Africa.paa";
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
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Pirate Clothes";
		allowedSlots[] = { BACKPACK_SLOT };
		picture = "\CPC\Factions\CPC_Factions_Afrique\data\UI\Pirate_uniform_Africa.paa";
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
		dlc = "CPC_Factions";
		author = "CPC Faction" ;
		displayName = "Booniehat (NPFD)";
		picture = "\CPC\Factions\CPC_Factions_Afrique\data\UI\Booniehat_Africa.paa";
		model = "\A3\Characters_F\Common\booniehat.p3d";
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Afrique\data\NPFD_Booniehat.paa"};
		allowedFacewear[] = {};
		class ItemInfo : ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\booniehat.p3d";
		};
	};

	class CUP_H_ChDKZ_Cap ;
	class CPC_Duala_Cappatrol_NPFD : CUP_H_ChDKZ_Cap 
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Officer Cap (NPFD)";
		picture = "\CPC\Factions\CPC_Factions_Afrique\data\UI\cappatrol_Africa.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Afrique\data\NPFD_cappatrol.paa"};
		
			mass = 10;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_OfficerCap.p3d";
		};
	};
	
	class CUP_arifle_M4A1_black;
	class CPC_Duala_arifle_M4A1_black_ACOG: CUP_arifle_M4A1_black
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "CUP_optic_RCO";
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
				slot = "CUP_PicatinnyTopMountFNFAL";
				item = "CUP_optic_SB_11_4x20_PM";
			};
		};
	};
	class CPC_Duala_arifle_FNFAL_railed_CWS: CUP_arifle_FNFAL_railed
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountFNFAL";
				item = "CUP_optic_CWS";
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
};