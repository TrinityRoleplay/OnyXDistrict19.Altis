waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: [midgetgrimm]
	Description: Puts a small bar in the bottom right of screen to display in-game information

*/
_rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["osefStatusBar","PLAIN"];
systemChat format["Loading game server info...", _rscLayer];

[] spawn {
	sleep 5;
	_timeSinceLastUpdate = 0;
	_counter = 180;
	_timeSinceLastUpdate = 0;

	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetStructuredText parseText format["<t %1 size='1' font='PuristaSemibold' color= '#ffffff'>TS: onyxdistrict.ts3pro.xyz <t %1 color= '#ffffff'>| <t %1 size='1' font='PuristaSemibold' color= '#ffffff'>FPS: %1 <t %1 color= '#ffffff'>| <t %1 size='1' font='PuristaSemibold' color= '#ffffff'>COPS: %2 <t %1 color= '#ffffff'>| <t %1 size='1' font='PuristaSemibold' color= '#ffffff'>CIVS: %3 <t %1 color= '#ffffff'>| <t %1 size='1' font='PuristaSemibold' color= '#ffffff'>EMS: %4 <t %1 color= '#ffffff'>| <t %1 size='1' font='PuristaSemibold' color= '#ffffff'>CASH: £%5 <t %1 color= '#ffffff'>| <t %1 size='1' font='PuristaSemibold' color= '#ffffff'>BANK: £%6 <t %1 color= '#ffffff'>| <t %1 size='1' font='PuristaSemibold' color= '#ffffff'>GRIDREF: %7", round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmbank] call life_fnc_numberText,mapGridPosition player, _counter];
	};
};
