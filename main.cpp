#include <iostream>
#include <vector>
using namespace std;

#include "House.h"
#include "Sensor.h"
#include "Thermometer.h"

int main(){

    //create some rooms and add them to a house
    vector<string> rooms = {"Garage","Kitchen","MainBedroom","LivingRoom"};
    House house1(rooms);

    //add devices to the rooms
    house1.addLight(0);
    house1.addLight(1);
    house1.addLight(1);
    house1.addLight(1);
    house1.addLight(2);
    house1.addLight(3);

    house1.addThermostat(1);
    house1.addThermostat(2);
    house1.addThermostat(3);  //maybe this gets a legacy thermostat?

    house1.addDoorLock(0);
    house1.addDoorLock(0);
    house1.addDoorLock(0);
    house1.addDoorLock(1);
    house1.addDoorLock(2);

    //toggle some switches
    Thermostat thr1;
    thr1.performAction(true,"Thermostat");
    cout << thr1.getStatus() << endl;
    thr1.setTemperature(18);
    cout << thr1.getTemperature() << endl;


    //finally, print the state of the home
    cout << house1.toString() << endl;

    return 0;
}