/* ------------------------------------------------------------------------------------------------------------------------ */

/* 
BLANKSOFTWARE DayZ Modding

Discord:			https://discord.gg/xt2GGzfFY7
Telegram: 			https://t.me/blanksoftware
Telegram support:	https://t.me/blankdayz

This is private modification.
Use without express permission is prohibited and will be punished.
It is protected by copyright.
*/

/* ------------------------------------------------------------------------------------------------------------------------ */

class CfgPatches
{
	class BlankSoftware_UIConnect
	{
		units[]					= {};
		weapons[]				= {};
		requiredVersion			= 0.1;
		requiredAddons[]		=
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
		dir				= "BlankSoftware_UIConnect";
		picture			= "https://i.postimg.cc/wTcpSJmD/image.png";
		action			= "https://discord.gg/xt2GGzfFY7";
		name			= "BlankSoftware_UIConnect";
		author			= "eas1ly";
		authorID		= "76561197973045520";
		version			= 1.0;
		hideName		= 1;
		hidePicture		= 1;
		credits			= "";
		extra			= 0;
		type			= "mod";

		defines[] 		= { "BLANK_UIConnect","BLANK_UIConnect_VPPAdminTools_ON" };
		
		dependencies[]	= { "Game", "World", "Mission" };
		
		class defs
		{
			class gameScriptModule
			{
				files[]	= { "BlankSoftware_UIConnect/scripts/common","BlankSoftware_UIConnect/scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[]	= { "BlankSoftware_UIConnect/scripts/common","BlankSoftware_UIConnect/scripts/4_World" };
			};
			class missionScriptModule
			{
				files[]	= { "BlankSoftware_UIConnect/scripts/common","BlankSoftware_UIConnect/scripts/5_Mission" };
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
			target[] 	= { 3385.92, 6300.80, 344.65 }; 				// Позиция персонажа	[Нет смысла менять]
			position[] 	= { 3385.92, 6460.80, 1.2 }; 					// Позиция камеры		[Нет смысла менять]
			date[] 		= { 2017,2,4,5,30 };							// Дата и время 		[год,-,-,час,минута]
			overcast 	= 0.1;											// Облочность			[0.0 - 1.0]
			rain 		= 0.2;											// Дождь				[0.0 - 1.0]
			fov 		= 0.8; 											// Угол обзора			[0.0 - 1.0]
			fog 		= 0.1;											// Туман				[0.0 - 1.0]
		};
	};
	class enoch
	{
		class loc1
		{
			target[] 	= { 4157.383789, 10325.378906, 238.600082 }; 		
			position[] 	= { 4154.673340, 10324.400391, 1.2 }; 				
			date[] 		= { 2017,2,4,12,9 };									
			overcast 	= 0.1;												
			rain 		= 0.2;													
			fov 		= 0.8; 													
			fog 		= 0.1;													
		};
	};
	class Sakhal
	{ 
		class loc1
		{
			target[] 	= { 10979.799805, 11509.299805, 350.431000 }; 		
			position[] 	= { 10981.863281, 11509.379883, 1.1 }; 			
			date[] 		= { 2017,2,4,12,9 };									
			overcast 	= 0.1;												
			rain 		= 0.0;													
			fov 		= 0.8; 													
			fog 		= 0.3;													
		};
	};
	class namalsk
	{
		class loc1
		{
			target[] 	= { 5192.50, 8546.93, 31.01 }; 						
			position[] 	= { 5189.51, 8545.66, 1.1 }; 						
			date[] 		= { 2017,2,4,12,9 };									
			overcast 	= 0.1;												
			rain 		= 0.2;													
			fov 		= 0.8; 													
			fog 		= 0.1;													
		};
	};
	class PNW
	{
		class loc1
		{
			target[] 	= { 8550.91, 8303.23, 12.72 }; 						
			position[] 	= { 8552.62, 8300.06, 1.1 }; 						
			date[] 		= { 2017,2,4,12,9 };									
			overcast 	= 0.1;												
			rain 		= 0.0;													
			fov 		= 0.8; 													
			fog 		= 0.1;													
		};
	};
	class antoria
	{
		class loc1
		{
			target[] 	= { 3072.790039, 6709.390137, 269.989990 }; 		
			position[] 	= { 3071.836426, 6707.950684, 1.1 }; 				
			date[] 		= { 2017,2,4,12,9 };									
			overcast 	= 0.1;												
			rain 		= 0.0;													
			fov 		= 0.8; 													
			fog 		= 0.1;													
		};
	};
};
/* Настройки музыки */
class CfgSoundSets {
	class BLANK_Music_Soundset 
	{
		soundShaders[] 		= { "BLANK_Music_SoundShader" };
		volumeFactor	 	= 1;
		frequencyFactor 	= 1;
		spatial 			= 0;
	};
};
/* Добавление файлов музыки */
class CfgSoundShaders 
{
	class BLANK_Music_SoundShader
	{
		samples[]=
		{			
			{"BlankSoftware_UIConnect\gui\sound\music_menu_1.ogg",1}		// Массив с файлами, добавьте свой, у последнего элемента "," не должно быть!
		};
		volume				= 0.4;											// Громкость
	};
};

/* ------------------------------------------------------------------------------------------------------------------------ */

/* 
BLANKSOFTWARE DayZ Modding

Discord:			https://discord.gg/xt2GGzfFY7
Telegram: 			https://t.me/blanksoftware
Telegram support:	https://t.me/blankdayz

This is private modification.
Use without express permission is prohibited and will be punished.
It is protected by copyright.
*/

/* ------------------------------------------------------------------------------------------------------------------------ */