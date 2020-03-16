class cfgWeapons
{
	//US NAM BDU
	class ItemCore;
	class CUP_U_B_BDUv2_base : ItemCore
	{
		class ItemInfo;
	};
	class CPC_NAM_Uniform_B_BDU_OD : CUP_U_B_BDUv2_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "BDU (Nam)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "CPC_NAM_B_US_soldier_1_base";
		};
		hiddenSelectionsTextures[] = {
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa",
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa",
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa",
			"CPC\Factions\CPC_Factions_CUP_NAM\data\BDUv2_OD_vietnam_2_CO.paa"
		};
	};
	class CPC_NAM_Uniform_B_BDU_OD_Dirty : CPC_NAM_Uniform_B_BDU_OD
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "BDU (Nam, Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "CPC_NAM_B_US_soldier_2_base";
		};
	};
	class CPC_NAM_Uniform_B_BDU_OD_Roll : CPC_NAM_Uniform_B_BDU_OD
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "BDU (Nam, Rolled)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "CPC_NAM_B_US_soldier_3_base";
		};
	};
	class CPC_NAM_Uniform_B_BDU_OD_Roll_Dirty : CPC_NAM_Uniform_B_BDU_OD
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "BDU (Nam, Rolled/Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "CPC_NAM_B_US_soldier_4_base";
		};
	};
	class CPC_NAM_Uniform_B_BDU_OD_Roll2 : CPC_NAM_Uniform_B_BDU_OD
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "BDU (Nam, Rolled High)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "CPC_NAM_B_US_soldier_5_base";
		};
	};
	class CPC_NAM_Uniform_B_BDU_OD_Roll2_Dirty : CPC_NAM_Uniform_B_BDU_OD
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "BDU (Nam, Rolled High/Dirty)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "CPC_NAM_B_US_soldier_6_base";
		};
	};
	
	
	class CUP_smg_Mac10;
	class CPC_NAM_smg_Mac10_snds: CUP_smg_Mac10
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_mfsup_Suppressor_Mac10";
			};
		};
	};
	class CUP_srifle_M14;
	class CPC_NAM_srifle_M14_optic: CUP_srifle_M14
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_KHS_old";
			};
		};
	};
};