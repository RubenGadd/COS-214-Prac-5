#ifndef THERMOMETER_H
#define THERMOMETER_H

#include "Sensor.h"
#include <iostream>
using namespace std;

namespace Prac_5_Class_Diagram {
	class Thermometer : public Sensor {

	public:
		int temperature;

		int getState();

		void setState(int temp);
	};
}

#endif
