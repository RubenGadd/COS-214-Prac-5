#include "DoorLock.h"

string Prac_5_Class_Diagram::DoorLock::getStatus() {
	if(Device::getStatus() == "Active"){
		return "Locked";
	}else{
		return "Unlocked";
	}
}

string Prac_5_Class_Diagram::DoorLock::getDeviceType() {
	return this->name;
}

void Prac_5_Class_Diagram::DoorLock::performAction() {
	State * curr = this->state;
	curr->performAction(this);
	delete curr;
}

void Prac_5_Class_Diagram::DoorLock::operation() {
}

void Prac_5_Class_Diagram::DoorLock::update() {
	// TODO - implement DoorLock::update
	throw "Not yet implemented";
}
