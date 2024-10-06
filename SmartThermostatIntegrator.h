#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

namespace Prac_5_Class_Diagram {
	class SmartThermostatIntegrator : Prac_5_Class_Diagram::Thermostat {

	public:
		Prac_5_Class_Diagram::LegacyThermostat* LegacyThermostat;

		void setTemperature(int temp);

		int getTemperature();
	};
}

#endif
