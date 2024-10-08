#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "Device.h"
#include "Thermometer.h"

class Thermometer;

class Thermostat : public Device {

private:
	int sensorState; //the actual temperature of the room
	int tempSetting; //the temperature the thermostat is set to
	Thermometer* thermometer;

public:
	Thermostat();
	~Thermostat();

	/// @brief Accessor function for the state of the thermostat (if the thermostat is turned on or off)
	/// @return String value "On" if the thermostat is on and "Off" if the thermostat is off 
	string getStatus();

	/// @brief Accessor function for the name of a device
	/// @return String value of the name of the device, for example "Thermostat"
	string getDeviceType();
	void update();

	/// @brief Accessor method for the legacy thermostat's temperature setting
	/// @return The current temperature setting from the legacy thermostat in °C
	virtual int getTemperature();

	/// @brief Set the temperature setting from the legacy thermostat
	/// @param temp The temperature in °C that the thermostat is to be set to
	virtual void setTemperature(int temp);

	void warmUp(int);
	void setSensor(Thermometer* sensor);
};


#endif
