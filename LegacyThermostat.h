#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

#include <iostream>
using namespace std;


class LegacyThermostat {

	private:
		int temperature;

	public:

		/// @brief Accessor method for the current temperature setting of the legacy thermostat
		/// @return The current temperature setting for the thermostat in °C
		int legacyGetTemp();

		/// @brief Sets the temperature of the legacy thermostat
		/// @param temp The temperature in °C that the thermostat is to be set to
		void legacySetTemp(int temp);

};


#endif
