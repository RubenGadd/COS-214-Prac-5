#include "Inactive.h"
#include "Active.h"

/// @brief Passes Inactive into State as the State name
Inactive::Inactive():State("Inactive"){}

/// @brief Switches the states of the device to an Active Object, and thus state, and giving an output to clarify what device had a change in state
/// @param device The device to which this change applies 
void Inactive::performAction( Device* device) {
	State * newS = new Active();
	device->setState(newS);
	if(device->getName() == "Light"){
		cout << "Lights switched on";
	}
	else if(device->getName() == "Thermostat"){
		cout << "Thermostat switched on";
	}
	else if(device->getName() == "DoorLock"){
		cout << "Door lock switched on";
	}
}
