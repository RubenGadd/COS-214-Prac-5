#include "Thermostat.h"

/// @brief Construct Thermostat object and passes Thremostat string as device name into Device's constructor
Thermostat::Thermostat():Device("Thermostat"){}

Thermostat::~Thermostat(){
	delete thermometer;
}

/// @brief Uses device's getStatus to get the name of the state veriable and returns a string giving the result but in terms of the device, eg Light's are On or Off
/// @return Returns a string of the devices state
string Thermostat::getStatus() {
	if(Device::getStatus() == "Active"){
		return "On";
	}else{
		return "Off";
	}
}

/// @brief Returns the name of the device
/// @return Returns a string which is the name of the device
string Thermostat::getDeviceType() {
	return this->name;
}

void Thermostat::update() {

	if(sensorState == tempSetting) {  //if the room is hot/cold enough
		cout << "The temperature is right, turn the heating/cooling off" << endl;
		this->performAction(false,"Thermostat");  // maybe replace this with turnOn
	}
	else {
		cout << "The temperature is right, turning heating/cooling off" << endl;
		this->performAction(true,"Thermostat");
	}
}

int Thermostat::getTemperature() {
	return tempSetting;
}

void Thermostat::setTemperature(int temp)
{
	this->tempSetting = temp;
}

void Thermostat::warmUp(int x) {
	this->sensorState == x;
}

void Thermostat::setSensor(Thermometer *sensor)
{
	this->thermometer = sensor;
}
