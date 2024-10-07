#include "TurnOffAllLights.h"
/// @brief Send housepart the command of switching off all the lights in a room
/// @param room The HousePart object which will receive this command
void TurnOffAllLights::execute(HousePart& room) {
	cout << "Turning off all lights..." << endl;
	room.performAction(0, "Light");
}
