class CivilianPresence_Presets {
    //https://community.bistudio.com/wiki/Arma_3:_Civilian_Presence
    class CIV_GM_GC {
        name = CSTRING(GC_Name);
        picture = "\gm\gm_core\data\flags\gm_flag_gc_co.paa";
        value = "CIV_GM_GC";
        defaultValue = "CIV_GM_GC";

        class UnitTypes {
            bis_units[] = {
                "gm_gc_civ_man_01_80_blk",
                "gm_gc_civ_man_01_80_blu",
                "gm_gc_civ_man_02_80_brn",
                "gm_gc_civ_man_02_80_gry",
                "gm_gc_civ_man_03_80_blu",
                "gm_gc_civ_man_03_80_grn",
                "gm_gc_civ_man_03_80_gry",
                "gm_gc_civ_man_04_80_blu",
                "gm_gc_civ_man_04_80_gry",
                //"gm_gc_civ_pilot_80_blk",
                "gm_gc_pol_officer_80_blu"
            };
        };
    };

    class CIV_GM_GE {
        name = CSTRING(GE_Name);
        picture = "\gm\gm_core\data\flags\gm_flag_ge_co.paa";
        value = "CIV_GM_GE";
        defaultValue = "CIV_GM_GE";

        class UnitTypes {
            bis_units[] = {
                //Actually East Germans
                "gm_gc_civ_man_01_80_blk",
                "gm_gc_civ_man_01_80_blu",
                "gm_gc_civ_man_02_80_brn",
                "gm_gc_civ_man_02_80_gry",
                "gm_gc_civ_man_03_80_blu",
                "gm_gc_civ_man_03_80_grn",
                "gm_gc_civ_man_03_80_gry",
                "gm_gc_civ_man_04_80_blu",
                "gm_gc_civ_man_04_80_gry",
                //True West Germans
                //"gm_ge_ff_man_80_orn",
                "gm_ge_dbp_man_01_80_blu",
                //"gm_ge_pol_pilot_p1_80_grn",
                //"gm_ge_adak_pilot_80_sar",
                "gm_ge_pol_officer_80_grn",
                "gm_ge_pol_patrol_80_blk"
            };
        };
    };
};
