#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;
#include <vector>
#include "MacroRoutine.h"
#include "HousePart.h"
#include "Component.h"
#include "Device.h"
#include "Thermostat.h"
#include "Light.h"
#include "DoorLock.h"
#include "LegacyThermostat.h"
#include "SmartThermostatIntegrator.h"

class House {
	public:
		vector<HousePart> rooms;
		MacroRoutine routines;
		House(vector<string> roomsList);
		HousePart getHousePart(int index);
        string toString();
		void addThermostat(int);
		void addLight(int);
		void addDoorLock(int);
		void activateRoutine();
		void addLegacyThermostat(int i);
};

#endif
