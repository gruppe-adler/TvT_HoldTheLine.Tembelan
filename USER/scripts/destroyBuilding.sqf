if (!isServer) exitWith {};

params ["_logic"];

private _building = nearestBuilding _logic;
if (isNull _building) exitWith {diag_log ["HOLD THE LINE ERROR: No building found near:",getPos _logic]};

waitUntil {(missionNamespace getVariable ["CBA_missionTime",0]) > 5};

_building setDamage 1;
