#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Device.h"

namespace Prac_5_Class_Diagram {
	class DoorLock : public Device {

	private:
		bool* sensorState;
		Prac_5_Class_Diagram::Sensor* sensor;

	public:
		string getStatus();

		string getDeviceType();

		void performAction();

		void operation();

		void update();
	};
}

#endif
