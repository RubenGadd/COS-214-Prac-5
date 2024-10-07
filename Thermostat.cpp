#include "Thermostat.h"

/// @brief Construct Thermostat object and passes Thremostat string as device name into Device's constructor
Prac_5_Class_Diagram::Thermostat::Thermostat():Device("Thermostat"){}

/// @brief Uses device's getStatus to get the name of the state veriable and returns a string giving the result but in terms of the device, eg Light's are On or Off
/// @return Returns a string of the devices state
string Prac_5_Class_Diagram::Thermostat::getStatus() {
	if(Device::getStatus() == "Active"){
		return "On";
	}else{
		return "Off";
	}
}

/// @brief Returns the name of the device
/// @return Returns a string which is the name of the device
string Prac_5_Class_Diagram::Thermostat::getDeviceType() {
	return this->name;
}

void Prac_5_Class_Diagram::Thermostat::update() {
	sensorState = this->thermometer->getState();

	if(sensorState == tempSetting) {  //if the room is hot/cold enough
		cout << "The temperature is right, turn the heating/cooling off" << endl;
		this->performAction();  // maybe replace this with turnOn
	}
}

int Prac_5_Class_Diagram::Thermostat::getTemperature() {
	return tempSetting;
}

void Prac_5_Class_Diagram::Thermostat::setTemperature(int temp)
{
	this->tempSetting = temp;
}
