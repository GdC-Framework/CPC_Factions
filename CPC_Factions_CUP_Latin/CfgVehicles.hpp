
	
#define VEHICLECARGOPIC \
	class TransportWeapons \
	{ \
		class _xx_CUP_arifle_FNFAL5061 \
		{ \
			weapon = "CUP_arifle_FNFAL5061"; \
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
		class _xx_CUP_20Rnd_762x51_FNFAL_M \
		{ \
			magazine = "CUP_20Rnd_762x51_FNFAL_M"; \
			count = 10; \
		}; \
	}; \
	class TransportBackpacks {};
	
#define VEHICLECARGOSMALLEJE \
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
			count = 1; \
		}; \
	}; \
	class TransportMagazines \
	{ \
		class _xx_SmokeShell \
		{ \
			magazine = "SmokeShell"; \
			count = 5; \
		}; \
		class _xx_SmokeShellBlue \
		{ \
			magazine = "SmokeShellBlue"; \
			count = 5; \
		}; \
		class _xx_CUP_HandGrenade_RGD5 \
		{ \
			magazine = "CUP_HandGrenade_RGD5"; \
			count = 5; \
		}; \
		class _xx_CUP_20Rnd_556x45_Stanag \
		{ \
			magazine = "CUP_20Rnd_556x45_Stanag"; \
			count = 10; \
		}; \
	}; \
	class TransportBackpacks {};
	
#define VEHICLECARGOBIGEJE \
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
		class _xx_CUP_HandGrenade_RGD5 \
		{ \
			magazine = "CUP_HandGrenade_RGD5"; \
			count = 10; \
		}; \
		class _xx_CUP_20Rnd_556x45_Stanag \
		{ \
			magazine = "CUP_20Rnd_556x45_Stanag"; \
			count = 20; \
		}; \
		class _xx_CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M \
		{ \
			magazine = "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M"; \
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
	class CUP_B_AlicePack_OD;
	class CPC_LAT_Backpack_EJE_AT: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_CUP_Dragon_EP1_M
			{
				magazine = "CUP_Dragon_EP1_M";
				count = 1;
			};
		};
	};
	class CPC_LAT_Backpack_PIC_AT: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				magazine = "CUP_PG7V_M";
				count = 3;
			};
		};
	};
	class CPC_LAT_Backpack_EJE_MG: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M";
				count = 3;
			};
		};
	};
	class CPC_LAT_Backpack_PIC_MG: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 6;
			};
		};
	};
	class CPC_LAT_Backpack_PIC_AR: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M
			{
				magazine = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
				count = 6;
			};
		};
	};
	class CPC_LAT_Backpack_EJE_Medic: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
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
	class CPC_LAT_Backpack_EJE_ENG: CUP_B_AlicePack_OD
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
	};
	
	class Man;
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierEB: CAManBase {};
	class SoldierGB: CAManBase {};
	class SoldierWB: CAManBase {};
#include "guerilla.hpp"
#include "army.hpp"

};
	
