#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

#include <iostream>
using namespace std;

namespace Prac_5_Class_Diagram {
	class LegacyThermostat {
	
		private:
			int temperature;

		public:
			int legacyGetTemp();
			void legacySetTemp(int temp);
			
	};
}

#endif
