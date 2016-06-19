{							
	class ou_air					
	{						
		units[] = {"ou_ch_46", "ou_ch_53d"};					
		weapons[] = {};					
		requiredVersion = 1;					
		requiredAddons[] = {"CUP_Core","A3_Air_F", "A3_Weapons_F", "A3_Soft_F", "A3_data_F", "A3_Characters_F"};					
		author = "TF-31 Team";										
	};						
{										
	class BLU_F									
	{									
		displayName = "NATO";								
		priority = 1;								
		side = 1;								
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";								
		flag = "\a3\Data_f\Flags\flag_nato_co.paa";								
	};
{						
		class Helicopter				
		{					
			displayName = "CH-46e";				
		};		
{											
	class West										
	{										
		name = "BLUFOR";									
		side = 1;									
		class BLU_F									
		{									
			name = "NATO";								
			class Helicopter								
			{								
				name = "Helicopter;							
				class ou_ch_46							
				{							
					name = "CH-46e";						
					side = 1;						
					faction = "BLU_F";						
					class Unit0						
					{						
						side = 1;					
						vehicle = "B_helicrew_F";					
						rank = "SERGEANT";					
						position[] = {0,0,0};					
					};						
					class Unit1						
					{						
						side = 1;					
						vehicle = "B_helicrew_F";					
						rank = "SERGEANT";					
						position[] = {5,-5,0};					
					};						
					class Unit2						
					{						
						side = 1;					
						vehicle = "B_helicrew_F";					
						rank = "CORPORAL";					
						position[] = {-5,-5,0};					
					};						
					class Unit3						
					{						
						side = 1;					
						vehicle = "B_helicrew_F";					
						rank = "PRIVATE";					
						position[] = {10,-10,0};					
					};						
				};							
			};								
		};									
	};										
};											
class Air;					
class Helicopter: Air					
{					
	class NewTurret;				
	class Sounds;				
	class HitPoints;				
};					
class CH-46e: CH-46e					
{					
	class Turrets				
	{				
		class co_pilot: NewTurret
		{
			startEngine = true;
			outGunnerMayFire = true;
			primaryGunner = 0;
			commanding = -1;
			proxyIndex = 1;
			gunnerName = "Co-Pilot";
			memoryPointsGetInGunner = "pos_driver";
			memoryPointsGetInGunnerDir = "pos_driver_dir";
			gunnerAction = "UH1Y_Pilot";
			gunnerInAction = "UH1Y_Pilot";
			initTurn = 0;
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerForceOptics = false;
		};		
				class CommanderOptics;	
			};		
		};			
	};				
	class AnimationSources;				
	class ViewPilot;				
	class ViewOptics;				
	class ViewCargo;				
	class HeadLimits;				
	class HitPoints: HitPoints				
	{				
		class HitHull;
		{				
			armor = 0.3;			
			material = -1;			
			name = "hull_hit";			
			visual = "hull_hit";			
			passThrough = 0.2;			
			minimalHit = 0.05;			
			explosionShielding = 0;			
			radius = 0.5;			
		};				
		class HitEngine;
		class HitHRotor;			
		class HitVRotor;
		class HitFuel;
	};				
	class Sounds: Sounds				
	{				
		class Engine; {"\ou_air\sound\ch46engine.wss", 1, 1.000000};			
		class Movement;			
	};				
};					
