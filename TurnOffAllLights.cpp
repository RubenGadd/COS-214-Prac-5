#include "TurnOffAllLights.h"
/// @brief Send housepart the command of switching off all the lights in a room
/// @param room The HousePart object which will receive this command
void Prac_5_Class_Diagram::TurnOffAllLights::execute(HousePart * room) {
	room->performAction(0, "Light");
}
