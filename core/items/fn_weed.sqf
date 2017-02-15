/*
	File: fn_weed.sqf
	Author:

	Description: Color effect for weed usage, fades over time
*/
private["_smoke"];
closeDialog 0;
sleep 1;

life_degradeEffect = 4.0;
if(count attachedObjects player < 3) then {
	_smoke = "SmokeShell" createVehicle position player;
	if (vehicle player != player) then {
		_smoke attachTo [vehicle player, [0,-1,0]];
	} else {
		_smoke attachTo [player, [0,0,1.2]];
	};
};

while {life_degradeEffect > 0.10} do {
	"colorCorrections" ppEffectEnable true;
	"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0.0], [random(life_degradeEffect),random(life_degradeEffect),random(life_degradeEffect),random(1)], [random(life_degradeEffect),random(life_degradeEffect),random(life_degradeEffect), random(1)]];
	"colorCorrections" ppEffectCommit 1;
	life_degradeEffect = life_degradeEffect - 0.10;
	if(!alive player) then {
		life_degradeEffect = .10;
	};
	if(life_degradeEffect < 2.0) then {
		detach _smoke;
		deleteVehicle _smoke;
	};
	sleep 2.0;
};

life_degradeEffect = nil;
"chromAberration" ppEffectEnable false;
"colorCorrections" ppEffectEnable false;