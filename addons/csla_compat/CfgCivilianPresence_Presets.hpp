class CivilianPresence_Presets {
    //https://community.bistudio.com/wiki/Arma_3:_Civilian_Presence
    class CIV_CSLA {
        name = CSTRING(CSLA_Name);
        picture = "\CSLA_FIA_cfg\images\FIA_logo.paa";
        value = "CIV_CSLA";
        defaultValue = "CIV_CSLA";

        class UnitTypes {
            bis_units[] = {
                "CSLA_CIV_Citizen",
                "CSLA_CIV_Citizen_V2",
                "CSLA_CIV_Citizen_V3",
                "CSLA_CIV_Citizen_V4",
                "CSLA_CIV_Doctor",
                "CSLA_CIV_Foreman",
                "CSLA_CIV_Foreman_V2",
                "CSLA_CIV_Functionary",
                "CSLA_CIV_Functionary_V2",
                //"CSLA_CIV_PoliceManCrw",
                "CSLA_CIV_Policeman",
                "CSLA_CIV_PoliceManSa61",
                "CSLA_CIV_Villager",
                "CSLA_CIV_Villager_V2",
                "CSLA_CIV_Villager_V3",
                "CSLA_CIV_Villager_V4",
                "CSLA_CIV_Woodlander",
                "CSLA_CIV_Woodlander_V2",
                "CSLA_CIV_Woodlander_V3",
                "CSLA_CIV_Woodlander_V4",
                "CSLA_CIV_Worker",
                "CSLA_CIV_Worker_V2",
                "CSLA_CIV_Worker_V3",
                "CSLA_CIV_Worker_V4"
            };
        };
    };
};
