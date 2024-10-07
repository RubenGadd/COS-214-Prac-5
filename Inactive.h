#ifndef INACTIVE_H
#define INACTIVE_H

#include "State.h"
#include "Active.h"
#include "Device.h"
#include "Light.h"
#include "Thermostat.h"
#include "LegacyThermostat.h"
#include "DoorLock.h"


class Inactive : public State {
	public:
		Inactive();
		void performAction(Device* device);
};


#endif
