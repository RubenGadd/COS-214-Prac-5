#include "SmartThermostatIntegrator.h"

 SmartThermostatIntegrator::SmartThermostatIntegrator(LegacyThermostat legacyThermostat)
{
	this->legacyThermostat = &legacyThermostat;
}

void  SmartThermostatIntegrator::setTemperature(int temp)
{
    legacyThermostat->legacySetTemp(temp);
}

int  SmartThermostatIntegrator::getTemperature() {
	return legacyThermostat->legacyGetTemp();
}
