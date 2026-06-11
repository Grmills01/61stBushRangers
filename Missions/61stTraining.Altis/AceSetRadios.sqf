/*
execVM "AceSetRadios.sqf";
*/
private _radioIcon = "z\tfar\addons\core\ui\ace_interaction_radio_icon.paa";

_action = ["RadioPresets", "Radio Presets", _radioIcon, {}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio"], _action] call ace_interact_menu_fnc_addActionToObject;
_action = ["1-1", "1-1 Presets", _radioIcon, {}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets"], _action] call ace_interact_menu_fnc_addActionToObject;
_action = ["1-2", "1-2 Presets", _radioIcon, {}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets"], _action] call ace_interact_menu_fnc_addActionToObject;
_action = ["1-R", "1-R Presets", _radioIcon, {}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-1Radios", "Set 1-1 Radio", "", {
    private _radio = call TFAR_fnc_activeSwRadio;
        private _randomFreq = str(floor(random [150, 100, 512]));
        [_radio, 1, "111"] call TFAR_fnc_setChannelFrequency;
        [_radio, 2, _randomFreq] call TFAR_fnc_setChannelFrequency;
        [_radio, 0] call TFAR_fnc_setSwChannel;
        [_radio, 0] call TFAR_fnc_setSwStereo;
        Hint "1-1 Radio Settings Have Been Set";
}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets", "1-1"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-1MedicRadios", "Set 1-1 Medic Radio", "", {
    private _radio = call TFAR_fnc_activeSwRadio;
    [_radio, 1, "111"] call TFAR_fnc_setChannelFrequency;
    [_radio, 2, "444"] call TFAR_fnc_setChannelFrequency;
    [_radio, 0] call TFAR_fnc_setSwChannel;
    [_radio, 1] call TFAR_fnc_setAdditionalSwChannel;
    [_radio, 2] call TFAR_fnc_setSwStereo;
    [_radio, 1] call TFAR_fnc_setAdditionalSwStereo;
    hint "1-1 Medic Radio Settings Have Been Set";
}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets", "1-1"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-2Radios", "Set 1-2 Radio", "", {
    private _radio = call TFAR_fnc_activeSwRadio;
        private _randomFreq = str(floor(random [150, 100, 512]));
        [_radio, 1, "112"] call TFAR_fnc_setChannelFrequency;
        [_radio, 2, _randomFreq] call TFAR_fnc_setChannelFrequency;
        [_radio, 0] call TFAR_fnc_setSwChannel;
        [_radio, 0] call TFAR_fnc_setSwStereo;
        Hint "1-2 Radio Settings Have Been Set";
}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets", "1-2"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-2MedicRadios", "Set 1-2 Medic Radio", "", {
    private _radio = call TFAR_fnc_activeSwRadio;
    [_radio, 1, "112"] call TFAR_fnc_setChannelFrequency;
    [_radio, 2, "444"] call TFAR_fnc_setChannelFrequency;
    [_radio, 0] call TFAR_fnc_setSwChannel;
    [_radio, 1] call TFAR_fnc_setAdditionalSwChannel;
    [_radio, 2] call TFAR_fnc_setSwStereo;
    [_radio, 1] call TFAR_fnc_setAdditionalSwStereo;
    hint "1-2 Medic Radio Settings Have Been Set";
}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets", "1-2"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-RRadios", "Set 1-R Radio", "", {
    private _radio = call TFAR_fnc_activeSwRadio;
        private _randomFreq = str(floor(random [150, 100, 512]));
        [_radio, 1, "110"] call TFAR_fnc_setChannelFrequency;
        [_radio, 2, _randomFreq] call TFAR_fnc_setChannelFrequency;
        [_radio, 0] call TFAR_fnc_setSwChannel;
        [_radio, 0] call TFAR_fnc_setSwStereo;
        Hint "1-R Radio Settings Have Been Set";
}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets", "1-R"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["1-RMedicRadios", "Set 1-R Medic Radio", "", {
    private _radio = call TFAR_fnc_activeSwRadio;
    [_radio, 1, "110"] call TFAR_fnc_setChannelFrequency;
    [_radio, 2, "444"] call TFAR_fnc_setChannelFrequency;
    [_radio, 0] call TFAR_fnc_setSwChannel;
    [_radio, 1] call TFAR_fnc_setAdditionalSwChannel;
    [_radio, 2] call TFAR_fnc_setSwStereo;
    [_radio, 1] call TFAR_fnc_setAdditionalSwStereo;
    hint "1-R Medic Radio Settings Have Been Set";
}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "RadioPresets", "1-R"], _action] call ace_interact_menu_fnc_addActionToObject;