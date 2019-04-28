class germany {
    class AllUnits {
        uniform = "SMM_Uniform_BW_TT";
        backpack = "";
        vest = "SMM_Vest_BW_TT";
        primaryWeapon = "rhs_weap_g36kv";
        primaryWeaponMagazine = "rhssaf_30rnd_556x45_Tracers_G36";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics[] = {
            "rhsusf_acc_RX01",
            "rhsusf_acc_compm4",
            "rhsusf_acc_T1_high",
            "rhs_acc_1p87"
        };
        primaryWeaponPointer = "";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        secondaryWeaponMuzzle = "";
        secondaryWeaponOptics = "";
        secondaryWeaponPointer = "";
        secondaryWeaponUnderbarrel = "";
        secondaryWeaponUnderbarrelMagazine = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";
        handgunWeaponMuzzle = "";
        handgunWeaponOptics = "";
        handgunWeaponPointer = "";
        handgunWeaponUnderbarrel = "";
        handgunWeaponUnderbarrelMagazine = "";
        headgear = "ARC_GER_Tropentarn_Helmet_simple";
        goggles = "";
        nvgoggles = "";
        binoculars = "Binocular";
        map = "ItemMap";
        gps = "ItemGPS";
        compass = "ItemCompass";
        watch = "ItemWatch";
        radio = "TFAR_anprc152";

        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
			LIST_2("ACE_morphine"),
            LIST_2("ACE_Chemlight_HiWhite"),
			"ACE_epinephrine",
			"ACE_Flashlight_MX991",
			"ACE_MapTools"
        };
    };

    class Type {
        // Rifleman
        class Soldier_F {
            addItemsToVest[] = {
				LIST_10("rhssaf_30rnd_556x45_Tracers_G36"),
				LIST_2("HandGrenade"),
				LIST_3("SmokeShell")
			};
        };

        // Grenadier
        class Soldier_GL_F {
            primaryWeapon = "rhs_weap_g36kv_ag36";
            addItemsToVest[] = {
				LIST_8("rhssaf_30rnd_556x45_Tracers_G36"),
				LIST_2("HandGrenade"),
				LIST_2("SmokeShell"),
                LIST_6("1Rnd_Smoke_Grenade_shell")
			};
        };

        // Light AT
        class Soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_m72a7";
        };

        // TL
        class Soldier_TL_F: Soldier_F {
            uniform  = "SMM_Uniform_BW_TT_RS";
            primaryWeapon = "rhs_weap_g36kv_ag36";
            handgunWeapon = "rhs_weap_tr8";
            addItemsToVest[] = {
                LIST_8("rhssaf_30rnd_556x45_Tracers_G36"),
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                LIST_4("1Rnd_Smoke_Grenade_shell"),
                LIST_1("1Rnd_SmokeRed_Grenade_shell"),
                LIST_1("1Rnd_SmokeBlue_Grenade_shell")
            };
        };

        // SQL
        class Soldier_SL_F: Soldier_TL_F {

        };

        //autorifleman
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_minimi_para_railed";
            primaryWeaponMagazine = "200Rnd_556x45_Box_Tracer_Red_F";
            primaryWeaponOptics = "";
            backpack = "SMM_AssaultPack_BW_TT";
            addItemsToVest[] = {
				LIST_2("HandGrenade"),
				LIST_2("SmokeShell")
			};
            addItemsToBackpack[] = {
                LIST_4("200Rnd_556x45_Box_Tracer_Red_F")
            };
        };

        //assistant autorifleman
        class Soldier_AAR_F: Soldier_F {
            backpack = "SMM_AssaultPack_BW_TT";
            addItemsToBackpack[] = {
                LIST_3("200Rnd_556x45_Box_Tracer_Red_F")
            };
        };
    };

	class Rank {
		class LIEUTENANT {
            headgear = "SMM_MilCap_BW_TT";
		};
	};
};
