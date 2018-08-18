
class CfgPatches
{
	class CPC_Factions_RHS_Snow
	{
		units[] = 
		{
			"CPC_Snow_Backpack_1"
		};
		weapons[] = 
		{
			"CPC_Snow_Uniform_1",
			"CPC_Snow_Uniform_2",
			"CPC_Snow_Vest_1",
			"CPC_Snow_Beanie_1",
			"CPC_Snow_Helmet_1"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"CPC_Factions_RHS_Main","A3_Characters_F","A3_Weapons_F_Ammoboxes","rhsgref_c_troops","rhs_c_troops","rhsusf_c_troops"};
	};
	// Legacy
	class CPC_Factions_Snow
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"



