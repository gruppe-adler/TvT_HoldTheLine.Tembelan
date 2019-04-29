/*  Wird zum Missionsstart auf Server und Clients ausgeführt.
*   Funktioniert wie die init.sqf.
*/

[{
    _firstActiveSectorID = selectRandom [2,3];
    _roundLength = 1800;
    _opforDirection = 1;

    _dateAndTimeArray = [
        [6,3,13,0],
        [6,6,8,0],
        [6,8,17,30],
        [6,10,13,0],
        [6,11,8,0],
        [6,13,17,30],
        [6,15,13,0],
        [6,16,8,0],
        [6,19,17,30]
    ];

    [_firstActiveSectorID, _roundLength, _opforDirection, _dateAndTimeArray] call grad_linearSD_fnc_startLinearSD;

},[],[10,0] select didJIP] call CBA_fnc_waitAndExecute;
