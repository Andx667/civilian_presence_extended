#define COMPONENT 3CBUK_civ_presence
#define COMPONENT_BEAUTIFIED 3CB Factions Civivlian Presence

#include "\x\cpx\addons\main\script_mod.hpp"

// special agent variants used by the Civilian Presence system
#define CREATE_AGENT(type)\
class type;\
class CivilianPresence_##type##: type{\
    scope = 1;\
    scopeCurator = 0;\
    fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";\
    fsmFormation = "";\
}
