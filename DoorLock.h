#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Device.h"
#include "DoorSensor.h"

namespace Prac_5_Class_Diagram {
	class DoorLock : public Device {

	private:
		bool observerState;
		Prac_5_Class_Diagram::DoorSensor* sensor;

	public:
		DoorLock();
		string getStatus();

		string getDeviceType();

		void performAction();

		void operation();

		void update();
	};
}

#endif
