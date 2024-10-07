#ifndef ACTIVE_H
#define ACTIVE_H

#include "State.h"
#include "Active.h"
#include "Device.h"
#include "Light.h"
#include "Thermostat.h"
#include "LegacyThermostat.h"
#include "DoorLock.h"

class Active : public State {


public:
	Active();
	void performAction(Device* device);
};


#endif
