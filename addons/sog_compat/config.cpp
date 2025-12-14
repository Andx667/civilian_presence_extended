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
            "characters_f_vietnam_c"
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_vn_c_men_01",
            "CivilianPresence_vn_c_men_02",
            "CivilianPresence_vn_c_men_03",
            "CivilianPresence_vn_c_men_04",
            "CivilianPresence_vn_c_men_05",
            "CivilianPresence_vn_c_men_06",
            "CivilianPresence_vn_c_men_07",
            "CivilianPresence_vn_c_men_08",
            "CivilianPresence_vn_c_men_09",
            "CivilianPresence_vn_c_men_10",
            "CivilianPresence_vn_c_men_11",
            "CivilianPresence_vn_c_men_12",
            "CivilianPresence_vn_c_men_13",
            "CivilianPresence_vn_c_men_14",
            "CivilianPresence_vn_c_men_15",
            "CivilianPresence_vn_c_men_16",
            "CivilianPresence_vn_c_men_17",
            "CivilianPresence_vn_c_men_18",
            "CivilianPresence_vn_c_men_19",
            "CivilianPresence_vn_c_men_20",
            "CivilianPresence_vn_c_men_21",
            "CivilianPresence_vn_c_men_22",
            "CivilianPresence_vn_c_men_23",
            "CivilianPresence_vn_c_men_24",
            "CivilianPresence_vn_c_men_25",
            "CivilianPresence_vn_c_men_26",
            "CivilianPresence_vn_c_men_27",
            "CivilianPresence_vn_c_men_28",
            "CivilianPresence_vn_c_men_29",
            "CivilianPresence_vn_c_men_30",
            "CivilianPresence_vn_c_men_31",
            "CivilianPresence_vn_c_men_32"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
