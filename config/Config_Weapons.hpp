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
            { "hgun_Rook40_F", "", 6500, 500, { "", "", -1 } },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, { "", "", -1 } },
            { "hgun_ACPC2_F", "", 11500, -1, { "", "", -1 } },
            { "hgun_PDW2000_F", "", 20000, -1, { "", "", -1 } }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, { "", "", -1 } },
            { "9Rnd_45ACP_Mag", "", 45, 100, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "", 75, 100, { "", "", -1 } }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, { "", "", -1 } }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_PDW2000_F", "", 27500, -1 },
			{ "arifle_AK12_F", "", 500000, -1},
			{ "arifle_TRG21_F", "", 30000, -1 }, //5.56
			{ "arifle_sdar_F", "", 27500, -1 },
			{ "arifle_AK12_F", "", 37500, -1 },
			{ "arifle_AKM_F", "", 37500, -1 },
			{ "arifle_AKS_F", "", 30000, -1 },
			{ "arifle_CTAR_blk_F", "", 37500, -1 },
			{ "arifle_CTARS_blk_F", "", 50000, -1 },
			{ "arifle_MX_SW_F", "", 40000, -1 }, //6.5
			{ "arifle_MX_F", "", 32500, -1 },
			{ "arifle_MXC_F", "", 32500, -1 },
			{ "arifle_MXM_F", "", 37500, -1 },
			{ "arifle_Katiba_F", "", 30000, -1 },
			{ "LMG_Mk200_F", "", 60000, -1 },
			{ "srifle_DMR_01_F", "", 95000, -1 }, //7.62
			{ "srifle_DMR_07_blk_F", "", 50000, -1 },
			{ "srifle_DMR_07_ghex_F", "", 50000, -1 },
			{ "srifle_EBR_F", "", 75000, -1 },
			{ "srifle_DMR_06_camo_F", "", 75000, -1 },
			{ "srifle_DMR_06_camo_khs_F", "", 75000, -1 },
			{ "srifle_DMR_03_multicam_F", "", 75000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 75000, -1 },
			{ "srifle_DMR_03_woodland_F", "", 75000, -1 },
			{ "LMG_Zafir_F", "", 80000, -1 },
			{ "srifle_DMR_02_F", "", 90000, -1 }, //.338
			{ "srifle_DMR_02_camo_F", "", 90000, -1 },
			{ "srifle_DMR_02_sniper_F", "", 90000, -1 },
			{ "MMG_02_sand_F", "", 90000, -1 },
			{ "MMG_01_hex_F", "", 200000, -1 },
			{ "MMG_01_tan_F", "", 200000, -1 },
			{ "srifle_DMR_05_hex_F", "", 150000, -1 },
			{ "srifle_DMR_05_tan_f", "", 150000, -1 },
			{ "arifle_ARX_blk_F", "", 250000, -1 },
			{ "srifle_LRR_F", "", 180000, -1 }, 
			{ "srifle_GM6_F", "", 250000, -1 },
		    { "srifle_GM6_ghex_F", "", 250000, -1 },
			{ "ToolKit", "", 250 }, 
			{ "FirstAidKit", "", 125 },
			{ "NVGoggles", "", 750 },
			{ "NVGogglesB_grn_F", "", 750, -1 },
			{ "NVGogglesB_blk_F", "", 750, -1 },
			{ "NVGogglesB_gry_F", "", 750, -1 },
			{ "Binocular", "", 250 },
			{ "ItemGPS", "", 500 },
			{ "ItemCompass", "", 250 },
			{ "RangeFinder", "", 1000 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 100 },
			{ "30Rnd_556x45_Stanag", "", 100 }, 
			{ "30Rnd_762x39_Mag_F", "", 1000, 35, { "", "", -1 } },
			{ "20Rnd_556x45_UW_mag", "", 350 },
			{ "30Rnd_545x39_Mag_F", "", 350 },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 350 },
			{ "100Rnd_65x39_caseless_mag", "", 500 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 500 },
			{ "30Rnd_65x39_caseless_mag", "", 300 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 300 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 300 },
			{ "30Rnd_762x39_Mag_F", "", 300 },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 300 },
			{ "30Rnd_580x42_Mag_F", "", 300 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 300 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 300 },
			{ "10Rnd_50BW_Mag_F", "", 8000 },
			{ "100Rnd_580x42_Mag_F", "", 500 },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 500 },
			{ "30Rnd_65x39_caseless_green", "", 300 },
			{ "200Rnd_65x39_cased_Box", "", 800 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 800 },
			{ "10Rnd_762x54_Mag", "", 500 }, 
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "150Rnd_762x54_Box", "", 800 },
			{ "150Rnd_762x54_Box_Tracer", "", 800 },
			{ "10Rnd_338_Mag", "", 750 },
			{ "130Rnd_338_Mag", "", 500 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 750 },
			{ "5Rnd_127x108_Mag", "", 1000 },
			{ "7Rnd_408_Mag", "", 1000 },
			{ "RPG32_F", "", 25000 },
			{ "RPG32_HE_F", "", 25000 },
			{ "10Rnd_50BW_Mag_F", "", 25000 },
			{ "150Rnd_93x64_Mag", "", 500 },
        };
		accs[] = {
            { "optic_ACO_grn_smg", "", 250 }, //Scopes
			{ "optic_Holosight_smg", "", 250 },
			{ "optic_ACO_grn", "", 250 },
			{ "optic_Aco", "", 250 },
			{ "optic_Hamr", "", 300 },
			{ "optic_Holosight", "", 200 },
			{ "optic_MRCO", "", 250 },
			{ "optic_SOS", "", 500 },
			{ "optic_NVS", "", 750 },
			{ "optic_LRPS", "", 1200 },
			{ "optic_DMS", "", 350 },
			{ "optic_KHS_hex", "", 1000 },
			{ "optic_KHS_blk", "", 1000 },
			{ "optic_KHS_old", "", 1000 },
			{ "optic_KHS_tan", "", 1000 },
			{ "optic_AMS", "", 1000 },
			{ "optic_AMS_khk", "", 1000 },
			{ "optic_AMS_snd", "", 1000 },
			{ "optic_TWS", "", 1000 },
			{ "optic_NightStalker", "", 1000 },
			{ "muzzle_snds_L", "", 150 }, //Silencers
			{ "muzzle_snds_M", "", 500 },
			{ "muzzle_snds_H", "", 500 },
			{ "muzzle_snds_B", "", 500 },
			{ "muzzle_snds_H_MG", "", 500 },
			{ "muzzle_snds_338_black", "", 500 },
			{ "muzzle_snds_338_green", "", 500 },
			{ "muzzle_snds_338_sand", "", 500 },
			{ "muzzle_snds_93mmg", "", 500 },
			{ "muzzle_snds_93mmg_tan", "", 500 },
			{ "optic_Arco_blk_F", "", 500 },
			{ "optic_Arco_ghex_F", "", 500 },
			{ "optic_DMS_ghex_F", "", 500 },
			{ "optic_ERCO_blk_F", "", 500 },
			{ "optic_ERCO_khk_F", "", 500 },
			{ "optic_ERCO_snd_F", "", 500 },
			{ "optic_Hamr_khk_F", "", 500 },
			{ "optic_Holosight_blk_F", "", 500 },
			{ "optic_LRPS_ghex_F", "", 500 },
			{ "optic_Holosight_khk_F", "", 500 },
			{ "optic_LRPS_tna_F", "", 500 },
			{ "optic_SOS_khk_F", "", 500 },
			{ "muzzle_snds_65_TI_blk_F", "", 500 },
			{ "muzzle_snds_58_wdm_F", "", 500 },
			{ "muzzle_snds_B_khk_F", "", 500 },
			{ "muzzle_snds_B_snd_F", "", 500 },
			{ "muzzle_snds_H_MG_khk_F", "", 500 },
			{ "muzzle_snds_H_MG_blk_F", "", 500 },
			{ "muzzle_snds_65_TI_ghex_F", "", 500 },
			{ "muzzle_snds_65_TI_hex_F", "", 500 },
			{ "bipod_01_F_khk", "", 500 },
			{ "acc_pointer_IR", "", 150 }, //Attachments
			{ "acc_flashlight", "", 150 },
			{ "bipod_03_F_blk", "", 1000 }, //Bipods
			{ "bipod_02_F_blk", "", 1000 },
			{ "bipod_01_F_blk", "", 1000 },
			{ "bipod_02_F_hex", "", 1000 },
			{ "bipod_01_F_mtp", "", 1000 },
			{ "bipod_03_F_oli", "", 1000 },
			{ "bipod_01_F_snd", "", 1000 },
			{ "bipod_02_F_tan", "", 1000 }
        };
    };
	
    class adv_rebel {
        name = "Advanced Rebel Weapons";
        side = "civ";
        license = "adv_rebel";
        level[] = { "", "", -1, "" };
        items[] = {
		  { "arifle_AK12_F", "", 500000, -1},
		  { "LMG_03_F", "", 750000, -1},
		  { "LMG_Mk200_F", "", 800000, -1},
		  { "srifle_EBR_F", "", 825000, -1},
		  { "arifle_MX_SW_F", "", 875000, -1},
          { "arifle_MX_Black_F", "", 300000, 75000, { "", "", -1 } },
          { "arifle_MXM_Black_F", "", 450000, 90000, { "", "", -1 } },
          { "srifle_DMR_01_F", "Rahim 7.62 mm", 750000, 21000, { "", "", -1 } },
          { "FirstAidKit", "First Aid Kit", 250, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1000, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 500, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 100, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 100, 0, { "", "", -1 } },
          { "ItemMap", "Map", 100, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 6000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 2000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 2500, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 2500, 0, { "", "", -1 } }
        };
        mags[] = {
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1 } },
		  { "30Rnd_762x39_Mag_F", "", 1000, 35, { "", "", -1 } },
		  { "200Rnd_556x45_Box_F", "", 4500 },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1 } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1 } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1 } },
          { "30Rnd_580x42_Mag_F", "30rnd 5.8mm", 800, 80, { "", "", -1 } },
          { "30Rnd_580x42_Mag_Tracer_F", "30rnd 5.8mm (Tracer Green)", 800, 80, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 1000, 100, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag", "6.5mm 30Rnd STANAG Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm 30Rnd Tracer (Red) Mag", 1500, 150, { "", "", -1 } },
          { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 1750, 150, { "", "", -1 } },
          { "10Rnd_762x54_Mag", "7.62mm 10Rnd Mag", 2000, 200, { "", "", -1 } },
          { "20Rnd_762x51_Mag", "7.62mm 20Rnd Mag", 2000, 200, { "", "", -1 } }
        };
        accs[] = {
          { "acc_flashlight", "Flashlight", 15000, 1500, { "", "", -1 } },
          { "optic_Aco", "ACO (Red)", 15000, 1500, { "", "", -1 } },
          { "optic_ACO_grn", "ACO (Green)", 15000, 1500, { "", "", -1 } },
          { "optic_Aco_smg", "ACO SMG (Red)", 15000, 1500, { "", "", -1 } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 25000, 2500, { "", "", -1 } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 8000, 800, { "", "", -1 } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 10000, 1000, { "", "", -1 } },
          { "acc_pointer_IR", "IR Laser Pointer", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 20000, 2000, { "", "", -1 } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 20000, 2000, { "", "", -1 } },
          { "optic_Arco_blk_F", "ARCO (Black)", 25000, 2500, { "", "", -1 } },
          { "optic_Arco", "ARCO (Sand)", 25000, 2500, { "", "", -1 } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 25000, 2500, { "", "", -1 } },
          { "optic_Hamr", "RCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_Hamr_khk_F", "RCO (Khaki)", 30000, 3000, { "", "", -1 } },
          { "optic_MRCO", "MRCO", 35000, 3500, { "", "", -1 } },
          { "muzzle_snds_m_khk_F", "Suppressor (5.56mm) (Khaki)", 30000, 3000, { "", "", -1 } },
          { "muzzle_snds_H", "Suppressor (6.5mm) (Black)", 30000, 3000, { "", "", -1 } },
          { "bipod_01_F_snd", "Bipod (Sand) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_blk", "Bipod (Black) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_mtp", "Bipod (MTP) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_blk", "Bipod (Black) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_tan", "Bipod (Tan) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_hex", "Bipod (Hex) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_03_F_blk", "Bipod (Black) [AAF]", 15000, 1500, { "", "", -1 } },
          { "bipod_03_F_oli", "Bipod (Olive) [AAF]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_khk", "Bipod (Khaki) [NATO]", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_H_khk_F", "Suppressor (6.5mm) (Khaki)", 45000, 4500, { "", "", -1 } },
          { "optic_ERCO_blK_F", "ERCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_snd_F", "ERCO (Sand)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_khk_F", "ERCO (Khaki)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG", "Suppressor MX SW (6.5 mm) (Tan)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG_blk_F", "Suppressor MX SW (6.5mm) (Black)", 65000, 6500, { "", "", -1 } },
          { "optic_DMS", "DMS", 50000, 5000, { "", "", -1 } },
          { "optic_DMS_ghex_F", "DMS (Greenhex)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_H_MG_khk_F", "Suppressor MX SW (6.5mm) (Khaki)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_B_snd_F", "Suppressor (7.62mm) (Sand)", 85000, 8500, { "", "", -1 } },
          { "muzzle_snds_B", "Suppressor (7.62mm) (Black)", 85000, 8500, { "", "", -1 } },
          { "muzzle_snds_B_khk_F", "Suppressor (7.62mm) (Khaki)", 85000, 8500, { "", "", -1 } },
          { "optic_AMS_snd", "AMS (Sand)", 40000, 4000, { "", "", -1 } },
          { "optic_AMS_khk", "AMS (Khaki)", 40000, 4000, { "", "", -1 } }
        };
    };
	
    class gang_1 {
        name = "Gang Base Weapon's";
        side = "civ";
        license = "gang_1";
        level[] = { "", "", -1, "" };
        items[] = {
		  { "arifle_AK12_F", "", 350000, -1},
		  { "arifle_SDAR_F", "", 100000, -1},
		  { "LMG_03_F", "", 650000, -1},
		  { "srifle_EBR_F", "", 400000, -1},
		  { "arifle_MX_SW_F", "", 550000, -1},
          { "arifle_MX_Black_F", "", 300000, 75000, { "", "", -1 } },
          { "arifle_MXM_Black_F", "", 425000, 90000, { "", "", -1 } },
          { "srifle_DMR_01_F", "Rahim 7.62 mm", 600000, 21000, { "", "", -1 } },
          { "arifle_Mk20_plain_F", "Mk20 5.56 mm", 150000, 4000, { "", "", -1 } },
          { "SMG_05_F", "Protector 9mm", 80000, 3500, { "", "", -1 } },
          { "arifle_AKS_F", "AKS-74U 5.45mm", 225000, 4000, { "", "", -1 } },
          { "arifle_SDAR_F", "SDAR 5.56 mm", 100000, 2500, { "", "", -1 } },
          { "arifle_TRG21_F", "TRG-21 5.56 mm (lb)", 150000, 5500, { "", "", -1 } },
          { "arifle_TRG20_F", "TRG-20 5.56 mm (sb)", 150000, 5500, { "", "", -1 } },
          { "arifle_Katiba_F", "Katiba 6.5 mm", 125000, 8500, { "", "", -1 } },
          { "arifle_Katiba_C_F", "Katiba Carbine 6.5 mm", 120000, 8500, { "", "", -1 } },
          { "arifle_MX_F", "MX 6.5 mm (Sand)", 225000, 12000, { "", "", -1 } },
          { "FirstAidKit", "First Aid Kit", 250, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1000, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 500, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 100, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 100, 0, { "", "", -1 } },
          { "ItemMap", "Map", 100, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 6000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 2000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 2500, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 2500, 0, { "", "", -1 } }
        };
        mags[] = {
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1 } },
		  { "30Rnd_762x39_Mag_F", "", 1000, 35, { "", "", -1 } },
		  { "200Rnd_556x45_Box_F", "", 4500 },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1 } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1 } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1 } },
          { "30Rnd_580x42_Mag_F", "30rnd 5.8mm", 800, 80, { "", "", -1 } },
          { "30Rnd_580x42_Mag_Tracer_F", "30rnd 5.8mm (Tracer Green)", 800, 80, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 1000, 100, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag", "6.5mm 30Rnd STANAG Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm 30Rnd Tracer (Red) Mag", 1500, 150, { "", "", -1 } },
          { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 1750, 150, { "", "", -1 } },
          { "10Rnd_762x54_Mag", "7.62mm 10Rnd Mag", 2000, 200, { "", "", -1 } },
          { "20Rnd_762x51_Mag", "7.62mm 20Rnd Mag", 2000, 200, { "", "", -1 } }
        };
        accs[] = {
          { "acc_flashlight", "Flashlight", 15000, 1500, { "", "", -1 } },
          { "optic_Aco", "ACO (Red)", 15000, 1500, { "", "", -1 } },
          { "optic_ACO_grn", "ACO (Green)", 15000, 1500, { "", "", -1 } },
          { "optic_Aco_smg", "ACO SMG (Red)", 15000, 1500, { "", "", -1 } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 25000, 2500, { "", "", -1 } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 8000, 800, { "", "", -1 } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 10000, 1000, { "", "", -1 } },
          { "acc_pointer_IR", "IR Laser Pointer", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 20000, 2000, { "", "", -1 } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 20000, 2000, { "", "", -1 } },
          { "optic_Arco_blk_F", "ARCO (Black)", 25000, 2500, { "", "", -1 } },
          { "optic_Arco", "ARCO (Sand)", 25000, 2500, { "", "", -1 } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 25000, 2500, { "", "", -1 } },
          { "optic_Hamr", "RCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_Hamr_khk_F", "RCO (Khaki)", 30000, 3000, { "", "", -1 } },
          { "optic_MRCO", "MRCO", 35000, 3500, { "", "", -1 } },
          { "muzzle_snds_m_khk_F", "Suppressor (5.56mm) (Khaki)", 30000, 3000, { "", "", -1 } },
          { "muzzle_snds_H", "Suppressor (6.5mm) (Black)", 30000, 3000, { "", "", -1 } },
          { "bipod_01_F_snd", "Bipod (Sand) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_blk", "Bipod (Black) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_mtp", "Bipod (MTP) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_blk", "Bipod (Black) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_tan", "Bipod (Tan) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_hex", "Bipod (Hex) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_03_F_blk", "Bipod (Black) [AAF]", 15000, 1500, { "", "", -1 } },
          { "bipod_03_F_oli", "Bipod (Olive) [AAF]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_khk", "Bipod (Khaki) [NATO]", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_H_khk_F", "Suppressor (6.5mm) (Khaki)", 45000, 4500, { "", "", -1 } },
          { "optic_ERCO_blK_F", "ERCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_snd_F", "ERCO (Sand)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_khk_F", "ERCO (Khaki)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG", "Suppressor MX SW (6.5 mm) (Tan)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG_blk_F", "Suppressor MX SW (6.5mm) (Black)", 65000, 6500, { "", "", -1 } },
          { "optic_DMS", "DMS", 50000, 5000, { "", "", -1 } },
          { "optic_DMS_ghex_F", "DMS (Greenhex)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_H_MG_khk_F", "Suppressor MX SW (6.5mm) (Khaki)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_B_snd_F", "Suppressor (7.62mm) (Sand)", 85000, 8500, { "", "", -1 } },
          { "muzzle_snds_B", "Suppressor (7.62mm) (Black)", 85000, 8500, { "", "", -1 } },
          { "muzzle_snds_B_khk_F", "Suppressor (7.62mm) (Khaki)", 85000, 8500, { "", "", -1 } },
          { "optic_AMS_snd", "AMS (Sand)", 40000, 4000, { "", "", -1 } },
          { "optic_AMS_khk", "AMS (Khaki)", 40000, 4000, { "", "", -1 } }
        };
    };
	
    class gang_2 {
        name = "Gang Base Weapon's";
        side = "civ";
        license = "gang_2";
        level[] = { "", "", -1, "" };
        items[] = {
		  { "arifle_AK12_F", "", 250000, -1},
		  { "arifle_SDAR_F", "", 80000, -1},
		  { "LMG_03_F", "", 275000, -1},
		  { "srifle_EBR_F", "", 300000, -1},
		  { "arifle_MX_SW_F", "", 450000, -1},
          { "arifle_MX_Black_F", "", 150000, 75000, { "", "", -1 } },
          { "arifle_MXM_Black_F", "", 175000, 90000, { "", "", -1 } },
          { "srifle_DMR_01_F", "Rahim 7.62 mm", 210000, 21000, { "", "", -1 } },
          { "arifle_Mk20_plain_F", "Mk20 5.56 mm", 80000, 4000, { "", "", -1 } },
          { "SMG_05_F", "Protector 9mm", 45000, 3500, { "", "", -1 } },
          { "arifle_AKS_F", "AKS-74U 5.45mm", 125000, 4000, { "", "", -1 } },
          { "arifle_SDAR_F", "SDAR 5.56 mm", 90000, 2500, { "", "", -1 } },
          { "arifle_TRG21_F", "TRG-21 5.56 mm (lb)", 85000, 5500, { "", "", -1 } },
          { "arifle_TRG20_F", "TRG-20 5.56 mm (sb)", 85000, 5500, { "", "", -1 } },
          { "arifle_Katiba_F", "Katiba 6.5 mm", 85000, 8500, { "", "", -1 } },
          { "arifle_Katiba_C_F", "Katiba Carbine 6.5 mm", 85000, 8500, { "", "", -1 } },
          { "arifle_MX_F", "MX 6.5 mm (Sand)", 120000, 12000, { "", "", -1 } },
          { "FirstAidKit", "First Aid Kit", 250, 0, { "", "", -1 } },
          { "ItemGPS", "GPS", 1000, 0, { "", "", -1 } },
          { "Binocular", "Binoculars", 500, 0, { "", "", -1 } },
          { "ItemCompass", "Compass", 100, 0, { "", "", -1 } },
          { "ItemWatch", "Watch", 100, 0, { "", "", -1 } },
          { "ItemMap", "Map", 100, 0, { "", "", -1 } },
          { "Rangefinder", "Rangefinder", 6000, 0, { "", "", -1 } },
          { "NVGoggles", "NV Goggles (Brown)", 2000, 0, { "", "", -1 } },
          { "NVGoggles_OPFOR", "NV Goggles (Black)", 2500, 0, { "", "", -1 } },
          { "NVGoggles_INDEP", "NV Goggles (Green)", 2500, 0, { "", "", -1 } }
        };
        mags[] = {
          { "30Rnd_9x21_Mag", "30rnd 9mm", 350, 35, { "", "", -1 } },
		  { "30Rnd_762x39_Mag_F", "", 1000, 35, { "", "", -1 } },
		  { "200Rnd_556x45_Box_F", "", 4500 },
          { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm (Protector)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30rnd 9mm (Protector)(Tgreen)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30rnd 9mm (Protector)(Tred)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30rnd 9mm (Protector)(Tyellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Green_Mag", "30rnd 9mm (Tracer Green)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Red_Mag", "30rnd 9mm (Tracer Red)", 450, 45, { "", "", -1 } },
          { "30Rnd_9x21_Yellow_Mag", "30rnd 9mm (Tracer Yellow)", 450, 45, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01", ".45 ACP 30Rnd Vermin Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 30Rnd Vermin Tracers (Green) Mag", 500, 50, { "", "", -1 } },
          { "30Rnd_545x39_Mag_F", "30rnd 5.45mm", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_Green_F", "30rnd 5.45mm (Tracer Green)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Tracer_F", "30rnd 5.45mm (Tracer Yellow)", 700, 70, { "", "", -1 } },
          { "30Rnd_545x39_Mag_Green_F", "30rnd 5.45mm Green", 700, 70, { "", "", -1 } },
          { "20Rnd_556x45_UW_mag", "20rnd 5.56 SDAR Ammo", 300, 30, { "", "", -1 } },
          { "30Rnd_556x45_Stanag", "30rnd 5.56mm", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Green", "30rnd 5.56mm (Tracer Green)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Red", "30rnd 5.56mm (Tracer Red)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_Tracer_Yellow", "30rnd 5.56mm (Tracer Yellow)", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_green", "30rnd 5.56mm Green", 600, 60, { "", "", -1 } },
          { "30Rnd_556x45_Stanag_red", "30rnd 5.56mm Red", 600, 60, { "", "", -1 } },
          { "30Rnd_580x42_Mag_F", "30rnd 5.8mm", 800, 80, { "", "", -1 } },
          { "30Rnd_580x42_Mag_Tracer_F", "30rnd 5.8mm (Tracer Green)", 800, 80, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green", "6.5mm 30Rnd Caseless Mag", 1000, 100, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag", "6.5mm 30Rnd STANAG Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5mm 30Rnd Tracer (Green) Mag", 1500, 150, { "", "", -1 } },
          { "30Rnd_65x39_caseless_mag_Tracer", "6.5mm 30Rnd Tracer (Red) Mag", 1500, 150, { "", "", -1 } },
          { "20Rnd_650x39_Cased_Mag_F", "6.5mm CMR 76 ", 1750, 150, { "", "", -1 } },
          { "10Rnd_762x54_Mag", "7.62mm 10Rnd Mag", 2000, 200, { "", "", -1 } },
          { "20Rnd_762x51_Mag", "7.62mm 20Rnd Mag", 2000, 200, { "", "", -1 } }
        };
        accs[] = {
          { "acc_flashlight", "Flashlight", 15000, 1500, { "", "", -1 } },
          { "optic_Aco", "ACO (Red)", 15000, 1500, { "", "", -1 } },
          { "optic_ACO_grn", "ACO (Green)", 15000, 1500, { "", "", -1 } },
          { "optic_Aco_smg", "ACO SMG (Red)", 15000, 1500, { "", "", -1 } },
          { "optic_ACO_grn_smg", "ACO SMG (Green)", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_L", "Suppressor (9 mm)", 25000, 2500, { "", "", -1 } },
          { "optic_Holosight_blk_F", "MK17 Holosight (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight", "MK17 Holosight (Sand)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_khk_F", "MK17 Holosight (Khaki)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg_blk_F", "MK17 Holosight SMG (Black)", 8000, 800, { "", "", -1 } },
          { "optic_Holosight_smg", "Mk17 Holosight SMG (Tan)", 8000, 800, { "", "", -1 } },
          { "muzzle_snds_acp", "Suppressor (.45 ACP)", 10000, 1000, { "", "", -1 } },
          { "acc_pointer_IR", "IR Laser Pointer", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_m_snd_F", "Suppressor (5.56mm) (Sand)", 20000, 2000, { "", "", -1 } },
          { "muzzle_snds_M", "Suppressor (5.56mm) (Black)", 20000, 2000, { "", "", -1 } },
          { "optic_Arco_blk_F", "ARCO (Black)", 25000, 2500, { "", "", -1 } },
          { "optic_Arco", "ARCO (Sand)", 25000, 2500, { "", "", -1 } },
          { "optic_Arco_ghex_F", "ARCO (Greenhex)", 25000, 2500, { "", "", -1 } },
          { "optic_Hamr", "RCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_Hamr_khk_F", "RCO (Khaki)", 30000, 3000, { "", "", -1 } },
          { "optic_MRCO", "MRCO", 35000, 3500, { "", "", -1 } },
          { "muzzle_snds_m_khk_F", "Suppressor (5.56mm) (Khaki)", 30000, 3000, { "", "", -1 } },
          { "muzzle_snds_H", "Suppressor (6.5mm) (Black)", 30000, 3000, { "", "", -1 } },
          { "bipod_01_F_snd", "Bipod (Sand) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_blk", "Bipod (Black) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_mtp", "Bipod (MTP) [NATO]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_blk", "Bipod (Black) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_tan", "Bipod (Tan) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_02_F_hex", "Bipod (Hex) [CSAT]", 15000, 1500, { "", "", -1 } },
          { "bipod_03_F_blk", "Bipod (Black) [AAF]", 15000, 1500, { "", "", -1 } },
          { "bipod_03_F_oli", "Bipod (Olive) [AAF]", 15000, 1500, { "", "", -1 } },
          { "bipod_01_F_khk", "Bipod (Khaki) [NATO]", 15000, 1500, { "", "", -1 } },
          { "muzzle_snds_H_khk_F", "Suppressor (6.5mm) (Khaki)", 45000, 4500, { "", "", -1 } },
          { "optic_ERCO_blK_F", "ERCO (Black)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_snd_F", "ERCO (Sand)", 30000, 3000, { "", "", -1 } },
          { "optic_ERCO_khk_F", "ERCO (Khaki)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG", "Suppressor MX SW (6.5 mm) (Tan)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_H_MG_blk_F", "Suppressor MX SW (6.5mm) (Black)", 65000, 6500, { "", "", -1 } },
          { "optic_DMS", "DMS", 50000, 5000, { "", "", -1 } },
          { "optic_DMS_ghex_F", "DMS (Greenhex)", 50000, 5000, { "", "", -1 } },
          { "muzzle_snds_H_MG_khk_F", "Suppressor MX SW (6.5mm) (Khaki)", 65000, 6500, { "", "", -1 } },
          { "muzzle_snds_B_snd_F", "Suppressor (7.62mm) (Sand)", 85000, 8500, { "", "", -1 } },
          { "muzzle_snds_B", "Suppressor (7.62mm) (Black)", 85000, 8500, { "", "", -1 } },
          { "muzzle_snds_B_khk_F", "Suppressor (7.62mm) (Khaki)", 85000, 8500, { "", "", -1 } },
          { "optic_AMS_snd", "AMS (Sand)", 40000, 4000, { "", "", -1 } },
          { "optic_AMS_khk", "AMS (Khaki)", 40000, 4000, { "", "", -1 } }
        };
    };
	
    class black {
        name = "Black Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_MXC_Black_F", "", 250000, 50000, { "", "", -1 } },
            { "arifle_ARX_blk_F", "", 275000, 60000, { "", "", -1 } },
            { "arifle_MX_Black_F", "", 300000, 75000, { "", "", -1 } },
            { "arifle_MXM_Black_F", "", 350000, 90000, { "", "", -1 } },
            { "arifle_SPAR_01_blk_F", "", 450000, 100000, { "", "", -1 } },
            { "arifle_SPAR_02_blk_F", "", 450000, 125000, { "", "", -1 } },
            { "srifle_EBR_F", "", 500000, 150000, { "", "", -1 } },
            { "arifle_SPAR_03_blk_F", "", 550000, 200000, { "", "", -1 } },
            { "srifle_DMR_06_camo_F", "", 650000, 225000, { "", "", -1 } },
            { "srifle_DMR_07_blk_F", "", 750000, 250000, { "", "", -1 } },
            { "arifle_MX_SW_Black_F", "", 800000, 300000, { "", "", -1 } },
            { "srifle_DMR_02_F", "", 1000000, 300000, { "", "", -1 } }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 2500 },
            { "30Rnd_65x39_caseless_green", "", 2500 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "150Rnd_556x45_Drum_Mag_F", "", 20000 },
            { "20Rnd_762x51_Mag", "", 12500 },
            { "20Rnd_650x39_Cased_Mag_F", "", 2500 },
            { "100Rnd_65x39_caseless_mag", "", 5000 },
            { "10Rnd_338_Mag", "", 10000 }
        };
        accs[] = {
            { "optic_Aco_smg", "", 10000 },
            { "optic_Holosight_smg", "", 5000 },
            { "optic_Arco", "", 5000 },
            { "optic_Hamr", "", 5000 },
            { "optic_MRCO", "", 5000 },
            { "optic_DMS", "", 5000 },
            { "optic_MOS", "", 10000 },
            { "optic_tws", "", 0, 5000 },
            { "bipod_01_F_blk", "", 10000 },
            { "acc_flashlight", "", 10000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, { "", "", -1 } },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, { "", "", -1 } },
            { "hgun_ACPC2_F", "", 4500, -1, { "", "", -1 } },
            { "hgun_PDW2000_F", "", 9500, -1, { "", "", -1 } }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, { "", "", -1 } },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, { "", "", -1 } },
            { "9Rnd_45ACP_Mag", "", 45, 100, { "", "", -1 } },
            { "30Rnd_9x21_Mag", "", 75, 100, { "", "", -1 } }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, { "", "", -1 } }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1, { "", "", -1 } },
            { "ItemGPS", "", 100, 45, { "", "", -1 } },
            { "ItemMap", "", 50, 35, { "", "", -1 } },
            { "ItemCompass", "", 50, 25, { "", "", -1 } },
            { "ItemWatch", "", 50, -1, { "", "", -1 } },
            { "FirstAidKit", "", 150, 65, { "", "", -1 } },
            { "NVGoggles", "", 2000, 980, { "", "", -1 } },
            { "Chemlight_red", "", 300, -1, { "", "", -1 } },
            { "Chemlight_yellow", "", 300, 50, { "", "", -1 } },
            { "Chemlight_green", "", 300, 50, { "", "", -1 } },
            { "Chemlight_blue", "", 300, 50, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1, { "", "", -1 } },
            { "ItemGPS", "", 500, 45, { "", "", -1 } },
            { "ItemMap", "", 250, 35, { "", "", -1 } },
            { "ItemCompass", "", 250, 25, { "", "", -1 } },
            { "ItemWatch", "", 250, -1, { "", "", -1 } },
            { "FirstAidKit", "", 750, 65, { "", "", -1 } },
            { "NVGoggles", "", 10000, 980, { "", "", -1 } },
            { "Chemlight_red", "", 1500, -1, { "", "", -1 } },
            { "Chemlight_yellow", "", 1500, 50, { "", "", -1 } },
            { "Chemlight_green", "", 1500, 50, { "", "", -1 } },
            { "Chemlight_blue", "", 1500, 50, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops

    class cop_cadet {
        name = "PCSO & SC";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a PCSO or SC!" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 0, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 0, 650 },
			{ "arifle_Mk20_F", "", 10000, -1 },
            { "Binocular", "", 0, -1 },
            { "Rangefinder", "", 0, -1 },
            { "ItemGPS", "", 0, 45 },
            { "FirstAidKit", "", 0, 65 },
            { "NVGoggles_OPFOR", "", 0, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 0 },
			{ "30Rnd_556x45_Stanag", "", 100 }	
        };
        accs[] = {

        };
    };

    class cop_marshall {
        name = "PC";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a PC!" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 0 },
            { "hgun_P07_snds_F", "Stun Pistol", 0 },
            { "arifle_TRG21_F", "", 0 },
            { "SMG_01_F", "", 0 },
            { "SMG_02_F", "", 0 },
			{ "arifle_MXC_F", "", 20000, -1 },
			{ "arifle_MXC_Black_F", "", 20000, -1 },
			{ "arifle_SPAR_01_khk_F", "", 30000, -1 },
			{ "arifle_SPAR_01_blk_F", "", 30000, -1 },
			{ "arifle_SPAR_01_snd_F", "", 30000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 0 },
            { "30Rnd_556x45_Stanag", "", 0 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0 },
            { "30Rnd_9x21_Mag_SMG_02", "", 0 },
            { "30Rnd_9x21_Mag", "", 150 },
			{ "30Rnd_65x39_caseless_mag", "", 500 },
			{ "30Rnd_556x45_Stanag", "", 100 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 100 }
        };
        accs[] = {
            { "optic_Aco_smg", "", 0 },
            { "optic_Holosight_smg", "", 0 },
            { "acc_flashlight", "", 0 }
        };
    };

    class cop_actserg {
        name = "SPC";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a SPC!" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 0 },
            { "hgun_P07_snds_F", "Stun Pistol", 0 },
            { "arifle_TRG21_F", "", 0 },
            { "SMG_01_F", "", 0 },
            { "SMG_02_F", "",0 },
            { "arifle_MXC_Black_F", "", 0 },
            { "arifle_ARX_blk_F", "", 0 },
            { "Binocular", "", 0, -1 },
            { "Rangefinder", "", 0, -1 },
            { "ItemGPS", "", 0, 0 },
            { "FirstAidKit", "", 0, 0 },
            { "NVGoggles_OPFOR", "", 0, 0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 0 },
            { "30Rnd_65x39_caseless_mag", "", 0 },
            { "30Rnd_65x39_caseless_green", "", 0 }
        };
        accs[] = {
            { "optic_Aco_smg", "", 0 },
            { "optic_Holosight_smg", "", 0 },
            { "optic_Arco", "", 0 },
            { "optic_Hamr", "", 0 },
            { "optic_MRCO", "", 0 },
            { "acc_flashlight", "", 0 }
        };
    };

    class cop_sergeant {
        name = "SGT";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a SGT!" };
        items[] = {
			{ "arifle_MX_SW_F", "", 30000, -1 }, //6.5
			{ "arifle_MXC_F", "", 20000, -1 },
			{ "arifle_MXC_Black_F", "", 20000, -1 },
			{ "arifle_MX_Black_F", "", 20000, -1 },
			{ "arifle_MXM_Black_F", "", 20000, -1 },
			{ "arifle_MX_SW_Black_F", "", 20000, -1 },
			{ "arifle_MXM_F", "", 32500, -1 },
			{ "arifle_MX_F", "", 30000, -1 },
			{ "arifle_Katiba_F", "", 25000, -1 },
			{ "srifle_DMR_07_blk_F", "", 45000, -1 },
			{ "arifle_SPAR_02_khk_F", "", 40000, -1 },
			{ "arifle_SPAR_02_blk_F", "", 40000, -1 },
			{ "arifle_SPAR_02_snd_F", "", 40000, -1 },
            { "Binocular", "", 0, -1 },
            { "Rangefinder", "", 0, -1 },
            { "ItemGPS", "", 0, 0 },
            { "FirstAidKit", "", 0, 0 },
            { "NVGoggles_OPFOR", "", 0, 0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 0 },
            { "30Rnd_65x39_caseless_mag", "", 0 },
            { "100Rnd_65x39_caseless_mag", "", 500 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 500 },
			{ "30Rnd_65x39_caseless_mag", "", 200 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 200 },
			{ "30Rnd_65x39_caseless_green", "", 300 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 100 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 100 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 100 },
			{ "200Rnd_65x39_cased_Box", "", 100 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 100 },
            { "30Rnd_556x45_Stanag", "", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0 }
        };
        accs[] = {
            { "optic_Aco_smg", "", 0 },
            { "optic_Holosight_smg", "", 0 },
            { "optic_Arco", "", 0 },
            { "optic_Hamr", "", 0 },
            { "optic_MRCO", "", 0 },
            { "optic_DMS", "", 0 },
            { "bipod_01_F_blk", "", 0 },
            { "acc_flashlight", "", 0 },
            { "muzzle_snds_H", "", 0 }
        };
    };

    class cop_lieutenant {
        name = "Insp & S/Insp";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Insp or S/Insp!" };
        items[] = {
			{ "arifle_Katiba_GL_F", "", 35000, -1 }, //teargass
			{ "LMG_Mk200_F", "", 60000, -1 },
			{ "HandGrenade_Stone", "Flashbang", 500, -1 },
			{ "SmokeShell", "Teargas", 800, -1 },
			{ "arifle_MX_GL_F", "", 35000, -1 },
			{ "srifle_DMR_06_camo_F", "", 35000, -1 },
			{ "srifle_DMR_06_camo_F", "", 35000, -1 },
			{ "srifle_DMR_06_camo_khs_F", "", 35000, -1 },
			{ "srifle_DMR_06_olive_F", "", 35000, -1 },
			{ "arifle_SPAR_03_blk_F", "", 40000, -1 },
			{ "arifle_SPAR_03_khk_F", "", 40000, -1 },
			{ "arifle_SPAR_03_snd_F", "", 40000, -1 },
			{ "LMG_03_F", "", 48000, -1 },
			{ "launch_RPG32_F", "", 110000, -1 }
        };
        mags[] = {
            { "1Rnd_Smoke_Grenade_shell", "", 500 }, 
			{ "30Rnd_65x39_caseless_green", "", 200 },
			{ "200Rnd_65x39_cased_Box", "", 1000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 1000 },
			{ "3Rnd_UGL_FlareWhite_F", "", 300 },
			{ "30Rnd_65x39_caseless_mag", "", 300 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 300 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 300 },
			{ "20Rnd_762x51_Mag", "", 300 },
			{ "RPG32_F", "", 5000 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 100 },
			{ "200Rnd_556x45_Box_F", "", 100 },
			{ "200Rnd_556x45_Box_Tracer_F", "", 100 }
        };
        accs[] = {
            { "optic_Aco_smg", "", 0 },
            { "optic_Holosight_smg", "", 0 },
            { "optic_Arco", "", 0 },
            { "optic_Hamr", "", 0 },
            { "optic_MRCO", "", 0 },
            { "optic_DMS", "", 0 },
            { "bipod_01_F_blk", "", 0 },
            { "acc_flashlight", "", 0 },
            { "muzzle_snds_H", "", 0 },
            { "muzzle_snds_B", "", 0, 5000 }
        };
    };

    class cop_superintendant {
        name = "Supt & C/Supt";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Supt or C/Supt!" };
        items[] = {
			{ "srifle_DMR_03_F", "", 65000, -1 }, //7.62
			{ "srifle_DMR_03_tan_F", "", 65000, -1 },
			{ "srifle_DMR_06_olive_F", "", 65000, -1 }, //.338
			{ "srifle_EBR_F", "", 65000, -1 },
			{ "LMG_Zafir_F", "", 50000, -1 },
			{ "DemoCharge_Remote_Mag", "", 65000, -1 }, //Explosives
			{ "SatchelCharge_Remote_Mag", "", 100000, -1 },
			{ "launch_RPG32_F", "", 90000, -1 },
			{ "srifle_DMR_02_F", "", 125000, -1 }, //.338
			{ "srifle_DMR_02_sniper_F", "", 125000, -1 },
			{ "srifle_DMR_01_F", "", 65000, -1 },
			{ "arifle_AK12_F", "", 37000, -1 },
			{ "MMG_02_sand_F", "", 70000, -1 },
			{ "MMG_02_black_F", "", 70000, -1 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 250 },
			{ "150Rnd_762x54_Box","", 800 },
			{ "150Rnd_762x54_Box_Tracer", "", 800 },
			{ "RPG32_F", "", 2500  },
			{ "10Rnd_338_Mag", "", 200 },
			{ "10Rnd_762x54_Mag", "", 200 },
			{ "30Rnd_762x39_Mag_F", "", 100 },
			{ "130Rnd_338_Mag", "", 100 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 250 }, //Scopes
			{ "optic_Holosight_smg", "", 250 },
			{ "optic_ACO_grn", "", 250 },
			{ "optic_Aco", "", 250 },
			{ "optic_Hamr", "", 300 },
			{ "optic_Holosight", "", 200 },
			{ "optic_MRCO", "", 250 },
			{ "optic_SOS", "", 500 },
			{ "optic_NVS", "", 750 },
			{ "optic_LRPS", "", 1200 },
			{ "optic_DMS", "", 350 },
			{ "optic_KHS_hex", "", 1000 },
			{ "optic_KHS_blk", "", 1000 },
			{ "optic_KHS_old", "", 1000 },
			{ "optic_KHS_tan", "", 1000 },
			{ "optic_AMS", "", 1000 },
			{ "optic_AMS_khk", "", 1000 },
			{ "optic_AMS_snd", "", 1000 },
			{ "optic_TWS", "", 1000 },
			{ "optic_NightStalker", "", 1000 },
			{ "muzzle_snds_L", "", 150 }, //Silencers
			{ "muzzle_snds_M", "", 500 },
			{ "muzzle_snds_H", "", 500 },
			{ "muzzle_snds_B", "", 500 },
			{ "muzzle_snds_H_MG", "", 500 },
			{ "muzzle_snds_338_black", "", 500 },
			{ "muzzle_snds_338_green", "", 500 },
			{ "muzzle_snds_338_sand", "", 500 },
			{ "muzzle_snds_93mmg", "", 500 },
			{ "muzzle_snds_93mmg_tan", "", 500 },
			{ "optic_Arco_blk_F", "", 500 },
			{ "optic_Arco_ghex_F", "", 500 },
			{ "optic_DMS_ghex_F", "", 500 },
			{ "optic_ERCO_blk_F", "", 500 },
			{ "optic_ERCO_khk_F", "", 500 },
			{ "optic_ERCO_snd_F", "", 500 },
			{ "optic_Hamr_khk_F", "", 500 },
			{ "optic_Holosight_blk_F", "", 500 },
			{ "optic_LRPS_ghex_F", "", 500 },
			{ "optic_Holosight_khk_F", "", 500 },
			{ "optic_LRPS_tna_F", "", 500 },
			{ "optic_SOS_khk_F", "", 500 },
			{ "muzzle_snds_65_TI_blk_F", "", 500 },
			{ "muzzle_snds_58_wdm_F", "", 500 },
			{ "muzzle_snds_B_khk_F", "", 500 },
			{ "muzzle_snds_B_snd_F", "", 500 },
			{ "muzzle_snds_H_MG_khk_F", "", 500 },
			{ "muzzle_snds_H_MG_blk_F", "", 500 },
			{ "muzzle_snds_65_TI_ghex_F", "", 500 },
			{ "muzzle_snds_65_TI_hex_F", "", 500 },
			{ "bipod_01_F_khk", "", 500 },
			{ "acc_pointer_IR", "", 150 }, //Attachments
			{ "acc_flashlight", "", 150 },
			{ "bipod_03_F_blk", "", 1000 }, //Bipods
			{ "bipod_02_F_blk", "", 1000 },
			{ "bipod_01_F_blk", "", 1000 },
			{ "bipod_02_F_hex", "", 1000 },
			{ "bipod_01_F_mtp", "", 1000 },
			{ "bipod_03_F_oli", "", 1000 },
			{ "bipod_01_F_snd", "", 1000 },
			{ "bipod_02_F_tan", "", 1000 }
        };
    };

    class cop_commissioner {
        name = "D/CC & CC";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a D/CC or CC!" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 0 },
            { "hgun_P07_snds_F", "Stun Pistol", 0 },
            { "arifle_TRG21_F", "", 0 },
            { "SMG_01_F", "", 0 },
            { "SMG_02_F", "", 0 },
            { "arifle_MXC_Black_F", "", 0 },
            { "arifle_ARX_blk_F", "", 0 },
            { "arifle_MX_Black_F", "", 0 },
            { "arifle_MXM_Black_F", "",0 },
            { "arifle_SPAR_01_blk_F", "", 0 },
            { "arifle_SPAR_02_blk_F", "", 0 },
            { "srifle_EBR_F", "", 0 },
            { "srifle_DMR_03_F", "", 0 },
            { "arifle_SPAR_03_blk_F", "", 0 },
            { "srifle_DMR_06_camo_F", "", 0 },
            { "srifle_DMR_07_blk_F", "", 0 },
            { "arifle_MX_SW_Black_F", "", 0 },
            { "srifle_DMR_02_F", "", 0 },
            { "Binocular", "", 0, -1 },
            { "Rangefinder", "", 0, -1 },
            { "ItemGPS", "", 0, 0 },
            { "FirstAidKit", "", 0, 0 },
            { "NVGoggles_OPFOR", "", 0, 0 },
			{ "srifle_DMR_02_F", "", 90000, -1 }, //.338
			{ "srifle_DMR_02_camo_F", "", 90000, -1 },
			{ "srifle_DMR_02_sniper_F", "", 90000, -1 },
			{ "srifle_LRR_F", "", 150000, -1 }, //.408
			{ "srifle_LRR_camo_F", "", 150000, -1 },
			{ "srifle_LRR_tna_F", "", 150000, -1 },
			{ "hgun_ACPC2_F", "", 2500, -1 }, 
			{ "srifle_DMR_05_blk_F", "", 100000, -1 }, //9.3
			{ "srifle_DMR_05_hex_F", "", 100000, -1 },
			{ "srifle_DMR_05_tan_f", "", 100000, -1 },
			{ "MMG_02_black_F", "", 200000, -1 },  //SPMG 
			{ "MMG_02_sand_F", "", 200000, -1 },  //SPMG 
			{ "srifle_GM6_F", "", 300000, -1 }, //Lynx
			{ "srifle_GM6_ghex_F", "", 300000, -1 }, //Lynx
			{ "srifle_DMR_04_F", "", 50000, -1 }, //ASP
			{ "srifle_DMR_04_Tan_F", "", 50000, -1 }, //ASP
			{ "arifle_ARX_blk_F", "", 70000, -1 },
			{ "MMG_01_hex_F", "", 30000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 0 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 0 },
            { "30Rnd_65x39_caseless_mag", "", 0 },
            { "30Rnd_65x39_caseless_green", "Rubber", 0 },
            { "30Rnd_556x45_Stanag", "", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "", 0 },
            { "20Rnd_762x51_Mag", "", 0 },
            { "20Rnd_650x39_Cased_Mag_F", "", 0 },
            { "100Rnd_65x39_caseless_mag", "", 0 },
            { "10Rnd_338_Mag", "", 0 },
            { "10Rnd_338_Mag", "", 750 },
			{ "7Rnd_408_Mag", "", 100 },
			{ "9Rnd_45ACP_Mag", "", 100 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 500 },
			{ "130Rnd_338_Mag", "", 1000 },  //SPMG 
			{ "5Rnd_127x108_Mag", "", 1000 }, //Lynx
			{ "5Rnd_127x108_APDS_Mag", "", 7500 }, //Lynx
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "30Rnd_65x39_caseless", "", 100 },
			{ "30Rnd_65x39_caseless_green", "", 100 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 100 },
			{ "10Rnd_50BW_Mag_F", "", 100 },
			{ "150Rnd_93x64_Mag", "", 100 }
        };
        accs[] = {
            { "optic_Aco_smg", "", 0 },
            { "optic_Holosight_smg", "", 0 },
            { "optic_Arco", "", 0 },
            { "optic_Hamr", "", 0 },
            { "optic_MRCO", "", 0 },
            { "optic_DMS", "", 0 },
            { "optic_MOS", "", 0 },
            { "optic_Nightstalker", "", 0, 5000 },
            { "optic_tws", "", 0, 5000 },
            { "bipod_01_F_blk", "", 0 },
            { "acc_flashlight", "", 0 },
            { "muzzle_snds_H", "", 0 },
            { "muzzle_snds_B", "", 0, 5000 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45, { "", "", -1 } },
            { "Binocular", "", 150, -1, { "", "", -1 } },
            { "FirstAidKit", "", 150, 65, { "", "", -1 } },
            { "NVGoggles", "", 1200, 980, { "", "", -1 } }
        };
        mags[] = {};
        accs[] = {};
    };
};


