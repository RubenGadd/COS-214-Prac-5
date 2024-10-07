#include "House.h"

/// @brief Makes a house object with all of the rooms specified
/// @param roomsList A list of all the rooms that should be in the house
House::House(vector<string> roomsList){
    for(int i=0; i<roomsList.size(); i++)
        rooms.push_back(HousePart(roomsList[i]));
}


HousePart House::getHousePart(int index) {
    return this->rooms[index];
}

string House::toString() {
    string out = "";
    for(int i=0; i<rooms.size(); i++)
        out += rooms[i].getStatus() +"\n";
    return out;
}

void House::addThermostat(int i) {
    Device* thermostat = new Thermostat();
    rooms[i].addChildren(thermostat);
}

void House::addLight(int i) {
    Device* light = new Light();
    rooms[i].addChildren(light);
}

void House::addDoorLock(int i) {
    Device* lock = new DoorLock();
    rooms[i].addChildren(lock);
}

void House::addLegacyThermostat(int i) {
    LegacyThermostat* ltherm = new LegacyThermostat();
    SmartThermostatIntegrator* integrator = new SmartThermostatIntegrator(*ltherm);
    rooms[i].addChildren(integrator); 
}

