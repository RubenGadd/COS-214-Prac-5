#include "DoorSensor.h"

bool DoorSensor::getState() {
	return open;
}

bool DoorSensor::setState(bool state) {
	this->open = state;
}

