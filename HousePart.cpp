#include "HousePart.h"
/// @brief Constructor receives a name, which is the name of the HousePart and construct the HousePart object
/// @param n The name of the HousePart
HousePart::HousePart(string n):Component(n){}

/// @brief Destructs the HousePart Object, which is needed for the list
HousePart::~HousePart(){
	for( auto * device : children){
		delete device;
	}
	children.clear();
}

/// @brief A summary is made of the HousePart children list based on the type of device whether the device is active or inactive, eg. number of lights on and off
/// @return Returns a summary of the number of devices which are activated and Inactive based on the type of device
string HousePart::getStatus() {
	string out = "Status of Devices in: "+name+"\n";
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

/// @brief A summary of the number of devices in the HousePart children list is returned based on the type of device, eg. number of lights
/// @return Returns a summary of the number of devices
string HousePart::getDeviceType() {
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
/// @brief This function takes in a bool which 1 states the device should be on and 0 means off and the deviceType states which devices this should apply to. 
/// @param OnOff Parameter stating whether a device should be 1(on) or 0(Off)
/// @param deviceType The Device to which this action is going to apply
void HousePart::performAction(bool OnOff, string deviceType) {
	if(OnOff == 1){
		for( auto * device : children){
			if(deviceType == device->getDeviceType()){
				if(device->getStatus() == "Off" || device->getStatus() == "Unlocked"){
					device->performAction(1, deviceType);
				}
			}else{
				cout << "Invalid Device" << endl;
				return;
			}
		}
	}else{
		for( auto * device : children){
			if(deviceType == device->getDeviceType()){
				if(device->getStatus() == "On" || device->getStatus() == "Locked"){
					device->performAction(0, deviceType);
				}
			}else{
				cout << "Invalid Device";
				return;
			}
		}
	}
}

/// @brief It returns the component at the index passed in 
/// @param index The index to be returned
/// @return The component located at that given index
Component * HousePart::getChildren(int index) {
	if(index >= children.size() || index < 0) return nullptr;
	auto it = children.begin(); 
	advance(it, index); 
	return *it;
}

/// @brief Add the specified component to the children's list
/// @param component The component to be added
void HousePart::addChildren(Component* component) {
	children.push_back(component);
}

/// @brief Removes the specified component for the children's list
/// @param component The component to be removed
void HousePart::removeChildren(Component* component) {
	children.remove(component);
}
