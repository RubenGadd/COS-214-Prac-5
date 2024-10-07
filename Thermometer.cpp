#include "Thermometer.h"

int  Thermometer::getState() {
	return temperature;
}

void  Thermometer::setState(int temp) {
	this->temperature = temp;
}
