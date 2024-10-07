#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "Light.h"
#include "Thermostat.h"
#include "LegacyThermostat.h"
#include "DoorLock.h"


class MotionSensor : Sensor {

	private:
		/// @brief True if motion is detected by the sensor and False if not
		bool motionDetected;

	public:
		bool getState();
		void setState(bool state);
};


#endif
