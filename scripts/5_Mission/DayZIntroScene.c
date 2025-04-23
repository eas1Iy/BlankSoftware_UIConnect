/* ------------------------------------------------------------------------------------------------------------------------ */

/* 
BLANKSOFTWARE DayZ Modding

Website: 			https://blanksoftware.tech
Discord:			https://discord.gg/xt2GGzfFY7
Telegram: 			https://t.me/blanksoftware
Telegram support:	https://t.me/blankdayz

This is private modification.
Use without express permission is prohibited and will be punished.
It is protected by copyright.
*/

/* ------------------------------------------------------------------------------------------------------------------------ */

modded class DayZIntroScene : Managed
{
	
	/* 
		Маппинг на картах, можете редактировать если знаете что делаете.

		В случае ошибок связанных с изменением этого класса - помощь платная, сорян, но пачкать лапки лишний раз нет желания :(

		За спавн объектов отвечает BS_SpawnObject("ОБЪЕКТ", "КООРДИНАТЫ", "ПОВОРОТ", РАЗМЕР(отключен));
	*/

	protected EntityAI 					obfv_itemCreatedWeapon = NULL;

	void BS_MappingCherno()
	{
		obfv_itemCreatedWeapon = NULL;
		FireplaceBase object_1 = FireplaceBase.Cast(GetGame().CreateObject( "FireplaceForever", "3383.950195 344.805054 6459.984863" )); //skip
		if(object_1)
		{
			object_1.SetOrientation( "0.000000 1.900975 4.497976" ); //skip
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Paper" );
			object_1.GetInventory().CreateAttachment( "Firewood" );
			object_1.GetInventory().CreateAttachment( "WoodenStick" );
			object_1.GetInventory().CreateAttachment( "WoodenStick" );
			object_1.SetStoneCircleState( true );
			object_1.StartFire( true );
		}
		
		ItemBase object_2 = ItemBase.Cast(GetGame().CreateObject( "AK74", "3380.979980 345.748993 6458.990234" )); //skip
		if(object_2)
		{
			object_2.SetOrientation( "121.399979 89.662529 -179.999969" ); //skip
			object_2.GetInventory().CreateAttachment( "AK_WoodHndgrd_Camo" );
			object_2.GetInventory().CreateAttachment( "AK74_WoodBttstck_Camo" );
			object_2.GetInventory().CreateAttachment( "Mag_AK74_45Rnd" );
		}
		
		ItemBase object_3 = ItemBase.Cast(GetGame().CreateObject( "PortableGasLamp", "3380.592285 347.177734 6459.394043" )); //skip
		if(object_3)
		{
			object_3.SetOrientation( "74.702492 -0.000000 -0.000000" ); //skip
			object_3.OnWorkStart();
		}
		
		TentBase object_4 = TentBase.Cast(GetGame().CreateObject( "MediumTent_Green", "3383.685059 344.437164 6455.138672" )); //skip
		if(object_4)
		{
			object_4.SetOrientation("-171.393005 -4.759887 -3.040750"); //skip
			object_4.Pitch(true);
			object_4.GetInventory().CreateAttachment("CamoNet");
		}
		
		TentBase object_5 = TentBase.Cast(GetGame().CreateObject( "PartyTent_Brown", "3378.989990 345.037994 6458.290039" )); //skip
		if(object_5)
		{
			object_5.SetOrientation("170.186981 0.000000 0.000000"); //skip
			object_5.Pitch(true);
			object_5.GetInventory().CreateAttachment("CamoNet");
		}
		
		TripodBase object_6 = TripodBase.Cast(GetGame().CreateObject("Tripod","3383.979980 345.235992 6459.879883")); //skip
		if(object_6)
		{
			object_6.HideAllSelections();
			object_6.ShowSelection("Deployed");
		}

		ItemBase object_7 = ItemBase.Cast(GetGame().CreateObject( "Flashlight", "3389.603271 346.295074 6466.816895" )); //skip
		if(object_7)
		{
			object_7.SetOrientation( "-151.064194 -0.000000 -0.000000" ); //skip
			object_7.OnWorkStart();
		}
		
		ItemBase object_8 = ItemBase.Cast(GetGame().CreateObject( "Flashlight", "3351.042969 347.850647 6504.490234" )); //skip
		if(object_8)
		{
			object_8.SetOrientation( "-165 15.000000 -0.000000" ); //skip
			object_8.OnWorkStart();
		}
		
		PlayerBase bot_1 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Boris", "3388.745850 345.129242 6467.595703", true)); //skip
		if(bot_1)
		{
			bot_1.SetOrientation( "-35 -0.000000 0.000000" ); //skip
			bot_1.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_1.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_1.GetInventory().CreateInInventory("TTSKOPants");
			bot_1.GetInventory().CreateInInventory("TTsKOJacket_Camo");
			bot_1.GetInventory().CreateInInventory("JungleBoots_Green");
			bot_1.GetInventory().CreateInInventory("PlateCarrierVest");
			bot_1.GetHumanInventory().CreateInHands("Glock19");
		}
		
		BS_SpawnObject("Barrel_Yellow", "3381.030029 345.017914 6461.573242", "-57.206226 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("PowerGenerator", "3381.951172 344.605957 6455.449219", "-6.678567 5.507953 2.656559", 1);//skip
		BS_SpawnObject("TacticalBaconCan_Opened", "3381.094238 345.713562 6459.612793", "-118.418190 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("GoatSteakMeat", "3381.117188 345.730499 6459.936035", "-50.047173 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("BearSteakMeat", "3380.952148 345.726105 6460.070801", "-179.314865 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("BearSteakMeat", "3381.097412 345.722260 6460.076172", "92.909149 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("LeatherGloves_Black", "3381.036621 345.681641 6458.590820", "-128.994843 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("TortillaBag", "3381.320068 345.428009 6457.529785", "-123.504990 -50.000862 6.000000", 0.999989);//skip
		BS_SpawnObject("MountainBag_Green", "3381.246094 345.057953 6459.354492", "-23.863995 89.716057 -179.999954", 1);//skip
		BS_SpawnObject("ShelterStick", "3388.991455 345.219208 6467.386230", "70.917526 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Wreck_UH1Y", "3341.503418 347.579071 6512.236816", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_Chair_Camp1", "3380.765137 345.361542 6460.686035", "-80.379990 1.369997 -1.700000", 1);//skip
		BS_SpawnObject("Land_Roadblock_Table", "3380.959961 345.309998 6459.240234", "-98.351601 0.000000 0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_Chair_Camp2", "3381.129395 345.288757 6457.588867", "-129.853439 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3380.756348 345.152008 6458.755371", "171.407288 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3381.096436 345.129395 6458.799316", "171.407288 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3380.921143 345.339417 6458.757324", "112.220505 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3380.970703 344.928467 6458.591797", "-98.282875 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3380.907471 344.923401 6458.997559", "-98.282707 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodAxe", "3381.082520 345.730011 6459.747559", "45.000000 0.000000 -87.500000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_WoodenCrate_3x", "3381.568115 345.336121 6454.340332", "0.000000 5.141161 3.267935", 1);//skip
		BS_SpawnObject("Ammo_545x39", "3381.193604 345.717072 6459.408203", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Ammo_545x39", "3381.101807 345.718170 6459.413574", "50.094795 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("AmmoBox_545x39_20Rnd", "3381.042969 345.719971 6459.486816", "39.999996 89.817612 179.999969", 1);//skip
		BS_SpawnObject("AmmoBox_545x39_20Rnd", "3380.939941 345.739014 6459.479980", "-34.999996 89.670746 179.999954", 1);//skip
		BS_SpawnObject("AmmoBox_545x39_20Rnd", "3380.975586 345.717438 6459.556152", "-34.999996 0.000000 -89.999985", 1);//skip
		BS_SpawnObject("WaterBottle", "3380.763916 345.852264 6459.770508", "-52.744637 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WaterBottle", "3380.666992 345.853607 6459.741211", "158.804230 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WaterBottle", "3380.843994 345.750488 6459.718750", "-51.195992 0.000000 90.000000", 1);//skip
		BS_SpawnObject("Pot", "3383.979980 345.586334 6459.882324", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("CrudeMachete", "3380.840088 345.073669 6455.290039", "77.286491 0.000000 30.000000", 1);//skip
	}

	void BS_MappingEnoch()
	{
		obfv_itemCreatedWeapon = NULL;
		
		FireplaceBase object_1 = FireplaceBase.Cast(GetGame().CreateObject( "Fireplace", "4102.642578 242.122452 10321.817383" )); //skip 
		if(object_1)
		{
			object_1.SetOrientation( "0.000000 0.0 0.0" ); //skip
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Paper" );
			object_1.GetInventory().CreateAttachment( "Firewood" );
			object_1.GetInventory().CreateAttachment( "WoodenStick" );
			object_1.GetInventory().CreateAttachment( "WoodenStick" );
			object_1.SetStoneCircleState( true );
			object_1.StartFire( true );
		}

		PlayerBase bot_1 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Mirek", "4160.323730 239.072800 10313.211914", true)); //skip
		if(bot_1)
		{
			bot_1.SetOrientation( "-15.205626 0.000000 -0.000000" ); //skip
			bot_1.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_1.GetInventory().CreateInInventory("GorkaHelmet_Black");
			bot_1.GetInventory().CreateInInventory("GorkaHelmetVisor");
			bot_1.GetInventory().CreateInInventory("NVGoggles");
			bot_1.GetInventory().CreateInInventory("NVGHeadstrap");
			bot_1.GetInventory().CreateInInventory("TacticalShirt_Black");
			bot_1.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_1.GetInventory().CreateInInventory("CargoPants_Black");
			bot_1.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_1.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_1.GetInventory().CreateInInventory("AssaultBag_Black");
			bot_1.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_1.GetHumanInventory().CreateInHands("Glock19");
		}	
		
		PlayerBase bot_2 = PlayerBase.Cast(GetGame().CreateObject("SurvivorF_Eva", "4157.887695 239.074280 10313.052734", true)); //skip
		if(bot_2)
		{
			bot_2.SetOrientation( "0.000000 0.000000 -0.000000" ); //skip
			bot_2.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_2.GetInventory().CreateInInventory("HunterPants_Brown");
			bot_2.GetInventory().CreateInInventory("HuntingJacket_Brown");
			bot_2.GetInventory().CreateInInventory("LeatherGloves_Black");
			bot_2.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_2.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_2.GetInventory().CreateInInventory("OMNOGloves_Gray");
		}	
		
		PlayerBase bot_3 = PlayerBase.Cast(GetGame().CreateObject("SurvivorF_Keiko", "4159.720703 238.632950 10312.936523", true)); //skip
		if(bot_3)
		{
			bot_3.SetOrientation( "36.520863 0.000000 -0.000000" ); //skip
			bot_3.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_3.GetInventory().CreateInInventory("HunterPants_Autumn");
			bot_3.GetInventory().CreateInInventory("HuntingJacket_Autumn");
			bot_3.GetInventory().CreateInInventory("BalaclavaMask_Black");
		}		
		
		PlayerBase bot_4 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Hassan", "4147.060059 238.587006 10328.900391", true)); //skip
		if(bot_4)
		{
			bot_4.SetOrientation( "171.759995 0.000000 0.000000" ); //skip
			bot_4.GetInventory().CreateInInventory("NBCPantsYellow");
			bot_4.GetInventory().CreateInInventory("NBCBootsYellow");
			bot_4.GetInventory().CreateInInventory("NBCHoodYellow");
			bot_4.GetInventory().CreateInInventory("NBCJacketYellow");
			bot_4.GetInventory().CreateInInventory("GasMask");
			bot_4.GetInventory().CreateInInventory("PlateCarrierVest");
			bot_4.GetInventory().CreateInInventory("PlateCarrierPouches");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_4.GetHumanInventory().CreateInHands("M4A1");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd" ); 	
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_OEBttstck" ); 			
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_RISHndgrd" );				
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_Suppressor" );	
			}
		}
		
		PlayerBase bot_5 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Rolf", "4142.209961 238.570007 10326.599609", true)); //skip
		if(bot_5)
		{
			bot_5.SetOrientation( "0.00000 0.000000 0.000000" ); //skip
			bot_5.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_LOOKOPTICS,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_5.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_5.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_5.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_5.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_5.GetInventory().CreateInInventory("PlateCarrierHolster_Black");
			bot_5.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_5.GetInventory().CreateInInventory("GorkaEJacket_Summer");
			bot_5.GetInventory().CreateInInventory("GorkaPants_Summer");
			bot_5.GetInventory().CreateInInventory("Mich2001Helmet");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_5.GetHumanInventory().CreateInHands("VSS");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PSO1Optic" ); 	
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("Mag_VSS_10Rnd" );	
			}
		}	
		
		BS_SpawnObject("StaticObj_Panel_Concrete_2", "4157.420410 238.4 10313.863281", "130.269836 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Panel_Concrete_2", "4159.077637 238.4 10315.297852", "130.269821 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Wreck_T72_Chassis_DE", "4164.343750 239.362320 10309.301758", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Wreck_T72_Turret", "4167.235840 240.139435 10308.599609", "109.905830 -14.998076 0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Wreck_Decal_Big_NoLC_DE", "4164.683594 238.612320 10308.375000", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Wreck_Ural_DE", "4134.107910 239.537170 10325.883789", "-132.354996 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Wreck_Uaz_DE", "4144.019043 239.362274 10322.191406", "4.046439 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Wreck_BMP2_DE", "4147.067871 239.361191 10341.382813", "19.606239 1.349179 -3.794222", 0.999178);//skip
		BS_SpawnObject("StaticObj_Wreck_Decal_Small2_NoLC_DE", "4133.341797 238.769684 10325.699219", "-137.528671 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Wreck_Decal_Small2_NoLC_DE", "4135.766113 238.656372 10325.695313", "-137.528687 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("StaticObj_Mil_CamoNet_Side_nato", "4160.239258 239.969727 10314.437500", "128.402420 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Stretcher_Green", "4158.862793 238.825836 10312.876953", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Stretcher_Green", "4157.816895 238.825775 10313.093750", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Stretcher_Green", "4156.812012 238.825745 10313.569336", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Stretcher_Green", "4160.225586 238.825836 10313.284180", "159.482880 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Furniture_medical_table", "4155.569824 238.569153 10314.751953", "70.030930 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("CanvasBag_Medical", "4155.524414 239.359955 10315.270508", "-64.999992 0.000000 79.999985", 0.999997);//skip
		BS_SpawnObject("ParamedicJacket_Crimson", "4155.641602 239.580780 10314.669922", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("TetracyclineAntibiotics", "4155.663574 239.585999 10314.916992", "179.999985 89.857346 179.999985", 0.999998);//skip
		BS_SpawnObject("AntiChemInjector", "4155.554199 239.589386 10315.061523", "-74.999992 89.827538 179.999985", 0.999998);//skip
		BS_SpawnObject("VitaminBottle", "4155.411621 239.613892 10314.811523", "-109.508179 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("VitaminBottle", "4155.426270 239.613907 10314.917969", "41.142742 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("BloodSyringe", "4155.365723 239.599136 10315.033203", "-73.090652 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("VomitBloodGround", "4160.125000 238.610947 10314.519531", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("VomitBloodGround", "4156.159668 238.610962 10314.599609", "-151.838409 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("VomitBloodGround", "4156.810547 239.053497 10313.162109", "89.137794 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("VomitBloodGround", "4158.850586 239.053513 10313.109375", "-96.831673 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("BloodBagIV", "4159.720215 238.611435 10314.400391", "179.999985 89.895317 179.999985", 0.999999);//skip
		BS_SpawnObject("Land_Wreck_offroad02_aban1_DE", "4119.289551 239.936401 10351.735352", "-79.813416 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("Land_Wreck_offroad02_aban2_DE", "4125.712891 239.780731 10344.487305", "-169.518692 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_Round", "4114.237793 238.638626 10353.726563", "155.935349 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_Round", "4097.683105 238.620758 10338.958008", "104.523804 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_6m", "4105.221191 238.619110 10346.934570", "-42.877266 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Land_Wreck_offroad02_aban2_DE", "4118.967773 239.776993 10344.006836", "42.660015 0.183198 -0.000000", 0.999997);//skip
		BS_SpawnObject("Land_Wreck_offroad02_aban1_DE", "4106.280273 240.150833 10331.379883", "52.376572 -9.995953 0.183244", 0.999995);//skip
		BS_SpawnObject("Land_Wreck_C130J_Cargo", "4101.801270 243.182709 10328.069336", "52.589809 -0.183014 0.183244", 0.999992);//skip
		BS_SpawnObject("StaticObj_Misc_Chair_Camp1", "4159.314941 239.056305 10316.582031", "12.574072 -0.000000 -0.000000", 1);//skip
	}

	void BS_MappingSakhal()
	{
		obfv_itemCreatedWeapon = NULL;
		
		FireplaceBase object_1 = FireplaceBase.Cast(GetGame().CreateObject( "Fireplace", "10992.012695 350.044617 11506.476563" )); //skip 
		if(object_1)
		{
			object_1.SetOrientation( "0.000000 0.000000 -0.000000" ); //skip
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Stone" );
			object_1.GetInventory().CreateAttachment( "Paper" );
			object_1.GetInventory().CreateAttachment( "Firewood" );
			object_1.GetInventory().CreateAttachment( "WoodenStick" );
			object_1.GetInventory().CreateAttachment( "WoodenStick" );
			object_1.SetStoneCircleState( true );
			object_1.StartFire( true );
		}

		PlayerBase bot_1 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Boris", "10978.599609 350.431000 11517.799805", true)); //skip
		if(bot_1)
		{
			bot_1.SetOrientation( "-42.622501 0.000000 0.000000" ); //skip
			bot_1.GetInventory().CreateInInventory("PolicePants");
			bot_1.GetInventory().CreateInInventory("BushlatPoliceJacket_Blue");
			bot_1.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_1.GetInventory().CreateInInventory("WorkingGloves_Black");
			bot_1.GetInventory().CreateInInventory("WinterCoif_Black");
			bot_1.GetInventory().CreateInInventory("HikingBootsLow_Black");
		}
		
		PlayerBase bot_2 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Cyril", "10992.400391 350.429993 11505.400391", true)); //skip
		if(bot_2)
		{
			bot_2.SetOrientation( "-35.985897 0.000000 0.000000" ); //skip
			bot_2.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_SITA,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_2.GetInventory().CreateInInventory("HunterPants_Brown");
			bot_2.GetInventory().CreateInInventory("HuntingJacket_Brown");
			bot_2.GetInventory().CreateInInventory("LeatherGloves_Black");
			bot_2.GetInventory().CreateInInventory("Balaclava3Holes_Beige");
			bot_2.GetInventory().CreateInInventory("BallisticHelmet_Woodland");
			bot_2.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_2.GetInventory().CreateInInventory("OMNOGloves_Gray");
			bot_2.GetInventory().CreateInInventory("PoliceVest");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_2.GetHumanInventory().CreateInHands("SV98");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("ACOGOptic" );
			}
		}
		
		PlayerBase bot_3 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Denis", "10992.900391 350.429993 11507.299805", true)); //skip
		if(bot_3)
		{
			bot_3.SetOrientation( "-129.630981 0.000000 0.000000" ); //skip
			bot_3.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_SITA,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_3.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_3.GetInventory().CreateInInventory("HunterPants_Autumn");
			bot_3.GetInventory().CreateInInventory("HuntingJacket_Autumn");
			bot_3.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_3.GetInventory().CreateInInventory("Mich2001Helmet");
			bot_3.GetInventory().CreateInInventory("PlateCarrierVest");
			bot_3.GetInventory().CreateInInventory("PlateCarrierPouches");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_3.GetHumanInventory().CreateInHands("AK101");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("AK_Bayonet" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("AK_RailHndgrd" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("AK_PlasticBttstck" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("UniversalLight" );
			}
		}
		
		PlayerBase bot_4 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Elias", "11009.000000 350.429993 11517.400391", true)); //skip
		if(bot_4)
		{
			bot_4.SetOrientation( "167.544983 0.000000 0.000000" ); //skip
			bot_4.GetInventory().CreateInInventory("PolicePants");
			bot_4.GetInventory().CreateInInventory("BushlatPoliceJacket_Blue");
			bot_4.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_4.GetInventory().CreateInInventory("WorkingGloves_Black");
			bot_4.GetInventory().CreateInInventory("WinterCoif_Black");
			bot_4.GetInventory().CreateInInventory("HikingBootsLow_Black");
			bot_4.GetInventory().CreateInInventory("PoliceVest");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_4.GetHumanInventory().CreateInHands("M4A1");
			if (obfv_itemCreatedWeapon)															
			{	
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_OEBttstck" ); 			
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_RISHndgrd" );				
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_Suppressor" );	
			}
		}
		
		PlayerBase bot_5 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Francis", "11009.200195 350.429993 11516.400391", true)); //skip
		if(bot_5)
		{
			bot_5.SetOrientation( "-30.507599 0.000000 0.000000" ); //skip
			bot_5.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_5.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_5.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_5.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_5.GetInventory().CreateInInventory("PlateCarrierHolster_Black");
			bot_5.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_5.GetInventory().CreateInInventory("GorkaEJacket_Summer");
			bot_5.GetInventory().CreateInInventory("GorkaPants_Summer");
			bot_5.GetInventory().CreateInInventory("Mich2001Helmet");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_5.GetHumanInventory().CreateInHands("VSS");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PSO1Optic" );
			}
		}
		
		BS_SpawnObject("Land_wreck_sed02_aban1_police", "10984.077148 351.173859 11514.171875", "109.272972 0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("Land_Wreck_Lada_Green", "10995.016602 350.936981 11506.533203", "70.624001 0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Land_Misc_FireBarrel_Green", "10991.902344 351.619812 11506.730469", "0.000000 0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Land_Wreck_Mi8_Civilian", "11020.848633 350.105469 11520.042969", "37.982758 -0.469998 0.601968", 0.99997);//skip
		BS_SpawnObject("EngineOil", "10984.314453 350.829010 11513.884766", "-154.787979 3.499990 -10.000000", 0.999997);//skip
	}

	void BS_MappingNamalsk()
	{
		obfv_itemCreatedWeapon = NULL;
		
		FireplaceBase object_1 = FireplaceBase.Cast(GetGame().CreateObject( "FireplaceForever", "5194.202148 31.914879 8522.593750" )); //skip
		if(object_1)
		{
			object_1.SetOrientation( "0.0 0.0 0.0" ); //skip
			object_1.GetInventory().CreateAttachment( "Firewood" );
			object_1.GetInventory().CreateAttachment( "WoodenStick" );
			object_1.StartFire( true );
		}
		
		FireplaceBase object_2 = FireplaceBase.Cast(GetGame().CreateObject( "FireplaceForever", "5194.202148 31.914879 8522.593750" )); //skip
		if(object_2)
		{
			object_2.SetOrientation( "0.0 0.0 0.0" ); //skip
			object_2.GetInventory().CreateAttachment( "Firewood" );
			object_2.GetInventory().CreateAttachment( "WoodenStick" );
			object_2.StartFire( true );
		}
		
		PlayerBase bot_1 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Mirek", "5185.116211 30.975128 8551.941406", true)); //skip
		if(bot_1)
		{
			bot_1.SetOrientation( "0.000000 0.000000 0.000000" ); //skip
			bot_1.StartCommand_Action(DayZPlayerConstants.CMD_ACTIONFB_STARTFIRE,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_1.GetInventory().CreateInInventory("GorkaHelmet_Black");
			bot_1.GetInventory().CreateInInventory("GorkaHelmetVisor");
			bot_1.GetInventory().CreateInInventory("NVGoggles");
			bot_1.GetInventory().CreateInInventory("NVGHeadstrap");
			bot_1.GetInventory().CreateInInventory("TacticalShirt_Black");
			bot_1.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_1.GetInventory().CreateInInventory("CargoPants_Black");
			bot_1.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_1.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_1.GetInventory().CreateInInventory("AssaultBag_Black");
			bot_1.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_1.GetHumanInventory().CreateInHands("Glock19");
		}
		PlayerBase bot_2 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Lewis", "5184.067871 31.006145 8557.742188", true)); //skip
		if(bot_2)
		{
			bot_2.SetOrientation( "-190.737885 0.000000 0.000000" ); //skip
			bot_2.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_SITB,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_2.GetInventory().CreateInInventory("HunterPants_Brown");
			bot_2.GetInventory().CreateInInventory("HuntingJacket_Brown");
			bot_2.GetInventory().CreateInInventory("LeatherGloves_Black");
			bot_2.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_2.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_2.GetInventory().CreateInInventory("OMNOGloves_Gray");
		}
		PlayerBase bot_3 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Mirek", "5194.854004 31.009991 8546.210938", true)); //skip
		if(bot_3)
		{
			bot_3.SetOrientation( "176.112518 0.000000 0.000000" ); //skip
			bot_3.StartCommand_Action(DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_3.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_3.GetInventory().CreateInInventory("HunterPants_Autumn");
			bot_3.GetInventory().CreateInInventory("HuntingJacket_Autumn");
			bot_3.GetInventory().CreateInInventory("BalaclavaMask_Black");
		}
		PlayerBase bot_4 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Niki", "5195.088867 32.158939 8522.653320", true)); //skip
		if(bot_4)
		{
			bot_4.SetOrientation( "-10.730405 0.000000 0.000000" ); //skip
			bot_4.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_LOOKOPTICS,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_4.GetInventory().CreateInInventory("BalaclavaMask_Green");
			bot_4.GetInventory().CreateInInventory("TacticalGloves_Green");
			bot_4.GetInventory().CreateInInventory("TacticalShirt_Olive");
			bot_4.GetInventory().CreateInInventory("CargoPants_Green");
			bot_4.GetInventory().CreateInInventory("PlateCarrierVest_Green");
			bot_4.GetInventory().CreateInInventory("PlateCarrierPouches_Green");
			bot_4.GetInventory().CreateInInventory("JungleBoots_Black");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_4.GetHumanInventory().CreateInHands("SVD");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PSO1Optic");
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("AK_Suppressor" );	
			}	
		}	
		
		BS_SpawnObject("land_misc_barel_fire_4", "5194.933105 31.495489 8545.411133", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("land_misc_barel_fire_4", "5194.204102 32.595432 8522.583984", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Wreck_UH1Y", "5182.705566 32.457977 8564.341797", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_WoodenCrate_5x", "5194.778809 33.028610 8520.622070", "54.514191 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Misc_WoodenCrate_3x", "5195.984863 32.834133 8521.598633", "-37.376789 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("land_wrecked_bmp2", "5187.089844 32.058498 8525.790039", "-159.779984 0.000000 3.000000", 0.999998);//skip
		BS_SpawnObject("land_wrecked_uaz", "5195.318848 31.844864 8551.772461", "23.723219 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("StaticObj_Misc_BagFence_3m", "5184.085938 31.326298 8552.382813", "-25.380077 -0.000000 -0.000000", 0.999999);//skip	
	}
 
	void BS_MappingPNW()
	{
		PlayerBase bot_1 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Lewis", "8557.310547 12.731080 8320.562500", true)); //skip
		if(bot_1)
		{
			bot_1.SetOrientation( "0.000000 0.000000 0.000000" ); //skip
			bot_1.StartCommand_Action(DayZPlayerConstants.CMD_GESTUREFB_LOOKOPTICS,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_1.GetInventory().CreateInInventory("GorkaHelmet_Black");
			bot_1.GetInventory().CreateInInventory("GorkaHelmetVisor");
			bot_1.GetInventory().CreateInInventory("NVGoggles");
			bot_1.GetInventory().CreateInInventory("NVGHeadstrap");
			bot_1.GetInventory().CreateInInventory("TacticalShirt_Black");
			bot_1.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_1.GetInventory().CreateInInventory("CargoPants_Black");
			bot_1.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_1.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_1.GetInventory().CreateInInventory("AssaultBag_Black");
			bot_1.GetInventory().CreateInInventory("JungleBoots_Black");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_1.GetHumanInventory().CreateInHands("SVD");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PSO1Optic");
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("AK_Suppressor" );	
			}
		}
		PlayerBase bot_2 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Jose", "8553.591797 12.738268 8283.104492", true)); //skip
		if(bot_2)
		{
			bot_2.SetOrientation( "67.078201 0.000000 0.000000" ); //skip
			bot_2.StartCommand_Action(DayZPlayerConstants.CMD_ACTIONINT_INTERRUPT,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_2.GetInventory().CreateInInventory("GorkaHelmet_Black");
			bot_2.GetInventory().CreateInInventory("GorkaHelmetVisor");
			bot_2.GetInventory().CreateInInventory("TacticalShirt_Black");
			bot_2.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_2.GetInventory().CreateInInventory("CargoPants_Black");
			bot_2.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_2.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_2.GetInventory().CreateInInventory("AssaultBag_Black");
			bot_2.GetInventory().CreateInInventory("JungleBoots_Black");	
		}
		PlayerBase bot_3 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Seth", "8549.835938 12.735948 8312.753906", true)); //skip
		if(bot_3)
		{
			bot_3.SetOrientation( "58.434212 0.000000 0.000000" ); //skip
			bot_3.StartCommand_Action( DayZPlayerConstants.CMD_GESTUREFB_SITA,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT );
			bot_3.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_3.GetInventory().CreateInInventory("BalaclavaMask_Black");
			bot_3.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_3.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_3.GetInventory().CreateInInventory("PlateCarrierHolster_Black");
			bot_3.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_3.GetInventory().CreateInInventory("GorkaEJacket_Summer");
			bot_3.GetInventory().CreateInInventory("GorkaPants_Summer");
			bot_3.GetInventory().CreateInInventory("Mich2001Helmet");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_3.GetHumanInventory().CreateInHands("VSS");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PSO1Optic" ); 	
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("Mag_VSS_10Rnd" );	
			}
		}
		PlayerBase bot_4 = PlayerBase.Cast(GetGame().CreateObject("SurvivorF_Irena", "8563.980469 15.513267 8339.200195", true)); //skip
		if(bot_4)
		{
			bot_4.SetOrientation( "0.000000 0.000000 0.000000" ); //skip
			bot_4.StartCommand_Action(DayZPlayerConstants.CMD_ACTIONFB_STARTFIRE,EmoteCB,DayZPlayerConstants.STANCEMASK_ERECT);
			bot_4.GetInventory().CreateInInventory("GorkaHelmet_Black");
			bot_4.GetInventory().CreateInInventory("GorkaHelmetVisor");
			bot_4.GetInventory().CreateInInventory("TacticalShirt_Black");
			bot_4.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_4.GetInventory().CreateInInventory("CargoPants_Black");
			bot_4.GetInventory().CreateInInventory("PlateCarrierVest_Black");
			bot_4.GetInventory().CreateInInventory("PlateCarrierPouches_Black");
			bot_4.GetInventory().CreateInInventory("AssaultBag_Black");
			bot_4.GetInventory().CreateInInventory("JungleBoots_Black");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_4.GetHumanInventory().CreateInHands("SVD");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PSO1Optic");
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("AK_Suppressor" );	
			}
		}
		PlayerBase bot_5 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Rolf", "8555.144531 12.718040 8336.835938", true)); //skip
		if(bot_5)
		{
			bot_5.SetOrientation( "21.402237 0.000000 0.000000" ); //skip
			bot_5.GetInventory().CreateInInventory("NBCPantsYellow");
			bot_5.GetInventory().CreateInInventory("NBCBootsYellow");
			bot_5.GetInventory().CreateInInventory("NBCHoodYellow");
			bot_5.GetInventory().CreateInInventory("NBCJacketYellow");
			bot_5.GetInventory().CreateInInventory("GasMask");
			bot_5.GetInventory().CreateInInventory("PlateCarrierVest");
			bot_5.GetInventory().CreateInInventory("PlateCarrierPouches");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_5.GetHumanInventory().CreateInHands("M4A1");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd" ); 	
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_OEBttstck" ); 			
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_RISHndgrd" );				
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_Suppressor" );	
			}
		}	

		BS_SpawnObject("StaticObj_Roadblock_Pillbox", "8563.010742 13.850205 8293.389648", "106.860634 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Roadblock_CncBlocks_Long", "8557.969727 13.412521 8293.414063", "-61.991810 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Wreck_BMP1", "8558.850586 13.829185 8295.540039", "88.158951 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("StaticObj_Roadblock_Bags_Long", "8569.849609 12.891765 8295.522461", "-110.676086 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Roadblock_Bags_Curve", "8572.958984 13.673476 8298.049805", "-167.754333 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Roadblock_Bags_Long", "8572.503906 11.973813 8302.352539", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Roadblock_Bags_EndL", "8572.266602 12.871683 8304.414063", "-149.215851 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Roadblock_Bags_EndR", "8567.741211 13.613330 8295.095703", "-122.887978 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("StaticObj_Misc_ConcreteBlock2_Damaged", "8552.977539 13.082680 8316.124023", "25.428074 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Misc_ConcreteBlock2_Damaged", "8553.500977 13.081911 8346.147461", "15.348907 -0.000000 -0.000000", 0.999996);//skip
		BS_SpawnObject("StaticObj_Misc_ConcreteBlock2_Damaged", "8557.045898 13.082513 8321.979492", "-4.744461 -0.000000 -0.000000", 0.999996);//skip
		BS_SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "8563.102539 14.787917 8337.112305", "-177.378616 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Mil_Artilery_Rampart", "8546.238281 12.982842 8329.469727", "102.092010 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Mil_Artilery_Rampart", "8547.496094 12.979326 8338.813477", "93.072311 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_4m", "8564.958008 13.137486 8330.500000", "-82.247391 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_4m", "8564.291016 13.137347 8326.960938", "109.987770 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_Round", "8561.446289 13.184344 8323.444336", "-30.152948 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Misc_ConcreteBlock2_Damaged", "8558.166992 13.081892 8346.886719", "-21.504066 -0.000000 -0.000000", 0.999995);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_1m", "8551.183594 13.157990 8343.674805", "-82.100624 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_1m", "8552.736328 13.158161 8343.401367", "-82.100624 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_1m", "8554.513672 13.157295 8341.940430", "-172.115479 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_1m", "8554.500977 13.158168 8343.503906", "113.951187 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Land_Mil_GuardBox_Green", "8594.444336 14.114792 8318.818359", "-89.648773 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("Land_Mil_GuardBox_Green", "8600.370117 14.114536 8287.773438", "-67.465179 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("Land_Mil_GuardBox_Green", "8628.116211 14.114612 8340.238281", "-112.441719 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Wreck_BMP2", "8552.698242 13.540741 8339.276367", "178.664413 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_1m", "8554.421875 13.157174 8340.393555", "-178.475449 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Mil_HBarrier_1m", "8554.493164 13.158795 8338.852539", "5.706899 -0.000000 -0.000000", 0.999997);//skip
		BS_SpawnObject("StaticObj_Wreck_Trailer_Cistern", "8560.531250 12.630864 8327.507813", "-49.573872 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("StaticObj_Wreck_Ural", "8559.718750 13.721432 8318.735352", "-137.739655 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Wreck_Uaz_DE", "8548.659180 13.486295 8312.322266", "144.740463 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("Land_Wreck_hb01_aban1_green_DE", "8551.142578 13.697032 8264.799805", "-162.198822 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Land_Wreck_sed02_aban2_yellow_DE", "8554.731445 13.314180 8289.572266", "-179.067230 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Land_Wreck_sed01_aban2_white_DE", "8555.538086 13.415209 8285.222656", "-154.211136 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Land_Wreck_hb02_aban1_blue_DE", "8554.649414 13.438809 8279.635742", "-169.437347 -0.000000 -0.000000", 1);//skip	
	}

	void BS_MappingAntoria()
	{
		PlayerBase bot_1 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Denis", "3067.933594 269.980072 6701.761230", true)); //skip
		if(bot_1)
		{
			bot_1.SetOrientation( "66.025642 0.000000 0.000000" ); //skip
			bot_1.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_1.GetInventory().CreateInInventory("GorkaPants_UK");
			bot_1.GetInventory().CreateInInventory("GorkaEJacket_UK");
			bot_1.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_1.GetInventory().CreateInInventory("Balaclava3Holes_UK");
			bot_1.GetInventory().CreateInInventory("Mich2001Helmet_UK");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_1.GetInventory().CreateInInventory("PlateCarrierVest_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PlateCarrierPouches_UK" );
			}
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_1.GetHumanInventory().CreateInHands("M4A1");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("ACOGOptic" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_MPBttstck");
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_RISHndgrd" );	
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("UniversalLight" );	
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_Suppressor" );	
			}
		}
		
		PlayerBase bot_2 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Quinn", "3072.832031 269.980316 6697.87", true)); //skip
		if(bot_2)
		{
			bot_2.SetOrientation( "23.896168 0.000000 0.000000" ); //skip
			bot_2.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_2.GetInventory().CreateInInventory("GorkaPants_UK");
			bot_2.GetInventory().CreateInInventory("GorkaEJacket_UK");
			bot_2.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_2.GetInventory().CreateInInventory("FaceCover_Improvised_UK");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_2.GetInventory().CreateInInventory("Mich2001Helmet_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("NVGoggles" );
			}
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_2.GetInventory().CreateInInventory("PlateCarrierVest_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PlateCarrierPouches_UK" );
			}
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_2.GetHumanInventory().CreateInHands("M4A1");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_OEBttstck");
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_RISHndgrd" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("UniversalLight" );
			}	
		}		
		
		PlayerBase bot_3 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Lewis", "3077.973145 269.974884 6691.869629", true)); //skip
		if(bot_3)
		{
			bot_3.SetOrientation( "-136.284332 0.000000 0.000000" ); //skip
			bot_3.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_3.GetInventory().CreateInInventory("GorkaPants_UK");
			bot_3.GetInventory().CreateInInventory("GorkaEJacket_UK");
			bot_3.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_3.GetInventory().CreateInInventory("FaceCover_Improvised_UK");
			bot_3.GetHumanInventory().CreateInHands("WoodenCrate");
		}
		
		PlayerBase bot_4 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Guo", "3076.116211 269.979980 6692.979004", true)); //skip
		if(bot_4)
		{
			bot_4.SetOrientation( "-95.203522 0.000000 0.000000" ); //skip
			bot_4.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_4.GetInventory().CreateInInventory("GorkaPants_UK");
			bot_4.GetInventory().CreateInInventory("GorkaEJacket_UK");
			bot_4.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_4.GetInventory().CreateInInventory("FaceCover_Improvised_UK");
			bot_4.GetHumanInventory().CreateInHands("Barrel_Green");
		}
		
		PlayerBase bot_5 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Oliver", "3068.168457 269.980042 6727.974121", true)); //skip
		if(bot_5)
		{
			bot_5.SetOrientation( "0.000000 0.000000 0.000000" ); //skip
			bot_5.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_5.GetInventory().CreateInInventory("TortillaBag_UK");
			bot_5.GetInventory().CreateInInventory("GorkaPants_UK");
			bot_5.GetInventory().CreateInInventory("GorkaEJacket_UK");
			bot_5.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_5.GetInventory().CreateInInventory("FaceCover_Improvised_UK");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_5.GetInventory().CreateInInventory("Mich2001Helmet_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("NVGoggles" );
			}
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_5.GetInventory().CreateInInventory("PlateCarrierVest_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PlateCarrierPouches_UK" );
			}
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_5.GetHumanInventory().CreateInHands("M4A1");
			if (obfv_itemCreatedWeapon)															
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_OEBttstck");
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("M4_RISHndgrd" );
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("UniversalLight" );
			}
		}
		
		PlayerBase bot_6 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Manua", "3074.290527 269.980011 6725.635254", true)); //skip
		if(bot_6)
		{
			bot_6.SetOrientation( "-13.628604 0.000000 0.000000" ); //skip
			bot_6.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_6.GetInventory().CreateInInventory("TortillaBag_UK");
			bot_6.GetInventory().CreateInInventory("GorkaPants_UK");
			bot_6.GetInventory().CreateInInventory("GorkaEJacket_UK");
			bot_6.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_6.GetInventory().CreateInInventory("FaceCover_Improvised_UK");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_6.GetInventory().CreateInInventory("Mich2001Helmet_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("NVGoggles" );
			}
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_6.GetInventory().CreateInInventory("PlateCarrierVest_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PlateCarrierPouches_UK" );
			}
		}
		
		PlayerBase bot_7 = PlayerBase.Cast(GetGame().CreateObject("SurvivorM_Seth", "3076.826172 269.980042 6726.788086", true)); //skip
		if(bot_7)
		{
			bot_7.SetOrientation( "-32.461071 0.000000 0.000000" ); //skip
			bot_7.GetInventory().CreateInInventory("TacticalGloves_Black");
			bot_7.GetInventory().CreateInInventory("TortillaBag_UK");
			bot_7.GetInventory().CreateInInventory("GorkaPants_UK");
			bot_7.GetInventory().CreateInInventory("GorkaEJacket_UK");
			bot_7.GetInventory().CreateInInventory("JungleBoots_Black");
			bot_7.GetInventory().CreateInInventory("FaceCover_Improvised_UK");
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_7.GetInventory().CreateInInventory("Mich2001Helmet_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("NVGoggles" );
			}
			obfv_itemCreatedWeapon = NULL;
			obfv_itemCreatedWeapon = bot_7.GetInventory().CreateInInventory("PlateCarrierVest_UK");
			if(obfv_itemCreatedWeapon)
			{
				obfv_itemCreatedWeapon.GetInventory().CreateAttachment("PlateCarrierPouches_UK" );
			}
		}
		
		CarScript car_1 = CarScript.Cast(GetGame().CreateObject("Truck_01_Covered_Orange", "3070.658203 269.980225 6694.165527", true)); //skip
		if(car_1)
		{
			car_1.SetOrientation("-153.440170 -1.554913 -1.297257"); //skip
			car_1.GetInventory().CreateAttachment( "Truck_01_Wheel" );
			car_1.GetInventory().CreateAttachment( "Truck_01_Wheel" );
			car_1.GetInventory().CreateAttachment( "Truck_01_WheelDouble" );
			car_1.GetInventory().CreateAttachment( "Truck_01_WheelDouble" );
			car_1.GetInventory().CreateAttachment( "Truck_01_WheelDouble" );
			car_1.GetInventory().CreateAttachment( "Truck_01_WheelDouble" );
			car_1.GetInventory().CreateAttachment( "Truck_01_Door_1_1" );
			car_1.GetInventory().CreateAttachment( "Truck_01_Door_2_1" );
			car_1.GetInventory().CreateAttachment( "Truck_01_Hood" );
		}
		
		CarScript car_2 = CarScript.Cast(GetGame().CreateObject("Offroad_02", "3077.263916 270.009674 6710.539551", true)); //skip
		if(car_2)
		{
			car_2.SetOrientation("-56.974422 0.103983 0.012544"); //skip
			car_2.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_2.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_2.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_2.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_2.GetInventory().CreateInInventory("Offroad_02_Door_1_1");
			car_2.GetInventory().CreateInInventory("Offroad_02_Door_1_2");
			car_2.GetInventory().CreateInInventory("Offroad_02_Door_2_1");
			car_2.GetInventory().CreateInInventory("Offroad_02_Door_2_2");
			car_2.GetInventory().CreateInInventory("Offroad_02_Hood");
			car_2.GetInventory().CreateInInventory("Offroad_02_Trunk");
			car_2.GetInventory().CreateInInventory("HeadlightH7");
			car_2.GetInventory().CreateInInventory("HeadlightH7");
			car_2.ToggleHeadlights();
		}
		
		CarScript car_3 = CarScript.Cast(GetGame().CreateObject("Offroad_02", "3069.609375 270.013977 6730.974121", true)); //skip
		if(car_3)
		{
			car_3.SetOrientation("178.369949 0.162245 0.038246"); //skip
			car_3.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_3.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_3.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_3.GetInventory().CreateInInventory("Offroad_02_Wheel");
			car_3.GetInventory().CreateInInventory("Offroad_02_Door_1_1");
			car_3.GetInventory().CreateInInventory("Offroad_02_Door_1_2");
			car_3.GetInventory().CreateInInventory("Offroad_02_Door_2_1");
			car_3.GetInventory().CreateInInventory("Offroad_02_Door_2_2");
			car_3.GetInventory().CreateInInventory("Offroad_02_Hood");
			car_3.GetInventory().CreateInInventory("Offroad_02_Trunk");
			car_3.GetInventory().CreateInInventory("HeadlightH7");
			car_3.GetInventory().CreateInInventory("HeadlightH7");
			car_3.ToggleHeadlights();
		}
		
		ItemBase object_1 = ItemBase.Cast(GetGame().CreateObject("M16A2","3067.989014 270.799866 6703.907227",true)); //skip
		if(object_1)
		{
			object_1.SetOrientation( "-130.080994 89.797287 -179.999985" ); //skip
			object_1.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd" );
		}	
		ItemBase object_2 = ItemBase.Cast(GetGame().CreateObject("PortableGasLamp","3067.687500 270.775665 6703.299316",true)); //skip
		if(object_2)
		{
			object_2.SetOrientation( "0.000000 -0.000000 -0.000000" ); //skip
		}
		ItemBase object_3 = ItemBase.Cast(GetGame().CreateObject("Mich2001Helmet_UK","3068.051025 270.773041 6703.296875",true)); //skip
		if(object_3)
		{
			object_3.SetOrientation( "-27.108055 -0.000000 -0.000000" ); //skip
			object_3.GetInventory().CreateAttachment("NVGoggles" );
		}	
		ItemBase object_4 = ItemBase.Cast(GetGame().CreateObject("PlateCarrierVest_UK","3068.843262 270.651001 6703.109375",true)); //skip
		if(object_4)
		{
			object_4.SetOrientation( "42.239300 -8.999916 -69.499992" ); //skip
			object_4.GetInventory().CreateAttachment("PlateCarrierPouches_UK" );
		}
		
		BS_SpawnObject("Land_Roadblock_Table", "3067.899658 270.375336 6704.163574", "-90.441101 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("TacticalBaconCan_Opened", "3068.062500 270.768616 6704.402832", "61.130661 -0.000000 -0.000000", 0.999997);//skip
		BS_SpawnObject("TacticalBaconCan", "3067.657715 270.769897 6704.552246", "37.480358 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("TacticalBaconCan", "3067.633057 270.769897 6704.629883", "155.780945 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("SodaCan_Empty", "3067.770020 270.802002 6704.500000", "-139.999985 89.844231 -179.999985", 0.999998);//skip
		BS_SpawnObject("SodaCan_Spite", "3067.750000 270.822174 6704.612305", "-32.761902 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("TunaCan", "3067.688965 270.769501 6704.407227", "-96.002380 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("Hatchet", "3067.946777 270.783447 6704.878906", "-69.999992 89.809227 -179.999985", 0.999996);//skip
		BS_SpawnObject("Mag_STANAGCoupled_30Rnd", "3067.679932 270.825989 6703.720215", "-76.163002 89.771004 -179.999985", 0.999996);//skip
		BS_SpawnObject("Mag_STANAG_30Rnd", "3067.939941 270.781006 6704.140137", "149.999985 89.842979 -179.999985", 0.999998);//skip
		BS_SpawnObject("AmmoBox_556x45_20Rnd", "3067.649902 270.771454 6703.470215", "-55.097992 89.723747 -179.999985", 0.999994);//skip
		BS_SpawnObject("AmmoBox_556x45_20Rnd", "3067.570068 270.770996 6703.439941", "-30.098001 89.560753 -179.999985", 0.999994);//skip
		BS_SpawnObject("Ammo_556x45", "3067.717773 270.774231 6703.539063", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("Ammo_556x45", "3067.575684 270.774231 6703.545898", "-112.261513 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("Ammo_556x45", "3067.957031 270.774231 6704.022461", "63.686478 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("Ammo_556x45", "3067.872314 270.774231 6704.112305", "164.476074 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("AmmoBox", "3067.624512 270.878326 6703.915527", "101.611633 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("StaticObj_Misc_Chair_Camp1", "3068.745605 270.449799 6703.116699", "130.951447 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_Chair_Camp1", "3068.290771 270.332581 6704.690430", "69.832870 -0.000000 -0.000000", 0.999997);//skip
		BS_SpawnObject("StaticObj_Misc_SupplyBox2_DE", "3068.071045 270.826355 6700.458008", "-90.229530 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_SupplyBox2_DE", "3068.250732 270.826172 6699.095703", "-178.482361 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_SupplyBox1_DE", "3068.259521 270.593689 6697.691895", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_SupplyBox3_DE", "3068.417236 270.844391 6695.951172", "-51.606060 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Misc_SupplyBox2_DE", "3068.986084 270.301971 6700.496094", "-88.874969 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("Land_WoodBox1", "3068.993652 270.979797 6700.376465", "-34.604183 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_ammoboxes_big", "3075.999756 270.945282 6685.910645", "0.000000 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_ammoboxes_big", "3075.174561 270.945282 6689.258301", "-169.772491 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3077.487061 269.966034 6690.966797", "101.552071 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3076.574951 269.966034 6691.205078", "-99.120827 -0.000000 -0.000000", 0.999999);//skip
		BS_SpawnObject("WoodenCrate", "3077.009766 270.193481 6691.083008", "-79.070503 -0.000000 -0.000000", 0.999998);//skip
		BS_SpawnObject("WoodenCrate", "3077.584717 269.980011 6691.398438", "101.552071 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3077.561035 270.207458 6691.394043", "101.552071 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3077.420410 270.425232 6690.999023", "101.552071 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("WoodenCrate", "3075.563721 270.193604 6691.293945", "-83.173508 -0.000000 -0.000000", 0.999991);//skip
		BS_SpawnObject("WoodenCrate", "3075.679932 269.980133 6691.733887", "97.448387 -0.000000 -0.000000", 0.999991);//skip
		BS_SpawnObject("WoodenCrate", "3075.653076 270.207581 6691.728516", "97.448219 -0.000000 -0.000000", 0.999995);//skip
		BS_SpawnObject("WoodenCrate", "3075.541992 270.425354 6691.323730", "97.448387 -0.000000 -0.000000", 0.999991);//skip
		BS_SpawnObject("WoodenCrate", "3075.611084 269.966156 6691.294922", "97.448387 -0.000000 -0.000000", 0.999991);//skip
		BS_SpawnObject("WoodenCrate", "3074.993896 269.980103 6691.595215", "7.990620 -0.000000 -0.000000", 0.999991);//skip
		BS_SpawnObject("land_evg_SU27_noGear", "3196.359863 300.376740 6614.228027", "90.881187 20.999979 0.000000", 0.999999);//skip
		BS_SpawnObject("flip_power_armor", "3078.860107 270.156006 6690.689941", "32.531002 -89.820862 -179.999985", 0.999998);//skip
		BS_SpawnObject("Land_Bag_1", "3067.120117 270.704376 6705.970215", "-26.991001 -89.808197 -179.999985", 0.999997);//skip
		BS_SpawnObject("Land_wreck_truck01_aban1_green", "3096.629150 269.905457 6709.970215", "119.242996 -0.000000 -0.000000", 1);//skip
		BS_SpawnObject("StaticObj_Wreck_BMP2", "3063.817627 270.763397 6713.093750", "-138.666199 0.000000 -0.000000", 1);//skip
		BS_SpawnObject("land_evg_SU27_Camo2", "3068.580078 313.899170 6713.680176", "176.615997 -0.000100 -30.000000", 0.999991);//skip
		BS_SpawnObject("StaticObj_Wreck_UH1Y", "3078.269531 271.785797 6730.101074", "43.707462 -0.000000 -0.000000", 0.999997);//skip
	}

	/* НЕ ТРОГАТЬ */
	void BS_SpawnObject( string type, vector position, vector orientation, float size = 1)
	{
		auto obj = GetGame().CreateObject( type, position, ECE_CREATEPHYSICS );
		obj.SetPosition( position );
		obj.SetOrientation( orientation );
		if( obj.CanAffectPathgraph() ) GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( GetGame().UpdatePathgraphRegionByObject, 100, false, obj );
	}
};
/* ------------------------------------------------------------------------------------------------------------------------ */

/* 
BLANKSOFTWARE DayZ Modding

Website: 			https://blanksoftware.tech
Discord:			https://discord.gg/xt2GGzfFY7
Telegram: 			https://t.me/blanksoftware
Telegram support:	https://t.me/blankdayz

This is private modification.
Use without express permission is prohibited and will be punished.
It is protected by copyright.
*/

/* ------------------------------------------------------------------------------------------------------------------------ */
