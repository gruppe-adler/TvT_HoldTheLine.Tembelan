#include "component.hpp"

GVAR(sectorTriggers) deleteAt 0;

{
    _hide = !(_forEachIndex in [GVAR(attackerSectorID),GVAR(activeSectorID)]);
    private _sectorTrigger = _x;
    {
        {
            private _fortification = _x;

            _fortification hideObjectGlobal _hide;
        } forEach (_x getVariable [QGVAR(fortifications),[]]);
    } forEach _sectorTrigger;
} forEach GVAR(sectorTriggers);
