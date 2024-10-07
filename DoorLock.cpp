#include "DoorLock.h"

Prac_5_Class_Diagram::DoorLock::DoorLock():Device("DoorLock"){}

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
	observerState = sensor->getState();

	if(this->getStatus()=="Locked" && observerState) { //the door is locked but the door is open
		cout << "Raise the alarm, there is an intruder" << endl;
		return;
	}

	cout << "Lock scanned, everything looks good" << endl;
 
}
