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
        requiredVersion = 2.02;

        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {
            "cpx_main",
            "CUP_Creatures_People_Civil_Chernarus",
            "CUP_Creatures_People_Civil_Russia",
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_CUP_C_C_Assistant_01",
            "CivilianPresence_CUP_C_C_Bully_01",
            "CivilianPresence_CUP_C_C_Bully_02",
            "CivilianPresence_CUP_C_C_Bully_03",
            "CivilianPresence_CUP_C_C_Bully_04",
            "CivilianPresence_CUP_C_C_Citizen_01",
            "CivilianPresence_CUP_C_C_Citizen_02",
            "CivilianPresence_CUP_C_C_Citizen_03",
            "CivilianPresence_CUP_C_C_Citizen_04",
            "CivilianPresence_CUP_C_C_Citizen_Random",
            "CivilianPresence_CUP_C_C_Doctor_01",
            "CivilianPresence_CUP_C_C_Functionary_01",
            "CivilianPresence_CUP_C_C_Functionary_02",
            "CivilianPresence_CUP_C_C_Functionary_03",
            "CivilianPresence_CUP_C_C_Functionary_jacket_01",
            "CivilianPresence_CUP_C_C_Functionary_jacket_02",
            "CivilianPresence_CUP_C_C_Functionary_jacket_03",
            "CivilianPresence_CUP_C_C_Mechanic_01",
            "CivilianPresence_CUP_C_C_Mechanic_02",
            "CivilianPresence_CUP_C_C_Mechanic_03",
            "CivilianPresence_CUP_C_C_Policeman_01",
            "CivilianPresence_CUP_C_C_Policeman_02",
            "CivilianPresence_CUP_C_C_Priest_01",
            "CivilianPresence_CUP_C_C_Profiteer_01",
            "CivilianPresence_CUP_C_C_Profiteer_02",
            "CivilianPresence_CUP_C_C_Profiteer_03",
            "CivilianPresence_CUP_C_C_Profiteer_04",
            "CivilianPresence_CUP_C_C_Racketeer_01",
            "CivilianPresence_CUP_C_C_Racketeer_02",
            "CivilianPresence_CUP_C_C_Racketeer_03",
            "CivilianPresence_CUP_C_C_Racketeer_04",
            "CivilianPresence_CUP_C_C_Rescuer_01",
            "CivilianPresence_CUP_C_C_Rocker_01",
            "CivilianPresence_CUP_C_C_Rocker_02",
            "CivilianPresence_CUP_C_C_Rocker_03",
            "CivilianPresence_CUP_C_C_Rocker_04",
            "CivilianPresence_CUP_C_C_Schoolteacher_01",
            "CivilianPresence_CUP_C_C_Villager_01",
            "CivilianPresence_CUP_C_C_Villager_02",
            "CivilianPresence_CUP_C_C_Villager_03",
            "CivilianPresence_CUP_C_C_Villager_04",
            "CivilianPresence_CUP_C_C_Woodlander_01",
            "CivilianPresence_CUP_C_C_Woodlander_02",
            "CivilianPresence_CUP_C_C_Woodlander_03",
            "CivilianPresence_CUP_C_C_Woodlander_04",
            "CivilianPresence_CUP_C_C_Worker_01",
            "CivilianPresence_CUP_C_C_Worker_02",
            "CivilianPresence_CUP_C_C_Worker_03",
            "CivilianPresence_CUP_C_C_Worker_04",
            "CivilianPresence_CUP_C_C_Worker_05",
            "CivilianPresence_CUP_C_R_Assistant_01",
            "CivilianPresence_CUP_C_R_Bully_01",
            "CivilianPresence_CUP_C_R_Bully_02",
            "CivilianPresence_CUP_C_R_Bully_03",
            "CivilianPresence_CUP_C_R_Bully_04",
            "CivilianPresence_CUP_C_R_Citizen_01",
            "CivilianPresence_CUP_C_R_Citizen_02",
            "CivilianPresence_CUP_C_R_Citizen_03",
            "CivilianPresence_CUP_C_R_Citizen_04",
            "CivilianPresence_CUP_C_R_Citizen_Random",
            "CivilianPresence_CUP_C_R_Doctor_01",
            "CivilianPresence_CUP_C_R_Functionary_01",
            "CivilianPresence_CUP_C_R_Functionary_02",
            "CivilianPresence_CUP_C_R_Functionary_03",
            "CivilianPresence_CUP_C_R_Functionary_jacket_01",
            "CivilianPresence_CUP_C_R_Functionary_jacket_02",
            "CivilianPresence_CUP_C_R_Functionary_jacket_03",
            "CivilianPresence_CUP_C_R_Mechanic_01",
            "CivilianPresence_CUP_C_R_Mechanic_02",
            "CivilianPresence_CUP_C_R_Mechanic_03",
            "CivilianPresence_CUP_C_R_Policeman_01",
            "CivilianPresence_CUP_C_R_Policeman_02",
            "CivilianPresence_CUP_C_R_Priest_01",
            "CivilianPresence_CUP_C_R_Profiteer_01",
            "CivilianPresence_CUP_C_R_Profiteer_02",
            "CivilianPresence_CUP_C_R_Profiteer_03",
            "CivilianPresence_CUP_C_R_Profiteer_04",
            "CivilianPresence_CUP_C_R_Racketeer_01",
            "CivilianPresence_CUP_C_R_Racketeer_02",
            "CivilianPresence_CUP_C_R_Racketeer_03",
            "CivilianPresence_CUP_C_R_Racketeer_04",
            "CivilianPresence_CUP_C_R_Rescuer_01",
            "CivilianPresence_CUP_C_R_Rocker_01",
            "CivilianPresence_CUP_C_R_Rocker_02",
            "CivilianPresence_CUP_C_R_Rocker_03",
            "CivilianPresence_CUP_C_R_Rocker_04",
            "CivilianPresence_CUP_C_R_Schoolteacher_01",
            "CivilianPresence_CUP_C_R_Villager_01",
            "CivilianPresence_CUP_C_R_Villager_02",
            "CivilianPresence_CUP_C_R_Villager_03",
            "CivilianPresence_CUP_C_R_Villager_04",
            "CivilianPresence_CUP_C_R_Woodlander_01",
            "CivilianPresence_CUP_C_R_Woodlander_02",
            "CivilianPresence_CUP_C_R_Woodlander_03",
            "CivilianPresence_CUP_C_R_Woodlander_04",
            "CivilianPresence_CUP_C_R_Worker_01",
            "CivilianPresence_CUP_C_R_Worker_02",
            "CivilianPresence_CUP_C_R_Worker_03",
            "CivilianPresence_CUP_C_R_Worker_04",
            "CivilianPresence_CUP_C_R_Worker_05",
            "CivilianPresence_CUP_C_TK_Man_01_Coat",
            "CivilianPresence_CUP_C_TK_Man_01_Jack",
            "CivilianPresence_CUP_C_TK_Man_01_Waist",
            "CivilianPresence_CUP_C_TK_Man_02",
            "CivilianPresence_CUP_C_TK_Man_02_Jack",
            "CivilianPresence_CUP_C_TK_Man_02_Waist",
            "CivilianPresence_CUP_C_TK_Man_03_Coat",
            "CivilianPresence_CUP_C_TK_Man_03_Jack",
            "CivilianPresence_CUP_C_TK_Man_03_Waist",
            "CivilianPresence_CUP_C_TK_Man_04",
            "CivilianPresence_CUP_C_TK_Man_04_Jack",
            "CivilianPresence_CUP_C_TK_Man_04_Waist",
            "CivilianPresence_CUP_C_TK_Man_05_Coat",
            "CivilianPresence_CUP_C_TK_Man_05_Jack",
            "CivilianPresence_CUP_C_TK_Man_05_Waist",
            "CivilianPresence_CUP_C_TK_Man_06_Coat",
            "CivilianPresence_CUP_C_TK_Man_06_Jack",
            "CivilianPresence_CUP_C_TK_Man_06_Waist",
            "CivilianPresence_CUP_C_TK_Man_07",
            "CivilianPresence_CUP_C_TK_Man_07_Coat",
            "CivilianPresence_CUP_C_TK_Man_07_Waist",
            "CivilianPresence_CUP_C_TK_Man_08",
            "CivilianPresence_CUP_C_TK_Man_08_Jack",
            "CivilianPresence_CUP_C_TK_Man_08_Waist"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
