#include "DoorLock.h"

/// @brief Construct DoorLock object and passes DoorLock string as device name into Device's constructor
DoorLock::DoorLock():Device("DoorLock"){}

/// @brief Uses device's getStatus to get the name of the state veriable and returns a string giving the result but in terms of the device, eg Light's are On or Off
/// @return Returns a string of the devices state
string DoorLock::getStatus() {
	if(Device::getStatus() == "Active"){
		return "Locked";
	}else{
		return "Unlocked";
	}
}

/// @brief Returns the name of the device
/// @return Returns a string which is the name of the device
string DoorLock::getDeviceType() {
	return this->name;
}

/// @brief Opens the door if it is closed and visa versa
void DoorLock::operation() {
	if(this->observerState == false)
		this->observerState = true;
	else
		this->observerState = false;
}

void DoorLock::update() {
	cout << "Door lock updating..." << endl;

	if(this->getStatus()=="Locked" && observerState) { //the door is lunocked but the door is open
		cout << "Raise the alarm, there is an intruder" << endl;
		return;
	}

	cout << "Lock scanned, everything looks good" << endl;
 
}

void DoorLock::setSensor(DoorSensor *sensor) {
	this->sensor = sensor;
}


