
class CfgPatches {
	class CPC_Factions_Vanilla
	{
		units[] = {
			"CPC_VAN_RadioBag_01_oli",
			"CPC_VAN_RadioBag_01_coy"
		};
		weapons[] = {
			"CPC_VAN_HelmetIA_coy",
			"CPC_VAN_HelmetIA_oli",
			"CPC_VAN_PlateCarrierIA1_oli",
			"CPC_VAN_PlateCarrierIA1_coy",
			"CPC_VAN_PlateCarrierIA2_oli",
			"CPC_VAN_PlateCarrierIA2_coy"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Data_F",
			"A3_Supplies_F_Enoch_Bags",
			"A3_Characters_F_Enoch_Headgear",
			"A3_Armor_F_Gamma_MBT_02",
			"A3_Characters_F"
		};
	};
};

class CfgMods
{
	class Mod_Base;
	class CPC_Factions_Vanilla : Mod_Base
	{
		picture = "CPC\Factions\CPC_Factions_Vanilla\data\logo_2_03.paa";
		logo = "CPC\Factions\CPC_Factions_Vanilla\data\logo_2_03.paa";
		logoOver = "CPC\Factions\CPC_Factions_Vanilla\data\logo_2_03.paa";
		logoSmall = "CPC\Factions\CPC_Factions_Vanilla\data\logo_2_03.paa";
		tooltipOwned = "CPC Factions Vanilla";
		action = "-";
		dlcColor[] = {0.23,0.39,0.30,1};
		overview = "Additional retextured vanilla assets";
		hideName = 1;
		hidePicture = 0;
		name = "CPC Factions Vanilla";
		dir = "CPC Factions";
	};
};

class CfgVehicles
{
	class Bag_Base;
	class B_RadioBag_01_base_F: Bag_Base
	{
		maximumLoad = 160;
		mass = 60;		
	};
	class CPC_VAN_RadioBag_01_oli : B_RadioBag_01_base_F
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "Radio Pack (Olive)";
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\backpack\B_RadioBag_01_oli_CO.paa"};
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_wdl_F_ca.paa";
		maximumLoad = 160;
		mass = 60;
	};
	class CPC_VAN_RadioBag_01_coy : B_RadioBag_01_base_F
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "Radio Pack (Coyote)";
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\backpack\B_RadioBag_01_coy_CO.paa"};
		picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_RadioBag_01_mtp_F_ca.paa";
		maximumLoad = 160;
		mass = 60;
	};
	
	//T-100
	class MBT_02_base_F;
	class O_MBT_02_base_F : MBT_02_base_F
	{
		class TextureSources;
	};
	class O_MBT_02_cannon_F : O_MBT_02_base_F
	{
		class TextureSources: TextureSources
		{
			class CPC_hexcamonet_desert_1
			{
				author = "CPC Faction";
				textures[] = {
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa"
				};
				factions[] = {};
				displayName = "Hex (Desert Camo Net 1)";
			};
			class CPC_hexcamonet_desert_2
			{
				author = "CPC Faction";
				textures[] = {
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa"
				};
				factions[] = {};
				displayName = "Hex (Desert Camo Net 2)";
			};
			class CPC_hexcamonet_desert_3
			{
				author = "CPC Faction";
				textures[] = {
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa"
				};
				factions[] = {};
				displayName = "Hex (Desert Camo Net 3)";
			};
		};
	};
	
	// Kuma
	class Tank_F;
	class MBT_03_base_F: Tank_F
	{
		class TextureSources;
	};
	class I_MBT_03_base_F : MBT_03_base_F
	{
		class TextureSources: TextureSources
		{
			class CPC_aafcamonet_desert_2
			{
				author = "CPC Faction";
				textures[] = {
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 2)";
			};
			class CPC_aafcamonet_desert_3
			{
				author = "CPC Faction";
				textures[] = {
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 3)";
			};
			class CPC_aafcamonet_desert_4
			{
				author = "CPC Faction";
				textures[] = {
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 4)";
			};
		};
	};
	
	//Mora
	class APC_Tracked_03_base_F: Tank_F
	{
		class TextureSources;
	};
	class I_APC_tracked_03_base_F : APC_Tracked_03_base_F
	{
		class TextureSources: TextureSources
		{
			class CPC_aafcamonet_desert_2
			{
				author = "CPC Faction";
				textures[] = {
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 2)";
			};
			class CPC_aafcamonet_desert_3
			{
				author = "CPC Faction";
				textures[] = {
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 3)";
			};
			class CPC_aafcamonet_desert_4
			{
				author = "CPC Faction";
				textures[] = {
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 4)";
			};
			class CPC_ldfcamonet_desert_1
			{
				author = "CPC Faction";
				textures[] = {
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
				};
				factions[] = {};
				displayName = "LDF (Desert Camo Net 1)";
			};
			class CPC_ldfcamonet_desert_2
			{
				author = "CPC Faction";
				textures[] = {
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
				};
				factions[] = {};
				displayName = "LDF (Desert Camo Net 2)";
			};
			class CPC_ldfcamonet_desert_3
			{
				author = "CPC Faction";
				textures[] = {
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
				};
				factions[] = {};
				displayName = "LDF (Desert Camo Net 3)";
			};
		};
	};
	class I_E_APC_tracked_03_base_F : APC_Tracked_03_base_F
	{
		class TextureSources: TextureSources
		{
			class CPC_aafcamonet_desert_2
			{
				author = "CPC Faction";
				textures[] = {
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 2)";
			};
			class CPC_aafcamonet_desert_3
			{
				author = "CPC Faction";
				textures[] = {
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 3)";
			};
			class CPC_aafcamonet_desert_4
			{
				author = "CPC Faction";
				textures[] = {
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa"
				};
				factions[] = {};
				displayName = "AAF (Desert Camo Net 4)";
			};
			class CPC_ldfcamonet_desert_1
			{
				author = "CPC Faction";
				textures[] = {
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
				};
				factions[] = {};
				displayName = "LDF (Desert Camo Net 1)";
			};
			class CPC_ldfcamonet_desert_2
			{
				author = "CPC Faction";
				textures[] = {
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
					"A3\Armor_F\Data\camonet_AAF_stripe_desert_CO.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
				};
				factions[] = {};
				displayName = "LDF (Desert Camo Net 2)";
			};
			class CPC_ldfcamonet_desert_3
			{
				author = "CPC Faction";
				textures[] = {
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
					"A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
				};
				factions[] = {};
				displayName = "LDF (Desert Camo Net 3)";
			};
		};
	};
};

class CfgWeapons
{
	class VestItem;
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo: VestItem {};
	};
	class CPC_VAN_PlateCarrierIA1_oli : Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "GA Carrier Lite (Olive)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa"};
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa"};
			containerClass = "Supply120";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_VAN_PlateCarrierIA1_coy : Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "GA Carrier Lite (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\vest\equip_ia_vest01_coy_CO.paa"};
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\vest\equip_ia_vest01_coy_CO.paa"};
			containerClass = "Supply120";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_VAN_PlateCarrierIA2_oli : CPC_VAN_PlateCarrierIA1_oli
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "GA Carrier Rig (Olive)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa"};
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa"};
			containerClass = "Supply120";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CPC_VAN_PlateCarrierIA2_coy : CPC_VAN_PlateCarrierIA1_oli
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "GA Carrier Rig (Coyote)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\vest\equip_ia_vest01_coy_CO.paa"};
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\vest\equip_ia_vest01_coy_CO.paa"};
			containerClass = "Supply120";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	
	class H_HelmetIA;
	class CPC_VAN_HelmetIA_oli : H_HelmetIA
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "Modular Helmet (Olive)";
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\helmet\headgear_helmet_canvas_oli_co.paa"};
	};
	class CPC_VAN_HelmetIA_coy : H_HelmetIA
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "CPC_Factions_Vanilla";
		author = "CPC Faction";
		displayName = "Modular Helmet (Coyote)";
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Vanilla\data\helmet\headgear_helmet_canvas_coy_co.paa"};
	};
};