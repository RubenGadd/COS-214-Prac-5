#include "Inactive.h"

Prac_5_Class_Diagram::Inactive::Inactive():State("Inactive"){}

void Prac_5_Class_Diagram::Inactive::performAction(Prac_5_Class_Diagram::Device* device) {
	device->setState(new Active());
	if(device->getName() == "Light"){
		cout << "Lights switched on";
	}
	else if(device->getName() == "Thermostat"){
		cout << "Thermostat switched on";
	}
	else if(device->getName() == "Light"){
		cout << "Door lock switched on";
	}
}
