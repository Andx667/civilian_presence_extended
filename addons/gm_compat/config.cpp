#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = ADDON_NAME;
        author = ECSTRING(main,mod_author);
        authors[] = {"Andx [TTT]"};

        url = ECSTRING(main,mod_url);

        VERSION_CONFIG;

        // Addon Specific Information
        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
        requiredVersion = REQUIRED_VERSION;

        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {
            "cpx_main",
            "gm_characters_gc_civilians",
            "gm_characters_ge_characters"
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_gm_gc_civ_man_01_80_blk",
            "CivilianPresence_gm_gc_civ_man_01_80_blu",
            "CivilianPresence_gm_gc_civ_man_02_80_brn",
            "CivilianPresence_gm_gc_civ_man_02_80_gry",
            "CivilianPresence_gm_gc_civ_man_03_80_blu",
            "CivilianPresence_gm_gc_civ_man_03_80_grn",
            "CivilianPresence_gm_gc_civ_man_03_80_gry",
            "CivilianPresence_gm_gc_civ_man_04_80_blu",
            "CivilianPresence_gm_gc_civ_man_04_80_gry",
            "CivilianPresence_gm_gc_civ_pilot_80_blk",
            "CivilianPresence_gm_gc_pol_officer_80_blu",
            "CivilianPresence_gm_ge_ff_man_80_orn",
            "CivilianPresence_gm_ge_dbp_man_01_80_blu",
            "CivilianPresence_gm_ge_pol_pilot_p1_80_grn",
            "CivilianPresence_gm_ge_adak_pilot_80_sar",
            "CivilianPresence_gm_ge_pol_officer_80_grn",
            "CivilianPresence_gm_ge_pol_patrol_80_blk"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
