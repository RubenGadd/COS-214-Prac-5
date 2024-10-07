#include "Component.h"

namespace Prac_5_Class_Diagram{
    /// @brief Assigns n as the name of the components
    /// @param n The name of the device
    Component::Component(string n){
        this->name = n;
    }

    /// @brief Returns the Devices name
    /// @return Returns a string which is the name of the device
    string Component::getName(){
        return name;
    }
}

