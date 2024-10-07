#include "Light.h"

/// @brief Construct Light object and passes Light string as device name into Device's constructor
Prac_5_Class_Diagram::Light::Light():Device("Light"){}

/// @brief Uses device's getStatus to get the name of the state veriable and returns a string giving the result but in terms of the device, eg Light's are On or Off
/// @return Returns a string of the devices state
string Prac_5_Class_Diagram::Light::getStatus() {
	if(Device::getStatus() == "Active"){
		return "On";
	}else{
		return "Off";
	}
}

/// @brief Returns the name of the device
/// @return Returns a string which is the name of the device
string Prac_5_Class_Diagram::Light::getDeviceType() {
	return this->name;
}


void Prac_5_Class_Diagram::Light::update() {
	sensorState = sensor->getState();

	if(sensorState && this->getStatus() == "On") {
		cout << "Motion detected! Turn on the lights";
		return;
	}
}
