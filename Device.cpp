#include "Device.h"
#include "Inactive.h"
#include "Active.h"


Device::Device(string n) : Component(n){
    this->state = new Inactive();
}


/// @brief Returns the name of the State object which is "Active" or "Inactive"
/// @return Returns a string which is the name of the State object
string Device::getStatus(){
    return state->getStatus();
}

void Device::performAction(bool OnOff, string deviceType){
    if(name == deviceType){
        State * curr = this->state;
        curr->performAction(this);
        // delete curr;
    }else{
        cout << "Wrong device selected";
    }
    
}

void Device::setState(State * s){
    delete this->state;
    this->state = s;
}


Component * Device::getChildren(int index){
    return nullptr;
}

void Device::addChildren(Component* component){
    return;
}

void Device::removeChildren(Component* component){
    return;
}