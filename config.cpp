class CfgPatches			
{							
	class ou_air					
	{						
		units[] = {"ou_ch_46", "ou_ch_53d"};					
		weapons[] = {};					
		requiredVersion = 1;					
		requiredAddons[] = {"CUP_Core","A3_Air_F", "A3_Weapons_F", "A3_Soft_F", "A3_data_F", "A3_Characters_F"};					
		author = "TF-31 Team";										
	};						
};										

class CfgFactionClasses				
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
};											
	class CfgVehicleClasses						
	{						
		class Helicopter					
		{					
			displayName = "CH-46e";				
		};					
	};											
	
	class NewTurret;				
	class Sounds;				
	class HitPoints;
	class UserActions;
};					
{
class Air;			
class Air: Helicopter			
};
class Helicopter F: Helicopter
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
	};			
};				
	class AnimationSources;
	{
		
	};
	class ViewPilot;
	{
		
	};
	class ViewOptics;
	{
		
	}:
	class ViewCargo;
	{
			
	};
	
	class HeadLimits;
	{
		
	};
	class HitPoints: HitPoints				
	{				
		class HitHull;
		{				
			armor = 0.30;			
			material = -1;			
			name = "hull_hit";			
			visual = "hull_hit";			
			passThrough = 0.20;			
			minimalHit = 0.05;			
			explosionShielding = 0;			
			radius = 0.50;			
		};				
		class HitEngine;
		{
			armor = 0.6;			
			material = -1;			
			name = "engine_hit";			
			passThrough = 0;			
			minimalHit = 0.12;			
			explosionShielding = 1;			
			radius = 0.25;			
		};	
		class HitHRotor;			
		{
			armor = 0.2;			
			material = -1;			
			name = "HRotor_Hit";			
			visual = "HRotor_Hit";			
			passThrough = 0;			
			minimalHit = 0.02;			
			explosionShielding = 4;			
			radius = 0.36;			
		};	
		class HitVRotor;
		{
			armor = 0.26;			
			material = -1;			
			name = "VRotor_Hit";			
			visual = "VRotor_Hit";			
			passThrough = 0;			
			minimalHit = 0.2;			
			explosionShielding = 0;			
			radius = 0.36;			
		};
		class HitFuel;
		{
			armor = 0.4;			
			material = -1;			
			name = "Fuel_Hit";			
			visual = "Fuel_Hit";			
			passThrough = 1;			
			minimalHit = 0.4;			
			explosionShielding = 4;			
			radius = 0.2;			
		};
	};				
	class Sounds: Sounds				
	{				
		class Engine; {"\ou_air\sound\ch46engine.wss", 1, 1.000000};			
		class Movement;			
	};		
	class UserActions
	{	
		{
			class Openramp
			{
				displayName = "Lower Ramp";
				position = "pos_action";
				radius = 7.500000;
				onlyForPlayer = false;
				condition = "this animationPhase 'ramp' < 0.5 AND (PLAYER == driver this)";
				statement = "this animate ['ramp', 1]";
			};
			class CloseDoors
			{
				displayName = "Raise Ramp";
				position = "pos_action";
				radius = 7.500000;
				onlyForPlayer = false;
				condition = "this animationPhase 'ramp' >= 0.5 AND (PLAYER == driver this)";
				statement = "this animate ['ramp', 0]";
			};
		};
		
	};
