#include "Active.h"
#include "Inactive.h"

/// @brief Passes Active into State as the State name
Active::Active():State("Active"){}

/// @brief Switches the states of the device to an Inactive Object, and thus state, and giving an output to clarify what device had a change in state
/// @param device The device to which this change applies 
void Active::performAction(Device* device) {
	State * newS = new Inactive();
	device->setState(newS);

	if(device->getName() == "Light"){
		cout << "Lights switched off" << endl;
	}
	else if(device->getName() == "Thermostat"){
		cout << "Thermostat switched off" << endl;
	}
	else if(device->getName() == "DoorLock"){
		cout << "Door lock switched off" << endl;
	}
}
