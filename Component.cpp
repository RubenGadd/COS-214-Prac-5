#include "Component.h"

namespace Prac_5_Class_Diagram{
    Component::Component(string n){
        this->name = n;
    }

    string Component::getName(){
        return name;
    }
}

