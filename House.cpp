#include "House.h"

namespace Prac_5_Class_Diagram {
	
	/// @brief Makes a house object with all of the rooms specified
	/// @param roomsList A list of all the rooms that should be in the house
	House::House(list<string> roomsList){
        for(auto room : roomsList){
            rooms.push_back(new Prac_5_Class_Diagram::HousePart(room));
        }
    }
}