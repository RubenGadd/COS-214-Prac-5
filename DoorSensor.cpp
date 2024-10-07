#include "DoorSensor.h"

bool DoorSensor::getState() {
	return open;
}

void DoorSensor::setState(bool state) {
	this->open = state;
}

