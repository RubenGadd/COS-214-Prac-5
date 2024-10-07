#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include "Thermostat.h"
#include "LegacyThermostat.h"
#include <iostream>
using namespace std;


class SmartThermostatIntegrator : public  Thermostat {

private:
		LegacyThermostat* legacyThermostat;

public:

	/// @brief Constructor that sets the adaptee to the adapter
	/// @param legacyThermostat The adaptee
	SmartThermostatIntegrator(LegacyThermostat legacyThermostat);
	void setTemperature(int temp);
	int getTemperature();
};


#endif
