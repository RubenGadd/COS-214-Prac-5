#ifndef LIGHT_H
#define LIGHT_H

namespace Prac_5_Class_Diagram {
	class Light : Prac_5_Class_Diagram::Device {

	private:
		bool sensorState;
		Prac_5_Class_Diagram::Sensor* sensor;

	public:
		string getStatus();

		string getDeviceType();

		void performAction();

		void update();
	};
}

#endif
