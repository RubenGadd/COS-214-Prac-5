#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "Device.h"
#include "Thermometer.h"

namespace Prac_5_Class_Diagram {
	class Thermostat : public Device {

	private:
		int* sensorState;
		Prac_5_Class_Diagram::Sensor* sensor;

	public:
		Thermostat();
		string getStatus();

		string getDeviceType();

		void update();

		virtual int getTemperature() = 0;

		virtual void setTemperature(int temp) = 0;
	};
}

#endif
