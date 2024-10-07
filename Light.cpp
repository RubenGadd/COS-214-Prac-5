#include "Light.h"
#include "MotionSensor.h"

/// @brief Construct Light object and passes Light string as device name into Device's constructor
Light::Light():Device("Light"){}

Light::~Light(){
	delete sensor;
}

/// @brief Uses device's getStatus to get the name of the state veriable and returns a string giving the result but in terms of the device, eg Light's are On or Off
/// @return Returns a string of the devices state
string Light::getStatus() {
	if(Device::getStatus() == "Active"){
		return "On";
	}else{
		return "Off";
	}
}

/// @brief Returns the name of the device
/// @return Returns a string which is the name of the device
string Light::getDeviceType() {
	return this->name;
}


void Light::update() {
	sensorState = sensor->getState();

	if(sensorState && this->getStatus() == "Off") {
		cout << "Motion detected! Turn on the lights";
		this->performAction(true,"Light");
		return;
	}
}
