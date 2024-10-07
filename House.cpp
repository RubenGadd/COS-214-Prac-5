#include "House.h"

namespace Prac_5_Class_Diagram {
	
	House::House(list<string> roomsList){
        for(auto room : roomsList){
            rooms.push_back(new Prac_5_Class_Diagram::HousePart(room));
        }
    }
}