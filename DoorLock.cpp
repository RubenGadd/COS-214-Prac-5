#include "DoorLock.h"

/// @brief Construct DoorLock object and passes DoorLock string as device name into Device's constructor
Prac_5_Class_Diagram::DoorLock::DoorLock():Device("DoorLock"){}

/// @brief Uses device's getStatus to get the name of the state veriable and returns a string giving the result but in terms of the device, eg Light's are On or Off
/// @return Returns a string of the devices state
string Prac_5_Class_Diagram::DoorLock::getStatus() {
	if(Device::getStatus() == "Active"){
		return "Locked";
	}else{
		return "Unlocked";
	}
}

/// @brief Returns the name of the device
/// @return Returns a string which is the name of the device
string Prac_5_Class_Diagram::DoorLock::getDeviceType() {
	return this->name;
}

void Prac_5_Class_Diagram::DoorLock::operation() {
}

void Prac_5_Class_Diagram::DoorLock::update() {
	// TODO - implement DoorLock::update
	throw "Not yet implemented";
}
