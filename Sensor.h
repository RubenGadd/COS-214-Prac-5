#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <vector>
#include "Device.h"
using namespace std;

namespace Prac_5_Class_Diagram {
	class Sensor {

	private:
		Prac_5_Class_Diagram::Device* device;

	public:
		/// @brief Adds a devive to the sensor
		/// @param device A pointer to the device that is to be added to the sensor
		void addDevice(Prac_5_Class_Diagram::Device* device);

		/// @brief Removes the device that is connected to the sensor
		void removeDevice();

		/// @brief Sends an update notification to the connected device
		void notifyDevice();
	};
}

#endif
