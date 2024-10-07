#include "House.h"

/// @brief Makes a house object with all of the rooms specified
/// @param roomsList A list of all the rooms that should be in the house
House::House(list<string> roomsList){
    for(auto room : roomsList){
        rooms.push_back(new  HousePart(room));
    }
}
