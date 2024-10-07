#ifndef THERMOMETER_H
#define THERMOMETER_H

#include "Sensor.h"
#include <iostream>
using namespace std;


class Thermometer : public Sensor {

private:
	/// @brief The temperature in the room measured by the thermomenter in °C
	int temperature;

public:
	/// @brief Accessor function for the temperature measured by the thermometer in °C
	/// @return Temperature in °C
	int getState();

	/// @brief Sets the temperature measured by the thermometer
	/// @param temp The temperature in °C
	void setState(int temp);
};


#endif
