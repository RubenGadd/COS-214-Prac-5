#ifndef LIGHT_H
#define LIGHT_H

#include "Device.h"
#include "Sensor.h"

class MotionSensor;
using namespace std;


class Light : public Device {

	private:
		bool sensorState;
			MotionSensor* sensor;

	public:
		Light();
		string getStatus();
		string getDeviceType();
		void update();
};


#endif
