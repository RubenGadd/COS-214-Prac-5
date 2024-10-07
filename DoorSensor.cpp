#include "DoorSensor.h"

bool Prac_5_Class_Diagram::DoorSensor::getState() {
	return open;
}

bool Prac_5_Class_Diagram::DoorSensor::setState(bool state) {
	this->open = state;
}

