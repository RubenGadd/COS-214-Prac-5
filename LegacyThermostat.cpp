#include "LegacyThermostat.h"

int LegacyThermostat::legacyGetTemp() {
	cout << "Getting temperature from legacy device..." << endl;
	return temperature;
}

void LegacyThermostat::legacySetTemp(int temp) {
	cout << "Setting temperature of legacy device..." << endl;
	this->temperature = temp;
}
