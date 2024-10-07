#include "MotionSensor.h"

bool Prac_5_Class_Diagram::MotionSensor::getState() {
	return motionDetected;
}

void Prac_5_Class_Diagram::MotionSensor::setState(bool state)
{
	this->motionDetected = state;
}
