#include <iostream>
#include <vector>
using namespace std;

#include "House.h"
#include "Sensor.h"
#include "Thermometer.h"
#include "DoorSensor.h"
#include "MotionSensor.h"
#include "MacroRoutine.h"

int main(){

    //create some rooms and add them to a house
    vector<string> rooms = {"Garage","Kitchen","MainBedroom","LivingRoom","OutsideRoom"};
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
    house1.addLegacyThermostat(3); 

    house1.addDoorLock(0);
    house1.addDoorLock(0);
    house1.addDoorLock(0);
    house1.addDoorLock(1);
    house1.addDoorLock(2);

    //toggle some switches
    house1.rooms[0].getChildren(0)->performAction(true,"Light");
    house1.rooms[0].getChildren(2)->performAction(true,"DoorLock");
    house1.rooms[1].getChildren(3)->performAction(true,"Thermostat");
    house1.rooms[2].getChildren(2)->performAction(true,"DoorLock");

    house1.rooms[3].getChildren(1)->performAction(true,"Thermostat");
    house1.rooms[3].getChildren(1)->performAction(false,"Thermostat");
    house1.rooms[3].getChildren(1)->performAction(true,"Thermostat");

    house1.rooms[0].getChildren(0)->getStatus();
    house1.rooms[0].getChildren(0)->getDeviceType();

    house1.addDoorLock(4);
    Component* rem = house1.rooms[4].getChildren(0);
    rem->getDeviceType();
    house1.rooms[4].removeChildren(rem);

    //set thermostat temperatures
    cout << "Modern thermometer:" << endl;

    Thermostat* kitchenTherm = dynamic_cast<Thermostat*>(house1.rooms[1].getChildren(3));
    kitchenTherm->setTemperature(18);
    cout << "Kitchen thermometer temperature: " << kitchenTherm->getTemperature() << endl;

    Thermostat* bedroomTherm = dynamic_cast<Thermostat*>(house1.rooms[2].getChildren(1));
    bedroomTherm->setTemperature(25);
    cout << "Main Bedroom thermometer temperature: " << bedroomTherm->getTemperature() << endl;

    //set legacy thermometer temps
    cout << "Legacy thermometer:" << endl;
    Thermostat* loungeTherm = dynamic_cast<Thermostat*>(house1.rooms[3].getChildren(1));
    loungeTherm->setTemperature(20);
    cout << "Living Room thermometer temperature: \n" << loungeTherm->getTemperature() << endl;

    //open some doors
    cout << "DOOR OBSERVER TESTING" << endl;
    DoorLock* garageDoor1 = dynamic_cast<DoorLock*>(house1.rooms[0].getChildren(2));
    DoorSensor* garageDoorSensor = new DoorSensor();
    garageDoor1->operation();
    garageDoorSensor->addDevice(garageDoor1);
    garageDoorSensor->setState(true);
    garageDoorSensor->notifyDevice();

    //test motion detecting lights
    cout << "LIGHT OBSERVER TESTING" << endl;
    Light* light1 = dynamic_cast<Light*>(house1.rooms[1].getChildren(0));
    light1->move();
    MotionSensor* motionSensor = new MotionSensor();
    motionSensor->addDevice(light1);
    motionSensor->setState(true);
    motionSensor->notifyDevice();

    //test thermostat observer
    cout << "THERMOSTAT OBSERVER TESTING" << endl;
    Thermostat* device = dynamic_cast<Thermostat*>(house1.rooms[1].getChildren(3));
    device->warmUp(18);
    Thermometer* meter = new Thermometer();
    meter->addDevice(device);
    meter->setState(18);
    meter->notifyDevice();
    meter->removeDevice();

    //commands
    cout << "COMMAND TESTING" << endl;
    MacroRoutine* routine = new MacroRoutine("Goodnight");
    routine->addProcedure(new TurnOffAllLights());
    routine->addProcedure(new LockAllDoors());
    routine->executeRoutine(house1.rooms[2]);
    cout << "Goodnight routine completed" << endl;

    //finally, print the state of the home
    cout << house1.toString() << endl;


    return 0;
}