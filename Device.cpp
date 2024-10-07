#include "Device.h"


Device::Device(string n) : Component(n){
    this->state = new Inactive();
}

void Device::setState(State* s){
    this->state = s;
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
        delete curr;
    }else{
        cout << "Wrong device selected";
    }
    
}
