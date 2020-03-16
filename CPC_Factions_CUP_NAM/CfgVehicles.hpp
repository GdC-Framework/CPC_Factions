
	
#define VEHICLECARGOVC \
	class TransportWeapons \
	{ \
		class _xx_CUP_arifle_AK47_Early \
		{ \
			weapon = "CUP_arifle_AK47_Early"; \
			count = 1; \
		}; \
	}; \
	class TransportItems \
	{ \
		class _xx_FirstAidKit \
		{ \
			name = "FirstAidKit"; \
			count = 4; \
		}; \
	}; \
	class TransportMagazines \
	{ \
		class _xx_SmokeShell \
		{ \
			magazine = "SmokeShell"; \
			count = 5; \
		}; \
		class _xx_CUP_HandGrenade_RGD5 \
		{ \
			magazine = "CUP_HandGrenade_RGD5"; \
			count = 5; \
		}; \
		class _xx_CUP_30Rnd_762x39_AK47_M \
		{ \
			magazine = "CUP_30Rnd_762x39_AK47_M"; \
			count = 10; \
		}; \
	}; \
	class TransportBackpacks {};
	
#define VEHICLECARGOUS \
	class TransportWeapons \
	{ \
		class _xx_CUP_arifle_M16A1 \
		{ \
			weapon = "CUP_arifle_M16A1"; \
			count = 1; \
		}; \
	}; \
	class TransportItems \
	{ \
		class _xx_FirstAidKit \
		{ \
			name = "FirstAidKit"; \
			count = 10; \
		}; \
	}; \
	class TransportMagazines \
	{ \
		class _xx_SmokeShell \
		{ \
			magazine = "SmokeShell"; \
			count = 10; \
		}; \
		class _xx_SmokeShellBlue \
		{ \
			magazine = "SmokeShellBlue"; \
			count = 5; \
		}; \
		class _xx_CUP_HandGrenade_M67 \
		{ \
			magazine = "CUP_HandGrenade_M67"; \
			count = 10; \
		}; \
		class _xx_CUP_20Rnd_556x45_Stanag \
		{ \
			magazine = "CUP_20Rnd_556x45_Stanag"; \
			count = 20; \
		}; \
		class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M \
		{ \
			magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"; \
			count = 4; \
		}; \
	}; \
	class TransportBackpacks \
	{ \
		class _xx_CUP_B_AlicePack_OD \
		{ \
			backpack = "CUP_B_AlicePack_OD"; \
			count = 1; \
		}; \
	};

class CfgVehicles
{
	
	class Man;
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierEB: CAManBase {};
	class SoldierGB: CAManBase {};
	class SoldierWB: CAManBase {};
	class Car;
	class Car_F: Car
	{
		class Eventhandlers;
		class AnimationSources;
	};
	
	
	class CUP_B_RPGPack_Khaki;
	class CUP_B_CivPack_WDL;
	class CUP_B_AlicePack_Khaki;
	class CPC_NAM_Backpack_VC_AT: CUP_B_RPGPack_Khaki
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				magazine = "CUP_PG7V_M";
				count = 3;
			};
		};
	};
	class CPC_NAM_Backpack_VC_ENG: CUP_B_CivPack_WDL
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class CPC_NAM_Backpack_VC_Medic: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class CPC_NAM_Backpack_VC_AMG: CUP_B_CivPack_WDL
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 6;
			};
		};
	};
	
	//US
	class CUP_B_AlicePack_OD;
	class CPC_NAM_Backpack_US_TL: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_556x45_Stanag
			{
				magazine = "CUP_20Rnd_556x45_Stanag";
				count = 5;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class CPC_NAM_Backpack_US_Medic: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class CPC_NAM_Backpack_US_MG: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 2;
			};
		};
	};
	class CPC_NAM_Backpack_US_GL: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_FlareRed_M203
			{
				magazine = "CUP_FlareRed_M203";
				count = 5;
			};
			class _xx_CUP_FlareWhite_M203
			{
				magazine = "CUP_FlareWhite_M203";
				count = 5;
			};
			class _xx_CUP_1Rnd_StarCluster_Green_M203
			{
				magazine = "CUP_1Rnd_StarCluster_Green_M203";
				count = 5;
			};
			class _xx_CUP_1Rnd_StarFlare_Red_M203
			{
				magazine = "CUP_1Rnd_StarFlare_Red_M203";
				count = 5;
			};
			class _xx_CUP_1Rnd_SmokeRed_M203
			{
				magazine = "CUP_1Rnd_SmokeRed_M203";
				count = 2;
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine = "CUP_1Rnd_Smoke_M203";
				count = 2;
			};
			class _xx_CUP_1Rnd_SmokeGreen_M203
			{
				magazine = "CUP_1Rnd_SmokeGreen_M203";
				count = 2;
			};
			class _xx_CUP_1Rnd_SmokeYellow_M203
			{
				magazine = "CUP_1Rnd_SmokeYellow_M203";
				count = 2;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine = "CUP_1Rnd_HE_M203";
				count = 10;
			};
		};
	};
	class CPC_NAM_Backpack_US_ENG: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class CPC_NAM_Backpack_US_A: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		author = "CPC Faction";
		dlc = "CPC_Factions_CUP";
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 2;
			};
			class _xx_CUP_20Rnd_556x45_Stanag
			{
				magazine = "CUP_20Rnd_556x45_Stanag";
				count = 10;
			};
			class _xx_CUP_20Rnd_762x51_DMR
			{
				magazine = "CUP_20Rnd_762x51_DMR";
				count = 6;
			};
		};
	};
	
#include "us.hpp"
#include "vc.hpp"

};
	
