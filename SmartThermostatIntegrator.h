#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include "Thermostat.h"
#include "LegacyThermostat.h"
#include <iostream>
using namespace std;

namespace Prac_5_Class_Diagram {
	class SmartThermostatIntegrator : Prac_5_Class_Diagram::Thermostat {

	private:
		Prac_5_Class_Diagram::LegacyThermostat* legacyThermostat;

	public:
		SmartThermostatIntegrator(LegacyThermostat legacyThermostat);
		void setTemperature(int temp);
		int getTemperature();
	};
}

#endif
