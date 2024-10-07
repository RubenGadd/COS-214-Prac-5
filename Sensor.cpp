#include "Sensor.h"

void Sensor::addDevice( Device* device) {

	if(this->device != NULL) {
		cout << "There is already a device added to this sensor, you have to remove it first" << endl;
		return;
	}

	cout << "Added device to sensor" << endl;
	this->device = device;
}

void Sensor::removeDevice() {
	cout << "Removing device from sensor" << endl;
	this->device = NULL;
}

void Sensor::notifyDevice() {
	cout << "Notifying device..." << endl;
	this->device->update();
}
