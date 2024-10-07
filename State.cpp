#include "State.h"

/// @brief Creates a State object and assigning n as the name of the object
/// @param n The name of the state object
Prac_5_Class_Diagram::State::State(string n):status(n){}

/// @brief Returns the name of the States object and so the Status
/// @return Returns a string which the the name of the State object
string Prac_5_Class_Diagram::State::getStatus() {
	return status;
}
