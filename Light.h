#ifndef LIGHT_H
#define LIGHT_H

#include "Device.h"
#include "MotionSensor.h"
using namespace std;

namespace Prac_5_Class_Diagram {
	class Light : public Device {

	private:
		bool sensorState;
		Prac_5_Class_Diagram::MotionSensor* sensor;

	public:
		Light();
		string getStatus();
		string getDeviceType();
		void update();
	};
}

#endif
