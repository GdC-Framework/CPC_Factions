class cfgGroups
{
	class West
	{
		class CPC_B_NAM_US
		{
			name = "US (Vietnam)";
			class Infantry
			{
				name = "Infantry";
				class CPC_B_NAM_US_InfantrySquad
				{
					name = "Infantry Squad";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					faction = "CPC_B_NAM_US"; side = 1;
					rarityGroup = 0.7;
					class Unit0
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_TL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_RTO";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_LAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_M";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_MG";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_ENG";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_A";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class CPC_B_NAM_US_InfantrySection
				{
					name = "Infantry Section";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					faction = "CPC_B_NAM_US"; side = 1;
					rarityGroup = 0.2;
					class Unit0
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_TL";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_ENG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_A";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class CPC_B_NAM_US_InfantrySectionMG
				{
					name = "Infantry Section (MG)";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					faction = "CPC_B_NAM_US"; side = 1;
					rarityGroup = 0.2;
					class Unit0
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_TL";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_MG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_A";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class CPC_B_NAM_US_InfantrySentry
				{
					name = "Infantry Sentry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					faction = "CPC_B_NAM_US"; side = 1;
					rarityGroup = 0.2;
					class Unit0
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_1";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_1";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class CPC_B_NAM_US_SniperTeam
				{
					name = "Sniper Team";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					faction = "CPC_B_NAM_US"; side = 1;
					rarityGroup = 0.05;
					class Unit0
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_M";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_A";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class CPC_B_NAM_US_MechanizedInfantrySquadM113
				{
					name = "Mechanized Infantry Squad (M113)";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					faction = "CPC_B_NAM_US";
					rarityGroup = 0.7;
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_TL";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_M113";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_MG";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_A";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_Medic";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_LAT";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_soldier_1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
			};
			class Air
			{
				name = "Air";
				class CPC_B_NAM_US_UH1HFlight
				{
					name = "UH-1H Flight";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					faction = "CPC_B_NAM_US";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_UH1H";
						rank = "CAPTAIN";
						position[] = {0,15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CPC_NAM_B_US_UH1H_armed";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
			};
		};
	};
    class East
    {
        class CPC_O_NAM_VC
        {
            name = "Viet Cong";
            class Infantry
            {
                name = "Infantry";
                class CPC_O_NAM_VC_InfSentry
                {
                    name = "Sentry";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_1";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_9";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class CPC_O_NAM_VC_InfSquad
                {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_MG";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AR";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_6";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_Medic";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_3";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_7";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class CPC_O_NAM_VC_InfSquad_Weapons
                {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AR";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_MG";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_1";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AMG";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_Medic";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class CPC_O_NAM_VC_InfTeam
                {
                    name = "Fire Team";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AR";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_1";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_3";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };    
                class CPC_O_NAM_VC_InfTeam_AA
                {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_MG";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AA";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AA";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class CPC_O_NAM_VC_InfTeam_AT
                {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_5";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class CPC_O_NAM_VC_InfWepTeam
                {
                    name = "Weapons Team";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_MG";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_6";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class CPC_O_NAM_VC_InfSupTeam
                {
                    name = "Support Team";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_Medic";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_M1";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class CPC_O_NAM_VC_InfHQ
                {
                    name = "Infantry HQ";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_Medic";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_ENG";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_3";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                };
                class CPC_O_NAM_VC_ReconSentry
                {
                    name = "Recon Sentry";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_9";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_10";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Motorized
            {
                name = "Motorized Infantry";
                class CPC_O_NAM_VC_MotInf_Team
                {
                    name = "Motorized Patrol";
                    side = 0;
                    faction = "CPC_O_NAM_VC";
                    rarityGroup = 0.2;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_TL";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_V3S_Covered";
                        rank = "SERGEANT";
                        position[] = {0,-10,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AR";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_AT";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_1";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_3";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_5";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "CPC_NAM_O_VC_soldier_MG";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
        };
    };
};