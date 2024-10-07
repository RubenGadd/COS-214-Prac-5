#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;
#include <vector>
#include "HousePart.h"
#include "Component.h"
#include "Device.h"
#include "Thermostat.h"
#include "Light.h"
#include "DoorLock.h"

class House {
	private:
		vector<HousePart> rooms;
	public:
		House(vector<string> roomsList);
		HousePart getHousePart(int index);
        string toString();

		void addThermostat(int);
		void addLight(int);
		void addDoorLock(int);
};

#endif
