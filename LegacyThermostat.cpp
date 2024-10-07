#include "LegacyThermostat.h"

LegacyThermostat::LegacyThermostat()
{
	this->temperature = 0;
}

int LegacyThermostat::legacyGetTemp()
{
    cout << "Getting temperature from legacy device..." << endl;
	return this->temperature;
}

void LegacyThermostat::legacySetTemp(int temp) {
	cout << "Setting temperature of legacy device..." << endl;
	this->temperature = temp;
}
