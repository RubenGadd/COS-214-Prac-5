#include "HousePart.h"

Prac_5_Class_Diagram::HousePart::~HousePart(){
	for( auto * device : children){
		delete device;
	}
	children.clear();
}

string Prac_5_Class_Diagram::HousePart::getStatus() {
	string out = "Status of Devices in room: \n";
	int doorLocked = 0;
	int doorUnlocked = 0;
	int lightOn = 0;
	int lightOff = 0;
	int thermoOn = 0;
	int thermoOff = 0;
	for( auto * device : children){
		if(device->getDeviceType() == "Light"){
			if(device->getStatus() == "On"){
				lightOn++;
			}else{
				lightOff++;
			}
		}else if(device->getDeviceType() == "DoorLock"){
			if(device->getStatus() == "Locked"){
				doorLocked++;
			}else{
				doorUnlocked++;
			}
		}else if(device->getDeviceType() == "Thermostat"){
			
			if(device->getStatus() == "On"){
				thermoOn++;
			}else{
				thermoOff++;
			}
		}
	}
	out += "\tLights On: " + to_string(lightOn) 
		+ "\n\tLights Off: " + to_string(lightOff) 
		+ "\n\tDoors Locked: " + to_string(doorLocked) 
		+ "\n\tDoors Unlocked: " + to_string(doorUnlocked)
		+ "\n\tThermostats On: " + to_string(thermoOn)
		+ "\n\tThermostats Off: " + to_string(thermoOff);
		 
	return out;
}

string Prac_5_Class_Diagram::HousePart::getDeviceType() {
	string out = "Number of Devices in room: \n";
	int doorNum = 0;
	int lightNum = 0;
	int thermoNum = 0;
	int unknown = 0;
	for( auto * device : children){
		if(device->getDeviceType() == "Light"){
			lightNum++;
		}else if(device->getDeviceType() == "DoorLock"){
			doorNum++;
		}else if(device->getDeviceType() == "Thermostat"){
			thermoNum++;
		}else{
			unknown++;
		}
	}
	out += "\tNumber of Lights: " + to_string(lightNum) 
		+ "\n\tNumber of DoorLocks: " + to_string(doorNum)
		+ "\n\tNumber of Thermostats: " + to_string(thermoNum)
		+ "\n\tNumber of Unknown Devices: " + to_string(unknown);
		 
	return out;
}

void Prac_5_Class_Diagram::HousePart::performAction() {
	// TODO - implement HousePart::performAction
	throw "Not yet implemented";
}

Component * Prac_5_Class_Diagram::HousePart::getChildren(int index) {
	if(index >= children.size() || index < 0) return nullptr;
	auto it = children.begin(); 
	advance(it, index); 
	return *it;
}

void Prac_5_Class_Diagram::HousePart::addChildren(Component* component) {
	children.push_back(component);
}

void Prac_5_Class_Diagram::HousePart::removeChildren(Component* component) {
	children.remove(component);
}
