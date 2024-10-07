#include "SmartThermostatIntegrator.h"

Prac_5_Class_Diagram::SmartThermostatIntegrator::SmartThermostatIntegrator(LegacyThermostat legacyThermostat)
{
	this->legacyThermostat = &legacyThermostat;
}

void Prac_5_Class_Diagram::SmartThermostatIntegrator::setTemperature(int temp)
{
    legacyThermostat->legacySetTemp(temp);
}

int Prac_5_Class_Diagram::SmartThermostatIntegrator::getTemperature() {
	legacyThermostat->legacyGetTemp();
}
