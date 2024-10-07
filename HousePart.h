#ifndef HOUSEPART_H
#define HOUSEPART_H

#include "Component.h"
#include "Device.h"
#include "Light.h"
#include "DoorLock.h"
#include "Thermostat.h"
#include <list>

using namespace std;

class HousePart : public Component {

public:
	list<Component*> children;
	HousePart(string n);
	~HousePart();
	string getStatus();

	string getDeviceType();

	void performAction(bool OnOff, string deviceType);

	Component* getChildren(int index);

	void addChildren(Component* component);

	void removeChildren(Component* component);
};


#endif
