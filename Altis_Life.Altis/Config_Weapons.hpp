/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			
			{ "arifle_Katiba_C_ACO_pointer_snds_F", "", 50000, 7500 },
			{ "arifle_Mk20C_plain_F", "", 60000, 7500 },
			{ "arifle_Mk20_MRCO_plain_F", "", 70000, 7500 },
			{ "arifle_Katiba_ARCO_pointer_snds_F", "", 80000, 7500 },
			{ "arifle_TRG21_MRCO_F", "", 50000, 7500 },
			
			{ "srifle_DMR_01_DMS_F", "", 100000, 7500 },
			{ "srifle_DMR_01_DMS_snds_BI_F", "", 250000, 7500 },
			
			{ "srifle_EBR_MRCO_LP_BI_F", "", 200000, 7500 },
			{ "srifle_EBR_MRCO_pointer_F", "", 220000, 7500 },
			{ "srifle_EBR_ARCO_pointer_F", "", 230000, 7500 },
			{ "srifle_EBR_SOS_F", "", 250000, 7500 },
			{ "srifle_EBR_ARCO_pointer_snds_F", "", 200000, 7500 },
			{ "srifle_EBR_DMS_pointer_snds_F", "", 300000, 7500 },
			
			{ "arifle_Mk20_plain_F", "", 50000, 7500 },
			{ "arifle_Mk20_MRCO_plain_F", "", 50000, 7500 },
			
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_green", "", 45 },
			{ "30Rnd_556x45_Stanag", "", 45 },
			{ "30Rnd_65x39_caseless_green", "", 45 },
			{ "10Rnd_762x54_Mag", "", 100 },
			{ "20Rnd_762x51_Mag", "", 200 }
        };
    };

    class gang_dhs {
        name = "DHS Gang Armament";
        side = "civ";
        license = "dhs";
        level[] = { "", "", -1, "" };
        items[] = {
			
			{ "srifle_DMR_05_blk_F", "", 500000, 7500 },
			{ "srifle_DMR_05_KHS_LP_F", "", 500000, 7500 },
			
			{ "srifle_DMR_06_camo_khs_F", "", 500000, 7500 },
			
			{ "LMG_Zafir_pointer_F", "", 2000000, 7500 },
			
			{ "LMG_Mk200_LP_BI_F", "", 2500000, 7500 },
			
			{ "bipod_01_F_blk", "", 20000, 500 },
			{ "optic_KHS_blk", "", 50000, 500 },
			
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
			{ "10Rnd_93x64_DMR_05_Mag", "", 450 },
			{ "20Rnd_762x51_Mag", "", 900 },
			{ "150Rnd_762x54_Box_Tracer", "", 10000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 20000 },
        };
    };
	
    class gang {
        name = "Gang Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			
			{ "srifle_DMR_05_blk_F", "", 500000, 7500 },
			{ "srifle_DMR_05_KHS_LP_F", "", 500000, 7500 },
			
			{ "srifle_DMR_06_camo_khs_F", "", 500000, 7500 },
			
			{ "LMG_Zafir_pointer_F", "", 2000000, 7500 },
			
			{ "LMG_Mk200_LP_BI_F", "", 2500000, 7500 },
			
			{ "bipod_01_F_blk", "", 20000, 500 },
			{ "optic_KHS_blk", "", 50000, 500 },
			
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
			{ "10Rnd_93x64_DMR_05_Mag", "", 450 },
			{ "20Rnd_762x51_Mag", "", 900 },
			{ "150Rnd_762x54_Box_Tracer", "", 10000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 20000 },
        };
    };

    class blackmarket_weapons_dhs {
        name = "DHS Black Market Weapons";
        side = "civ";
        license = "dhs";
        level[] = { "", "", -1, "" };
        items[] = {
			
			{ "arifle_MXC_Black_F", "", 200000, 7500 },
			{ "arifle_MX_Black_F", "", 400000, 7500 },
			{ "arifle_MXM_Black_F", "", 1000000, 7500 },
			{ "arifle_MXM_DMS_LP_BI_snds_F", "", 2000000, 7500 },
			
			{ "bipod_01_F_blk", "", 10000, 500 },
			{ "optic_KHS_blk", "", 50000, 500 },
			
			{ "srifle_DMR_03_F", "", 2500000, 7500 },
			{ "srifle_DMR_03_ACO_F", "", 3000000, 7500 },
			{ "srifle_DMR_03_MRCO_F", "", 3000000, 7500 },
			{ "srifle_DMR_03_SOS_F", "", 3500000, 7500 },
			{ "srifle_DMR_03_DMS_F", "", 3500000, 7500 },
			{ "srifle_DMR_03_tan_AMS_LP_F", "", 4000000, 7500 },
			
			{ "arifle_MX_SW_Black_F", "", 1000000, 7500 },
			{ "arifle_MX_SW_Black_Hamr_pointer_F", "", 1500000, 7500 },
			
			{ "MMG_02_black_RCO_BI_F", "", 4000000, 7500 },
			
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 450 },
			{ "20Rnd_762x51_Mag", "", 900 },
			{ "100Rnd_65x39_caseless_mag", "", 4500 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 4500 },
			{ "130Rnd_338_Mag", "", 4500 }
        };
    };
	
    class blackmarket_weapons {
        name = "Black Market Guns";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			
			{ "arifle_MXC_Black_F", "", 200000, 7500 },
			{ "arifle_MX_Black_F", "", 400000, 7500 },
			{ "arifle_MXM_Black_F", "", 1000000, 7500 },
			{ "arifle_MXM_DMS_LP_BI_snds_F", "", 2000000, 7500 },
			
			{ "bipod_01_F_blk", "", 10000, 500 },
			{ "optic_KHS_blk", "", 50000, 500 },
			
			{ "srifle_DMR_03_F", "", 2500000, 7500 },
			{ "srifle_DMR_03_ACO_F", "", 3000000, 7500 },
			{ "srifle_DMR_03_MRCO_F", "", 3000000, 7500 },
			{ "srifle_DMR_03_SOS_F", "", 3500000, 7500 },
			{ "srifle_DMR_03_DMS_F", "", 3500000, 7500 },
			{ "srifle_DMR_03_tan_AMS_LP_F", "", 4000000, 7500 },
			
			{ "arifle_MX_SW_Black_F", "", 1000000, 7500 },
			{ "arifle_MX_SW_Black_Hamr_pointer_F", "", 1500000, 7500 },
			
			{ "MMG_02_black_RCO_BI_F", "", 4000000, 7500 },
			
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 450 },
			{ "20Rnd_762x51_Mag", "", 900 },
			{ "100Rnd_65x39_caseless_mag", "", 4500 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 4500 },
			{ "130Rnd_338_Mag", "", 4500 }
        };
    };
	
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Polizei Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 }
        };
    };

    class cop_pk {
        name = "Altis Kommissar Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Du musst Kommissar sein!" };
        items[] = {
			{ "arifle_sdar_F", "Taser Rifle", 10000, 7500 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
    };

    class cop_pok {
        name = "Altis Oberkommissar Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Du musst Oberkommissar sein!" };
        items[] = {
			{ "arifle_MXC_Black_F", "", 30000, 7500 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag_Tracer", "", 45 }

        };
    };
    
    class cop_phk {
        name = "Altis Hauptkommissar Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Du musst Hauptkommissar sein!" };
        items[] = {
			{ "arifle_MX_Black_F", "", 40000, 7500 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 45 }
        };
    };
    
    class cop_ephk {
        name = "Altis Erster Hauptkommissar Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Du musst Erster Hauptkommissar sein!" };
        items[] = {
			{ "arifle_MXM_Black_F", "", 100000, 7500 },
			{ "arifle_MXM_DMS_LP_BI_snds_F", "", 200000, 7500 },
			{ "bipod_01_F_blk", "", 1000, 500 },
			{ "optic_KHS_blk", "", 20000, 500 }
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 45 }
        };		
    };
    
    class cop_pra {
        name = "Altis Ratanwärter Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Du musst Ratanwärter sein!" };
        items[] = {
			{ "srifle_DMR_03_F", "", 300000, 7500 },
			{ "srifle_DMR_03_ACO_F", "", 350000, 7500 },
			{ "srifle_DMR_03_MRCO_F", "", 350000, 7500 },
			{ "srifle_DMR_03_SOS_F", "", 350000, 7500 },
			{ "srifle_DMR_03_DMS_F", "", 350000, 7500 },
			{ "srifle_DMR_03_tan_AMS_LP_F", "", 400000, 7500 }
        };
        mags[] = {
			{ "20Rnd_762x51_Mag", "", 45 }			
        };		
    };

    class cop_pr {
        name = "Altis Polizeirat Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Du musst Polizeirat sein!" };
        items[] = {
			{ "arifle_MX_SW_Black_F", "", 100000, 7500 },
			{ "arifle_MX_SW_Black_Hamr_pointer_F", "", 150000, 7500 },
			{ "MMG_02_black_RCO_BI_F", "", 400000, 7500 }
        };
        mags[] = {
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 45 },
			{ "130Rnd_338_Mag", "", 45 }
        };		
    };


    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {
		};
    };
};
