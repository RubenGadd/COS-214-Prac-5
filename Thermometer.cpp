#include "Thermometer.h"

int  Thermometer::getState() {
	return temperature;
}

void  Thermometer::setState(int temp) {
	this->temperature = temp;
}

void Thermometer::addDevice(Thermostat *device) {
	if(this->device != NULL) {
		cout << "There is already a device added to this sensor, you have to remove it first" << endl;
		return;
	}

	cout << "Added devive to sensor" << endl;
	this->device = thermostat;
}
