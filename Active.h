#ifndef ACTIVE_H
#define ACTIVE_H

#include "Device.h"
#include "State.h"


class Inactive;

class Active : public State {


public:
	Active();
	void performAction(Device* device);
};


#endif
