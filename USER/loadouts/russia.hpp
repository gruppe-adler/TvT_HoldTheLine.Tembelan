class russia {
    class AllUnits {
        uniform = "rhs_uniform_flora_patchless_alt";
        backpack = "";
        vest = "rhs_6b23_ML_6sh92";
        primaryWeapon = "rhs_weap_ak74m";
        primaryWeaponMagazine = "rhs_30Rnd_545x39_AK_plum_green";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics = "";
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
        headgear = "rhs_6b27m_green";
        goggles = "";
        nvgoggles = "";
        binoculars = "Binocular";
        map = "ItemMap";
        gps = "ItemGPS";
        compass = "ItemCompass";
        watch = "ItemWatch";
        radio = "TFAR_fadak";

        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
			LIST_2("ACE_morphine"),
            LIST_2("ACE_Chemlight_HiWhite"),
            LIST_2("rhs_mag_rdg2_white"),
			"ACE_epinephrine",
			"ACE_Flashlight_KSF1",
			"ACE_MapTools"
        };
    };

    class Type {
        // Rifleman
        class Soldier_F {
            addItemsToVest[] = {
				LIST_9("rhs_30Rnd_545x39_AK_plum_green"),
				LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white"),
			};
        };

        // Grenadier
        class Soldier_GL_F {
            primaryWeapon = "rhs_weap_ak74m_gp25";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_6("rhs_GRD40_White")
            };
        };

        // Light AT
        class Soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg26";
        };

        // TL
        class Soldier_TL_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak74m_gp25";
            handgunWeapon = "rhs_tr8_periscope";
            headgear = "rhs_6b27m_green_ess";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_6("rhs_GRD40_White"),
                LIST_2("rhs_GRD40_Red"),
                LIST_2("rhs_GRD40_Green")
            };
        };

        // SQL
        class Soldier_SL_F: Soldier_TL_F {

        };

        //autorifleman
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak103";
            primaryWeaponMagazine = "rhs_75Rnd_762x39mm_tracer";
            primaryWeaponMuzzle = "rhs_acc_dtk3";
            backpack = "rhs_assault_umbts";
            addItemsToVest[] = {
                LIST_2("rhs_75Rnd_762x39mm_tracer"),
				LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white"),
			};
            addItemsToBackpack[] = {
                LIST_4("rhs_75Rnd_762x39mm_tracer")
            };
        };

        //assistant autorifleman
        class Soldier_AAR_F: Soldier_F {
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                LIST_4("rhs_75Rnd_762x39mm_tracer")
            };
        };
    };

	class Rank {
		class LIEUTENANT {
            headgear = "rhs_fieldcap_ml";
		};
	};
};
