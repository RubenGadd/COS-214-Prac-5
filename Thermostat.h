#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "Device.h"
#include "Thermometer.h"

namespace Prac_5_Class_Diagram {
	class Thermostat : public Device {

	private:
		int* sensorState; //the actual temperature of the room
		int tempSetting; //the temperature the thermostat is set to
		Prac_5_Class_Diagram::Sensor* sensor;

	public:
		Thermostat();
		string getStatus();

		string getDeviceType();

		void performAction();

		void update();

		virtual int getTemperature(); //get the current temp setting from the legacy thermostat

		virtual void setTemperature(int temp); //set the temp setting from the legacy thermostat
	};
}

#endif
