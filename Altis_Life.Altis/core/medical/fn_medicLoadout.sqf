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

// player addUniform "U_Rangemaster";
// player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];

player addBackpack "B_Carryall_oucamo";
(backpackContainer player) setObjectTextureGlobal [0, "#(rgb,8,8,3)color(1,0,0,1)"];

player addHeadgear "H_Cap_blu";
player addGoggles "G_Tactical_Clear";

player addItem "Medikit";
player addItem "Toolkit";

player addItem "FirstAidKit";
player addItem "FirstAidKit";

player addItem "NVGoggles_OPFOR";
player assignItem "NVGoggles_OPFOR";

player addItem "Rangefinder";
player assignItem "Rangefinder";

player addItem "ItemMap";
player assignItem "ItemMap";

player addItem "ItemCompass";
player assignItem "ItemCompass";

player addItem "ItemWatch";
player assignItem "ItemWatch";

player addItem "ItemGPS";
player assignItem "ItemGPS";

player addItem "Chemlight_red";
player addItem "Chemlight_red";

player addItem "SmokeShellRed";
player addItem "SmokeShellRed";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
