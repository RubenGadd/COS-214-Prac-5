#include "Light.h"

Prac_5_Class_Diagram::Light::Light():Device("Light"){}

string Prac_5_Class_Diagram::Light::getStatus() {
	if(Device::getStatus() == "Active"){
		return "On";
	}else{
		return "Off";
	}
}

string Prac_5_Class_Diagram::Light::getDeviceType() {
	return this->name;
}

void Prac_5_Class_Diagram::Light::performAction() {
	State * curr = this->state;
	curr->performAction(this);
	delete curr;
}

void Prac_5_Class_Diagram::Light::update() {
	sensorState = sensor->getState();

	if(sensorState && this->getStatus() == "On") {
		cout << "Motion detected! Turn on the lights";
		return;
	}
}
