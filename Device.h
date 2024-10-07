#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include "Component.h"
using namespace std;
#include "State.h"
#include "Active.h"
#include "Inactive.h"
#include "Sensor.h"



class Device : public Component {

protected:
	State* state;
public:
	Device(string n);
	
	virtual void update() = 0;

	virtual string getDeviceType() = 0;

	virtual string getStatus();

	void performAction(bool OnOff, string deviceType);

	void setState(State * s);
};

#endif
