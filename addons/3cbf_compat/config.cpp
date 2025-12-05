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
            "UK3CB_Factions_ADC_C",
            "UK3CB_Factions_MEC_C",
            "UK3CB_Factions_TKC_C",
            "UK3CB_Factions_CHC_C",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_UK3CB_ADC_C_CIV_CHR_01",
            "CivilianPresence_UK3CB_ADC_C_CIV_CHR_02",
            "CivilianPresence_UK3CB_ADC_C_HUNTER_CHR",
            "CivilianPresence_UK3CB_ADC_C_CIV_ISL_01",
            "CivilianPresence_UK3CB_ADC_C_CIT",
            "CivilianPresence_UK3CB_ADC_C_COACH",
            "CivilianPresence_UK3CB_ADC_C_PROF",
            "CivilianPresence_UK3CB_ADC_C_VILL",
            "CivilianPresence_UK3CB_ADC_C_WOOD",
            "CivilianPresence_UK3CB_ADC_C_HELIPILOT",
            "CivilianPresence_UK3CB_ADC_C_PILOT",
            "CivilianPresence_UK3CB_ADC_C_DOC_CHR",
            "CivilianPresence_UK3CB_ADC_C_DOC_ISL",
            "CivilianPresence_UK3CB_ADC_C_FUNC",
            "CivilianPresence_UK3CB_ADC_C_LABOURER_CHR",
            "CivilianPresence_UK3CB_ADC_C_LABOURER_ISL",
            "CivilianPresence_UK3CB_ADC_C_CIV_CHR",
            "CivilianPresence_UK3CB_ADC_C_CIV_ISL",
            "CivilianPresence_UK3CB_ADC_C_SPOT_CHR",
            "CivilianPresence_UK3CB_ADC_C_SPOT_ISL",
            "CivilianPresence_UK3CB_ADC_C_WORKER",
            "CivilianPresence_UK3CB_MEC_C_CIV_01",
            "CivilianPresence_UK3CB_MEC_C_CIV_02",
            "CivilianPresence_UK3CB_MEC_C_HUNTER",
            "CivilianPresence_UK3CB_MEC_C_CIT",
            "CivilianPresence_UK3CB_MEC_C_COACH",
            "CivilianPresence_UK3CB_MEC_C_PROF",
            "CivilianPresence_UK3CB_MEC_C_FUNC",
            "CivilianPresence_UK3CB_MEC_C_HELIPILOT",
            "CivilianPresence_UK3CB_MEC_C_LABOURER",
            "CivilianPresence_UK3CB_MEC_C_DOC",
            "CivilianPresence_UK3CB_MEC_C_PILOT",
            "CivilianPresence_UK3CB_MEC_C_CIV",
            "CivilianPresence_UK3CB_MEC_C_SPOT",
            "CivilianPresence_UK3CB_MEC_C_WORKER",
            "CivilianPresence_UK3CB_CHC_C_ACT",
            "CivilianPresence_UK3CB_CHC_C_BODYG",
            "CivilianPresence_UK3CB_CHC_C_CIT",
            "CivilianPresence_UK3CB_CHC_C_COACH",
            "CivilianPresence_UK3CB_CHC_C_DOC",
            "CivilianPresence_UK3CB_CHC_C_FUNC",
            "CivilianPresence_UK3CB_CHC_C_HIKER",
            "CivilianPresence_UK3CB_CHC_C_LABOUR",
            "CivilianPresence_UK3CB_CHC_C_PILOT",
            "CivilianPresence_UK3CB_CHC_C_POLITIC",
            "CivilianPresence_UK3CB_CHC_C_PRIEST",
            "CivilianPresence_UK3CB_CHC_C_PROF",
            "CivilianPresence_UK3CB_CHC_C_CIV",
            "CivilianPresence_UK3CB_CHC_C_SPY",
            "CivilianPresence_UK3CB_CHC_C_VILL",
            "CivilianPresence_UK3CB_CHC_C_CAN",
            "CivilianPresence_UK3CB_CHC_C_WOOD",
            "CivilianPresence_UK3CB_CHC_C_WORKER",
            "CivilianPresence_UK3CB_TKC_C_CIV",
            "CivilianPresence_UK3CB_TKC_C_DOC",
            "CivilianPresence_UK3CB_TKC_C_PILOT",
            "CivilianPresence_UK3CB_TKC_C_SPOT",
            "CivilianPresence_UK3CB_TKC_C_WORKER"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
