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
