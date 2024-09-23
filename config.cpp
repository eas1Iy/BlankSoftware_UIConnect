/* 
blanksoftware
by eas1ly
discord: https://discord.gg/xt2GGzfFY7
*/

class CfgPatches
{
	class BlankSoftware_UIConnect
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};
class CfgMods
{
	class BlankSoftware_UIConnect
	{
		dir="BlankSoftware_UIConnect";
		picture="https://i.postimg.cc/wTcpSJmD/image.png";
		action="https://discord.gg/xt2GGzfFY7";
		hideName=0;
		hidePicture=0;
		name="BlankSoftware_UIConnect";
		credits="";
		author="eas1ly";
		authorID="76561197973045520";
		version=1.0;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				files[]=
				{
					"BlankSoftware_UIConnect/scripts/common",
					"BlankSoftware_UIConnect/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				files[]=
				{
					"BlankSoftware_UIConnect/scripts/common",
					"BlankSoftware_UIConnect/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				files[]=
				{
					"BlankSoftware_UIConnect/scripts/common",
					"BlankSoftware_UIConnect/scripts/5_Mission"
				};
			};
		};
	};
};

class cfgCharacterScenesBLANK
{
	class ChernarusPlus
	{
		class loc1
		{
			target[] = {3385.92, 6300.80, 344.65 }; 					// позиция персонажа
			position[] = {3385.92, 6460.80, 1.2}; 						// позиция камеры 3382.038330 346.2 6458.986328
			fov = 0.8; 													// фов
			date[] = {2017,2,4,5,30};									// дата и время (год,-,-,час,минута)
			overcast = 0.1;												// облочность
			rain = 0.2;													// дождь
			fog = 0.1;													// туман
		};
	};
	class enoch
	{
		class loc1
		{
			target[] = {4157.383789, 10325.378906, 238.600082}; 		// позиция персонажа
			position[] = {4154.673340, 10324.400391, 1.2}; 				// позиция камеры
			fov = 0.8; 													// фов
			date[] = {2017,2,4,12,9};									// дата и время (год,-,-,час,минута)
			overcast = 0.1;												// облочность
			rain = 0.2;													// дождь
			fog = 0.1;													// туман
		};
	};
	class namalsk
	{
		class loc1
		{
			target[] = {5192.50, 8546.93, 31.01 }; 						// позиция персонажа
			position[] = {5189.51, 8545.66, 1.1}; 						// позиция камеры
			fov = 0.8; 													// фов
			date[] = {2017,2,4,12,9};									// дата и время (год,-,-,час,минута)
			overcast = 0.1;												// облочность
			rain = 0.2;													// дождь
			fog = 0.1;													// туман
		};
	};
	class PNW
	{
		class loc1
		{
			target[] = {8550.91, 8303.23, 12.72 }; 						// позиция персонажа
			position[] = {8552.62, 8300.06, 1.1}; 						// позиция камеры
			fov = 0.8; 													// фов
			date[] = {2017,2,4,12,9};									// дата и время (год,-,-,час,минута)
			overcast = 0.1;												// облочность
			rain = 0.0;													// дождь
			fog = 0.1;													// туман
		};
	};
	class antoria
	{
		class loc1
		{
			target[] = {3072.790039, 6709.390137, 269.989990 }; 		// позиция персонажа
			position[] = {3071.836426, 6707.950684, 1.1}; 				// позиция камеры
			fov = 0.8; 													// фов
			date[] = {2017,2,4,12,9};									// дата и время (год,-,-,час,минута)
			overcast = 0.1;												// облочность
			rain = 0.0;													// дождь
			fog = 0.1;													// туман
		};
	};
};

/* 
blanksoftware
by eas1ly
discord: https://discord.gg/xt2GGzfFY7
*/