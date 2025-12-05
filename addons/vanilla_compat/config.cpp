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
            "A3_Data_F_Orange"
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_C_IDAP_Man_AidWorker_01_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_02_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_03_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_04_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_05_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_06_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_07_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_08_F",
            "CivilianPresence_C_IDAP_Man_AidWorker_09_F",
            "CivilianPresence_C_IDAP_Man_EOD_01_F",
            "CivilianPresence_C_IDAP_Man_Paramedic_01_F",
            "CivilianPresence_C_IDAP_Pilot_01_F",
            "CivilianPresence_C_IDAP_Man_UAV_01_F",
            "CivilianPresence_C_IDAP_Man_UAV_06_F",
            "CivilianPresence_C_IDAP_Man_UAV_06_antimine_F",
            "CivilianPresence_C_IDAP_Man_UAV_06_medical_F",
            "CivilianPresence_C_Story_EOD_01_F"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
