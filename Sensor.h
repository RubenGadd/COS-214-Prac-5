#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <vector>
#include "Device.h"
using namespace std;

namespace Prac_5_Class_Diagram {
	class Sensor {

	private:
		vector<Prac_5_Class_Diagram::Device*> devices;

	public:
		void addDevice(Prac_5_Class_Diagram::Device device);

		void removeDevice(Prac_5_Class_Diagram::Device devive);

		void notifyDevices();
	};
}

#endif
