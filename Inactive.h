#ifndef INACTIVE_H
#define INACTIVE_H


#include "Device.h"
#include "State.h"

class Active;

class Inactive : public State {
	public:
		Inactive();
		void performAction(Device* device);
};


#endif
