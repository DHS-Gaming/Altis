/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return","_playercash"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west: {
		_return = [
			["cop_spawn_3","Athira HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_4","Air HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_5","HW Patrol","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
		];
	};
	
	case civilian: {
		_return = [];
		
		//
		// [DHS]
		//
		if (license_civ_dhs) then {
			_return pushBack ["thronos_spawn_1", "DHS Basis", "\a3\ui_f\data\map\MapControl\chapel_ca.paa"];
		};
		
		//
		// XOXO player houses
		//
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};
		
		_player_cash = life_atmbank + life_cash;
		
		//
		// XOXO Rebel Spawn Points
		//
		if (license_civ_rebel) then {
			//
			// XOXO Rebel Outpost North West
			//
			_return pushBack ["rebel_spawn_1", "Rebels NW", "\a3\ui_f\data\map\MapControl\bunker_ca.paa"];

			//
			// XOXO Rebel Outpost South West
			//
			if (_player_cash > 599999) then {
				_return pushBack ["rebel_spawn_2", "Rebels SW", "\a3\ui_f\data\map\MapControl\rock_ca.paa"];
			};
		} else {
			//
			// XOXO Beginner Spawn Point
			//
			if (_player_cash < 599999) then {
				_return pushBack ["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\ruin_ca.paa"];
			} else {
				_return pushBack ["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\church_ca.paa"];
			
				//
				// You can only spawn in the outer cities if you do not carry too much money around on you.
				//
				if (life_cash < 999999) then {
					_return pushBack ["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
					_return pushBack ["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"];
				};
			};
		};
	};

	case independent: {
		_return = [
			["medic_spawn_4","Athira Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_1","Kavala Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Pygros Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Airport Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;
