#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <vector>
#include "Device.h"
#include "Light.h"
#include "Thermostat.h"
#include "LegacyThermostat.h"
#include "DoorLock.h"
using namespace std;


class Sensor {

private:
	Device* device;

public:
	/// @brief Adds a devive to the sensor
	/// @param device A pointer to the device that is to be added to the sensor
	void addDevice(Device* device);

	/// @brief Removes the device that is connected to the sensor
	void removeDevice();

	/// @brief Sends an update notification to the connected device
	void notifyDevice();
};


#endif
