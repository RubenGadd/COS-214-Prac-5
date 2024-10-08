#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Device.h"
#include "DoorSensor.h"
#include "Active.h"
#include "Inactive.h"

class DoorSensor;

class DoorLock : public Device {

private:
	bool observerState;
	DoorSensor* sensor;

public:

	DoorLock();
	~DoorLock();
	string getStatus();

	string getDeviceType();

	void operation();

	void update();

	void setSensor(DoorSensor* sensor);
};


#endif
