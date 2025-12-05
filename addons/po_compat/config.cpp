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
            "po_main",
            "po_factions_afr",
            "po_factions_me",
            "po_factions_eu"
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_LOP_AFR_Civ_Man_01",
            "CivilianPresence_LOP_AFR_Civ_Man_01_S",
            "CivilianPresence_LOP_AFR_Civ_Man_02",
            "CivilianPresence_LOP_AFR_Civ_Man_02_S",
            "CivilianPresence_LOP_AFR_Civ_Man_03",
            "CivilianPresence_LOP_AFR_Civ_Man_03_S",
            "CivilianPresence_LOP_AFR_Civ_Man_04",
            "CivilianPresence_LOP_AFR_Civ_Man_04_S",
            "CivilianPresence_LOP_AFR_Civ_Man_05",
            "CivilianPresence_LOP_AFR_Civ_Man_05_S",
            "CivilianPresence_LOP_AFR_Civ_Man_06",
            "CivilianPresence_LOP_AFR_Civ_Man_06_S",
            "CivilianPresence_LOP_Tak_Civ_Man_01",
            "CivilianPresence_LOP_Tak_Civ_Man_02",
            "CivilianPresence_LOP_Tak_Civ_Man_04",
            "CivilianPresence_LOP_Tak_Civ_Man_05",
            "CivilianPresence_LOP_Tak_Civ_Man_06",
            "CivilianPresence_LOP_Tak_Civ_Man_07",
            "CivilianPresence_LOP_Tak_Civ_Man_08",
            "CivilianPresence_LOP_Tak_Civ_Man_09",
            "CivilianPresence_LOP_Tak_Civ_Man_10",
            "CivilianPresence_LOP_Tak_Civ_Man_11",
            "CivilianPresence_LOP_Tak_Civ_Man_12",
            "CivilianPresence_LOP_Tak_Civ_Man_13",
            "CivilianPresence_LOP_Tak_Civ_Man_14",
            "CivilianPresence_LOP_Tak_Civ_Man_15",
            "CivilianPresence_LOP_Tak_Civ_Man_16",
            "CivilianPresence_LOP_Tak_Civ_Random",
            "CivilianPresence_LOP_CHR_Civ_Assistant",
            "CivilianPresence_LOP_CHR_Civ_Citizen_01",
            "CivilianPresence_LOP_CHR_Civ_Citizen_02",
            "CivilianPresence_LOP_CHR_Civ_Citizen_03",
            "CivilianPresence_LOP_CHR_Civ_Citizen_04",
            "CivilianPresence_LOP_CHR_Civ_Doctor_01",
            "CivilianPresence_LOP_CHR_Civ_Functionary_01",
            "CivilianPresence_LOP_CHR_Civ_Functionary_02",
            "CivilianPresence_LOP_CHR_Civ_Policeman_01",
            "CivilianPresence_LOP_CHR_Civ_Priest_01",
            "CivilianPresence_LOP_CHR_Civ_Profiteer_01",
            "CivilianPresence_LOP_CHR_Civ_Profiteer_02",
            "CivilianPresence_LOP_CHR_Civ_Profiteer_03",
            "CivilianPresence_LOP_CHR_Civ_Profiteer_04",
            "CivilianPresence_LOP_CHR_Civ_Random",
            "CivilianPresence_LOP_CHR_Civ_Rocker_01",
            "CivilianPresence_LOP_CHR_Civ_Rocker_02",
            "CivilianPresence_LOP_CHR_Civ_Rocker_03",
            "CivilianPresence_LOP_CHR_Civ_Rocker_04",
            "CivilianPresence_LOP_CHR_Civ_SchoolTeacher",
            "CivilianPresence_LOP_CHR_Civ_Villager_01",
            "CivilianPresence_LOP_CHR_Civ_Villager_02",
            "CivilianPresence_LOP_CHR_Civ_Villager_03",
            "CivilianPresence_LOP_CHR_Civ_Villager_04",
            "CivilianPresence_LOP_CHR_Civ_Woodlander_01",
            "CivilianPresence_LOP_CHR_Civ_Woodlander_02",
            "CivilianPresence_LOP_CHR_Civ_Woodlander_03",
            "CivilianPresence_LOP_CHR_Civ_Woodlander_04",
            "CivilianPresence_LOP_CHR_Civ_Worker_01",
            "CivilianPresence_LOP_CHR_Civ_Worker_02",
            "CivilianPresence_LOP_CHR_Civ_Worker_03",
            "CivilianPresence_LOP_CHR_Civ_Worker_04"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
