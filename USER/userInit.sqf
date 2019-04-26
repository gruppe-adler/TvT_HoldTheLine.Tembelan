/*  Wird zum Missionsstart auf Server und Clients ausgeführt.
*   Funktioniert wie die init.sqf.
*/

[{
    _firstActiveSectorID = selectRandom [3,4];
    _roundLength = 1800;
    _opforDirection = -1;

    _dateAndTimeArray = [
        [28,3,10],
        [30,7,15],
        [5,2,16,30]
    ];

    [_firstActiveSectorID, _roundLength, _opforDirection, _dateAndTimeArray] call grad_linearSD_fnc_startLinearSD;

},[],[10,0] select didJIP] call CBA_fnc_waitAndExecute;