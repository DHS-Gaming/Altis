/*
	@Author: =IFD= Cryptonat
	@Created: 2/22/14
	
	Description:
	Saves the players gear.
*/

while {true} do {
	sleep 180;
	
	if (alive player) then {
		[] call SOCK_fnc_syncData;
		hint "Game autosaved."
	};
};