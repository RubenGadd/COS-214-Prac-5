#include "LockAllDoors.h"
/// @brief Send housepart the command of locking all the doors in a room
/// @param room The HousePart object which will receive this command
void LockAllDoors::execute(HousePart& room) {
	cout << "Locking all doors..." << endl;
	room.performAction(1, "DoorLock");
}
