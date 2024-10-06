#ifndef DOORSENSOR_H
#define DOORSENSOR_H

namespace Prac_5_Class_Diagram {
	class DoorSensor : Prac_5_Class_Diagram::Sensor {

	public:
		bool open;

		bool getState();

		bool setState();
	};
}

#endif
