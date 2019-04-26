#include "component.hpp"

INFO("Ready to respawn. Preparing...");

//respawn not possible
if (player getVariable ["wr_interrupted", false]) exitWith {

    player allowDamage true;
    player setDamage 1;
    setPlayerRespawnTime 99999;
    [player, true] call TFAR_fnc_forceSpectator;

    ["Terminate"] call BIS_fnc_EGSpectator;
    ["Initialize", [player, [WEST,EAST,INDEPENDENT], true]] call BIS_fnc_EGSpectator;
    [player,playerSide,false] remoteExec [QFUNC(addToWaiting),2,false];

    _explanation = parseText format ["<t align='center' size='1.4'>%1</t>", "No respawn available."];
    [playerSide, _explanation] call FUNC(respawnHint);
    [{hint ""}, [], 3] call CBA_fnc_waitAndExecute;
};


setPlayerRespawnTime 0;
forceRespawn player;
