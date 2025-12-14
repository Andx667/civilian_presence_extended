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
            "CSLA_CIV"
        };

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // List of objects (CfgVehicles classes) contained in the addon. Important also for xeus content (units and groups)
        units[] = {
            "CivilianPresence_CSLA_CIV_Citizen",
            "CivilianPresence_CSLA_CIV_Citizen_V2",
            "CivilianPresence_CSLA_CIV_Citizen_V3",
            "CivilianPresence_CSLA_CIV_Citizen_V4",
            "CivilianPresence_CSLA_CIV_Doctor",
            "CivilianPresence_CSLA_CIV_Foreman",
            "CivilianPresence_CSLA_CIV_Foreman_V2",
            "CivilianPresence_CSLA_CIV_Functionary",
            "CivilianPresence_CSLA_CIV_Functionary_V2",
            "CivilianPresence_CSLA_CIV_PoliceManCrw",
            "CivilianPresence_CSLA_CIV_Policeman",
            "CivilianPresence_CSLA_CIV_PoliceManSa61",
            "CivilianPresence_CSLA_CIV_Villager",
            "CivilianPresence_CSLA_CIV_Villager_V2",
            "CivilianPresence_CSLA_CIV_Villager_V3",
            "CivilianPresence_CSLA_CIV_Villager_V4",
            "CivilianPresence_CSLA_CIV_Woodlander",
            "CivilianPresence_CSLA_CIV_Woodlander_V2",
            "CivilianPresence_CSLA_CIV_Woodlander_V3",
            "CivilianPresence_CSLA_CIV_Woodlander_V4",
            "CivilianPresence_CSLA_CIV_Worker",
            "CivilianPresence_CSLA_CIV_Worker_V2",
            "CivilianPresence_CSLA_CIV_Worker_V3",
            "CivilianPresence_CSLA_CIV_Worker_V4"
        };

        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgCivilianPresence_Presets.hpp"
