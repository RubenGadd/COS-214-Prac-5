#include "MotionSensor.h"

bool MotionSensor::getState() {
	return motionDetected;
}

void MotionSensor::setState(bool state)
{
	getState();
	this->motionDetected = state;
}
