#include "Active.h"

Prac_5_Class_Diagram::Active::Active():State("Active"){}

void Prac_5_Class_Diagram::Active::performAction(Device* device) {
	device->setState(new Inactive());

	if(device->getName() == "Light"){
		cout << "Lights switched off";
	}
	else if(device->getName() == "Thermostat"){
		cout << "Thermostat switched off";
	}
	else if(device->getName() == "DoorLock"){
		cout << "Door lock switched off";
	}
	//delete this;
}
