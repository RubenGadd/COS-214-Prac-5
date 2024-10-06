#ifndef THERMOMETER_H
#define THERMOMETER_H

namespace Prac_5_Class_Diagram {
	class Thermometer : Prac_5_Class_Diagram::Sensor {

	public:
		int temperature;

		int getState();

		void setState(int temp);
	};
}

#endif
