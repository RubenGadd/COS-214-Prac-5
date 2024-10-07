#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Device.h"

namespace Prac_5_Class_Diagram {
	class DoorLock : public Device {

	private:
		bool* sensorState;
		Prac_5_Class_Diagram::Sensor* sensor;

	public:
		DoorLock();
		string getStatus();

		string getDeviceType();

		void operation();

		void update();
	};
}

#endif
