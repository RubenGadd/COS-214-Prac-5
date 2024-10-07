#include "DoorSensor.h"

bool DoorSensor::getState() {
	return open;
}

void DoorSensor::setState(bool state) {
	this->open = state;
}

void DoorSensor::addDevice(DoorLock *lock)
{
	if(this->device != NULL) {
		cout << "There is already a device added to this sensor, you have to remove it first" << endl;
		return;
	}

	cout << "Added device to sensor" << endl;
	this->device = lock;
	lock->setSensor(this);
}

void DoorSensor::notifyDevice() {
	this->device->update();
}
