#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

namespace Prac_5_Class_Diagram {
	class MotionSensor : Prac_5_Class_Diagram::Sensor {
	
		private:
			/// @brief True if motion is detected by the sensor and False if not
			bool motionDetected;
	
		public:
			bool getState();
			void setState(bool state);
	};
}

#endif
