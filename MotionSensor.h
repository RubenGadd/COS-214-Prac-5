#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

namespace Prac_5_Class_Diagram {
	class MotionSensor : Prac_5_Class_Diagram::Sensor {

	public:
		bool motionDetected;

		bool getState();

		void setState();
	};
}

#endif
