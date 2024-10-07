#include "Device.h"

namespace Prac_5_Class_Diagram{
    Device::Device(string n) : Component(n){
        this->state = new Inactive();
    }

    void Device::setState(State* s){
        this->state = s;
    }

    string Device::getStatus(){
        return state->getStatus();
    }
}