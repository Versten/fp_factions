class CfgPatches
{
	class FP_Factions_PLA
	{
		units[] = {"FP_Faction_PLA_Soldier_BASE","FP_Faction_PLA_Rifleman","FP_Faction_PLA_AR","FP_Faction_PLA_AAR","FP_Faction_PLA_SL","FP_Faction_PLA_TL","FP_Faction_PLA_DM","FP_Faction_PLA_RAT","FP_Faction_PLA_Medic","FP_Faction_PLA_Crewman","FP_Faction_PLA_Engineer","FP_Faction_PLA_MMG","FP_Faction_PLA_AMMG","FP_Faction_PLA_MAT","FP_Faction_PLA_AMAT","FP_Faction_PLA_MANPADS","FP_Faction_PLA_AMANPADS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class FP_Faction_PLA
	{
		displayName = "People's Liberation Army";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\PLA\cfgFactionClasses_china_ca.paa";
		flag = "\FP_Factions\PLA\flag_china.paa";
	};
};
class CfgGroups
{
	class East
	{
		class FP_Faction_PLA_Units
		{
			name = "PLA(Universal)";
			class Infantry
			{
				name = "PLA Infantry";
				class PLA_Riflesquad
				{
					name = "Rifle Squad";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PLA_WeaponsSquad
				{
					name = "Weapons Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AAR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PLA_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_ATTeam
				{
					name = "Antitank Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_RifleSentry
				{
					name = "Sentry Duty Dudes";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
			class Support
			{
				name = "PLA Company Attachments";
				class PLA_DoctorTeam
				{
					name = "Doctor Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_MMGTeam
				{
					name = "MMG Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class PLA_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_MATTeam
				{
					name = "MAT Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class PLA_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
};
class cfgvehicles
{
	class B_Carryall_cbr;
	class B_Kitbag_sgg;
	class B_Carryall_cbr_Eng: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
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
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_Kitbag_sgg_AAR: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_75Rnd_58x42_QBB
			{
				magazine = "75Rnd_58x42_QBB";
				count = 5;
			};
		};
	};
	class B_Kitbag_sgg_MMG: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 4;
			};
		};
	};
	class B_FieldPack_cbr_MANPADS: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_Strela_2_M
			{
				magazine = "CUP_Strela_2_M";
				count = 3;
			};
		};
	};
	class B_Carryall_cbr_Exp: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_Soldier_F;
	class FP_Faction_PLA_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguagePER_F", "Head_Asian"};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_PLA";
		genericNames = "ChineseMen";
		vehicleClass = "Men";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "FP_Uniform_Type07Universal";  
		weapons[] = {"PLA_QBZ95","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_PLA_Rifleman: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_PLA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Conscript Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AR: FP_Faction_PLA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {"PLA_QBB95","RH_mak","Throw","Put"};
		respawnWeapons[] = {"PLA_QBB95","RH_mak","Throw","Put"};
		magazines[] = {"75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AAR: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "B_Kitbag_sgg_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_SL: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"PLA_QBZ95_GL","RH_mak","Throw","Put","Binocular"};
		respawnWeapons[] = {"PLA_QBZ95_GL","RH_mak","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","FH_L5_30Rnd_556x45_Tracer","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","FH_L5_30Rnd_556x45_Tracer","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_TL: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"PLA_QBZ95_GL","RH_mak","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95_GL","RH_mak","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","MiniGrenade","MiniGrenade","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","MiniGrenade","MiniGrenade","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_DM: FP_Faction_PLA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Designated Marksman";
		weapons[] = {"CUP_srifle_SVD_takipso","RH_mak","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_SVD_takipso","RH_mak","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_RAT: FP_Faction_PLA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman Antitank";
		backpack = "B_FieldPack_cbr_RPG_AT";
		weapons[] = {"PLA_QBZ95","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_Medic: FP_Faction_PLA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		attendant = 1;
		weapons[] = {"PLA_QBZ95","RH_mak","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","RH_mak","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_Crewman: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"PLA_QBZ95B","RH_mak","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95B","RH_mak","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacVest_camo","CUP_H_TK_TankerHelmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","CUP_H_TK_TankerHelmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_TankerHelmet"};
	};
	class FP_Faction_PLA_Engineer: FP_Faction_PLA_Soldier_BASE
	{
		author = "Toadie";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"PLA_QBZ95","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_MMG: FP_Faction_PLA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Gunner";
		weapons[] = {"CUP_lmg_Pecheneg","RH_mak","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_Pecheneg","RH_mak","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMMG: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "B_Kitbag_sgg_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_MAT: FP_Faction_PLA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Gunner";
		backpack = "B_Kitbag_sgg_MAT";
		weapons[] = {"PLA_QBZ95","CUP_launch_RPG7V_gsfgpgo","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","CUP_launch_RPG7V_gsfgpgo","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMAT: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "B_Kitbag_sgg_MAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_MANPADS: FP_Faction_PLA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Gunner";
		backpack = "B_FieldPack_cbr_MANPADS";
		weapons[] = {"PLA_QBZ95","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMANPADS: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_cbr_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class ChineseMen
		{
			class FirstNames
			{
				ah="Ah";
				an="An";
				bai="Bai";
				bao="Bao";
				bo="Bo";
				chang="Chang";
				chao="Chao";
				chen="Chen";
				cheng="Cheng";
				chin="Chin";
				chun="Chun";
				da="Da";
				dong="Dong";
				fu="Fu";
				gang="Gang";
				guo="Guo";
				hai="Hai";
				he="He";
				heng="Heng";
				hong="Hong";
				hua="Hua";
				huan="Huan";
				huang="Huang";
				hui="Hui";
				jia="Jia";
				jian="Jian";
				jiang="Jiang";
				jin="Jin";
				jing="Jing";
				jun="Jun";
				kun="Kun";
				li="Li";
				lim="Lim";
				ming="Ming";
				ning="Ning";
				qiang="Qiang";
				qing="Qing";
				xiaoping="Xiaoping";
				qiu="Qiu";
				rong="Rong";
				yi="Yi";
				yin="Yin";
				xun="Xun";
				ya="Ya";
				zhong="Zhong";
				zhou="Zhou";
			};
			class LastNames
			{
				ah="Ah";
				an="An";
				bai="Bai";
				bao="Bao";
				bo="Bo";
				chang="Chang";
				chao="Chao";
				chen="Chen";
				cheng="Cheng";
				chin="Chin";
				chun="Chun";
				da="Da";
				dong="Dong";
				fu="Fu";
				gang="Gang";
				guo="Guo";
				hai="Hai";
				he="He";
				heng="Heng";
				hong="Hong";
				hua="Hua";
				huan="Huan";
				huang="Huang";
				hui="Hui";
				jia="Jia";
				jian="Jian";
				jiang="Jiang";
				jin="Jin";
				jing="Jing";
				jun="Jun";
				kun="Kun";
				li="Li";
				lim="Lim";
				ming="Ming";
				ning="Ning";
				qiang="Qiang";
				qing="Qing";
				xiaoping="Xiaoping";
				qiu="Qiu";
				rong="Rong";
				yi="Yi";
				yin="Yin";
				xun="Xun";
				ya="Ya";
				zhong="Zhong";
				zhou="Zhou";
			};
		};
	};
};

