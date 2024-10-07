#include "Thermometer.h"

int Prac_5_Class_Diagram::Thermometer::getState() {
	return temperature;
}

void Prac_5_Class_Diagram::Thermometer::setState(int temp) {
	this->temperature = temp;
}
