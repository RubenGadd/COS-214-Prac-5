#include "Sensor.h"

void Prac_5_Class_Diagram::Sensor::addDevice(Prac_5_Class_Diagram::Device* device) {

	if(this->device != NULL) {
		cout << "There is already a device added to this sensor, you have to remove it first" << endl;
		return;
	}

	cout << "Added devive to sensor" << endl;
	this->device = device;
}

void Prac_5_Class_Diagram::Sensor::removeDevice() {
	cout << "Removing device from sensor" << endl;
	this->device = NULL;
}

void Prac_5_Class_Diagram::Sensor::notifyDevice() {
	cout << "Notifying device..." << endl;
	this->device->update();
}
