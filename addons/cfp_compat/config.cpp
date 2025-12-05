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
            "CFP_C_AFG",
            "CFP_C_AFRCHRISTIAN",
            "CFP_C_AFRISLAMIC",
            "CFP_C_ASIA",
            "CFP_C_CHERNO_WIN",
            "CFP_C_MALDEN",
            "CFP_C_ME"
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_CFP_C_AFG_Civilian_01",
            "CivilianPresence_CFP_C_AFG_Civilian_02",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_1_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_2_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_3_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_4_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_5_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_6_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_7_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_8_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_9_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_10_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_11_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_12_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_13_01",
            "CivilianPresence_CFP_C_AFRCHRISTIAN_Civ_14_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_1_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_2_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_3_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_4_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_5_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_6_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_7_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_8_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_9_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_10_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_11_01",
            "CivilianPresence_CFP_C_AFRISLAMIC_Civ_12_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_1_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_2_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_3_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_4_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_5_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_6_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_7_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_8_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_9_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_10_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_11_01",
            "CivilianPresence_CFP_C_ASIA_Civilian_12_01",
            "CivilianPresence_CFP_C_CHERNO_WIN_Civilian_01",
            "CivilianPresence_CFP_C_CHERNO_WIN_Civilian_02",
            "CivilianPresence_CFP_C_CHERNO_WIN_Civilian_03",
            "CivilianPresence_CFP_C_ME_Civ_1_01",
            "CivilianPresence_CFP_C_ME_Civ_2_01"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
