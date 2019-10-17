class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	
	// Weapons
	class CUP_srifle_M14;
	class CPC_LAT_srifle_M14_leupoldmk4: CUP_srifle_M14
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
		};
	};
	
	// uniform
	class CUP_U_B_BDUv2_dirty_OD;
	class CPC_Latin_Uniform_PIC_olive: CUP_U_B_BDUv2_dirty_OD
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "Picaros Uniform (Olive)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_LAT_I_PIC_soldier_base_1;
			containerClass = Supply40;
			mass = 20;
		};
	};
	class CUP_U_B_BDUv2_roll2_dirty_OD;
	class CPC_Latin_Uniform_PIC_olive_2: CUP_U_B_BDUv2_roll2_dirty_OD
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		displayName = "Picaros Uniform (Olive,Rolled)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_LAT_I_PIC_soldier_base_2;
			containerClass = Supply40;
			mass = 20;
		};
	};
	/*
	class CPC_Latin_Uniform_PIC_olive: ItemCore
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions_CUP";
		author = "CPC Faction";
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Picaros Uniform (Olive)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_usmc_pilotoverall_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo", "camo1", "camo2"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\US_BDU_OD_CO.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\US_BDU_OD_CO.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USarmy\data\US_BDU_OD_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = CPC_LAT_I_PIC_soldier_base_1;
			containerClass = Supply40;
			mass = 20;
		};
	};
	*/
};