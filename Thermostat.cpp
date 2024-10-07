#include "Thermostat.h"

Prac_5_Class_Diagram::Thermostat::Thermostat():Device("Thermostat"){}

string Prac_5_Class_Diagram::Thermostat::getStatus() {
	if(Device::getStatus() == "Active"){
		return "On";
	}else{
		return "Off";
	}
}

string Prac_5_Class_Diagram::Thermostat::getDeviceType() {
	return this->name;
}

void Prac_5_Class_Diagram::Thermostat::performAction() {
	State * curr = this->state;
	curr->performAction(this);
	delete curr;
}

void Prac_5_Class_Diagram::Thermostat::update() {
	// TODO - implement Thermostat::update
	throw "Not yet implemented";
}

int Prac_5_Class_Diagram::Thermostat::getTemperature() {
	return tempSetting;
}

void Prac_5_Class_Diagram::Thermostat::setTemperature(int temp)
{
	this->tempSetting = temp;
}
