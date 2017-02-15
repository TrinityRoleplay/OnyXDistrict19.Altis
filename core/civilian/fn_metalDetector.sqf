private["_currentweapons","_currentmags"];


if ((side player == civilian) && (player distance (getMarkerPos "police_hq_1") < 100)) then {
	hint "You have entered a restricted area, your guns and ammo have been removed and stored in a safe area";
	_currentweapons = weapons player;
	_currentmags = magazines player;

	{
	copDetectorCase addWeaponCargoGlobal [_x, 1];
	} forEach _currentweapons;

	{
	copDetectorCase addMagazineCargoGlobal [_x, 1];
	} forEach _currentmags;

	removeAllWeapons player;

} else {

	if ((side player == civilian) && (player distance (getMarkerPos "cop_metal_pygros") < 100)) then {
	hint "You have entered a restricted area, your guns and ammo have been removed and stored in a safe area";
	_currentweapons = weapons player;
	_currentmags = magazines player;

	{
	sheriffDetectorCase addWeaponCargoGlobal [_x, 1];
	} forEach _currentweapons;

	{
	sheriffDetectorCase addMagazineCargoGlobal [_x, 1];
	} forEach _currentmags;

	removeAllWeapons player;
	};
};