#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include "Sensor.h"


class DoorSensor : public Sensor {

private:
	/// @brief The state of the door sensor (subject). True when the door is open and false if the door is closed
	bool open;

public:
	/// @brief The state of the door sensor (subject). True when the door is open and false if the door is closed
	/// @return Boolean value of the state of the door sensor
	bool getState();
	bool setState(bool state);
};


#endif
