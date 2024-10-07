#ifndef DEVICE_H
#define DEVICE_H


#include "Component.h"
#include "State.h"


#include <string>
class Inactive;
class Active;

using namespace std;

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
