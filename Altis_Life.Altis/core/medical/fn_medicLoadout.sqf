#include "..\..\script_macros.hpp"
/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addBackpack "B_Carryall_oucamo";

player addHeadgear "H_Cap_blu";
player addGoggles "G_Tactical_Clear";

player addItem "Medikit";
player addItem "Toolkit";

player addItem "FirstAidKit";
player addItem "FirstAidKit";

player addItem "NVGoggles_OPFOR";
player assignItem "NVGoggles_OPFOR";

player addItem "ItemMap";
player assignItem "ItemMap";

player addItem "ItemCompass";
player assignItem "ItemCompass";

player addItem "ItemWatch";
player assignItem "ItemWatch";

player addItem "ItemGPS";
player assignItem "ItemGPS";

[true,"waterBottle",2] call life_fnc_handleInv;
[true,"apple",2]       call life_fnc_handleInv;
[true,"peach",2]       call life_fnc_handleInv;
[true,"fuelFull",2]    call life_fnc_handleInv;
[true,"lockpick",8]    call life_fnc_handleInv;

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
