params ["_vehicle"]; // Define the vehicle parameter

[_vehicle] spawn {
	params ["_vehicle"];
    private _vehicle = _this select 0; // Access the vehicle from the parameters
    private _dir = getDir _vehicle;     // Get the direction of the vehicle

    while {speed _vehicle > 0} do {
        _vel = velocity _vehicle;
        _NegativeSpeed = -1;

        _vehicle setVelocity [
            (_vel select 0) + (sin _dir * _NegativeSpeed),
            (_vel select 1) + (cos _dir * _NegativeSpeed),
            (_vel select 2)
        ];

        sleep 0.01;
    };
};

// Call the script or function and pass the vehicle
// Example: [vehicle player] execVM "your_script.sqf";
