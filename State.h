#ifndef STATE_H
#define STATE_H

#include "Device.h"
#include "Light.h"
#include "Thermometer.h"
#include "DoorLock.h"

#include <iostream>

namespace Prac_5_Class_Diagram {
	class State {

	private:
		string status;

	public:
		State(string s);
		string getStatus();
		virtual void performAction(Prac_5_Class_Diagram::Device* device) = 0;
	};
}

#endif
