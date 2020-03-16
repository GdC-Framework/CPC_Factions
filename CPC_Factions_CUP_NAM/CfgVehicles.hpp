
	
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
	class Civilian: CAManBase {};
	class Car;
	class Car_F: Car
	{
		class Eventhandlers;
		class AnimationSources;
	};
	
#include "backpacks.hpp"

	
#include "us.hpp"
#include "vc.hpp"
#include "civ.hpp"

};
	
