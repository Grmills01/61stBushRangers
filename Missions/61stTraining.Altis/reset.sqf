params [["_dist",600,[1]],["_center",player,[objNull]]];					//in params
_targets = nearestObjects [position _center, ["TargetBase"], _dist];	//take all nearby practice targets
if (count _targets < 1) exitWith {
	systemChat "No compatible targets were found.";						//exit if no targets have been found
};
{_x animate ["Terc",0];} forEach _targets;								//get all targets to upright pos
{_x addEventHandler ["HIT", {											//add EH
(_this select 0) animate ["Terc",1];									//if hit, get to the ground
(_this select 0) RemoveEventHandler ["HIT",0];							//remove EH
}
]} forEach _targets;
//systemChat "Ready.";
