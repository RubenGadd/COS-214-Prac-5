#ifndef THERMOSTAT_H
#define THERMOSTAT_H

namespace Prac_5_Class_Diagram {
	class Thermostat : Prac_5_Class_Diagram::Device {

	private:
		int* sensorState;
		Prac_5_Class_Diagram::Sensor* sensor;

	public:
		string getStatus();

		string getDeviceType();

		void performAction();

		void update();

		virtual int getTemperature() = 0;

		virtual void setTemperature(int temp) = 0;
	};
}

#endif
