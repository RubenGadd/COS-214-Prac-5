#include "LegacyThermostat.h"

int Prac_5_Class_Diagram::LegacyThermostat::legacyGetTemp() {
	cout << "Getting temperature from legacy device..." << endl;
	return temperature;
}

void Prac_5_Class_Diagram::LegacyThermostat::legacySetTemp(int temp) {
	cout << "Setting temperature of legacy device..." << endl;
	this->temperature = temp;
}
