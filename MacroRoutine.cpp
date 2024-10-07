#include "MacroRoutine.h"
/// @brief Receives a name of the MacroRoutine this object will be
/// @param n The name of the MarcoRoutine
MacroRoutine::MacroRoutine(string n):name(n){}

/// @brief Destructs the MacroRoutine object, by deleting the list made of pointers
MacroRoutine::~MacroRoutine(){
	for(auto * command : procedures){
		delete command;
	}
	procedures.clear();
}

/// @brief Adds a command to the procedure list 
/// @param command The commands to be added to the procedure list
void MacroRoutine::addProcedure(Command* command) {
	procedures.push_back(command);
}

/// @brief Remove a command to the procedure list 
/// @param command The commands to be added to the procedure list
void MacroRoutine::removeProcedure(Command * command) {
	procedures.remove(command);
}

/// @brief This function execute all of the commands in the procedures list 1 by 1 on the room passed in
/// @param room The room to which these procedures will apply and be executed on
void MacroRoutine::executeRoutine(HousePart& room) {
	for(auto * curr : procedures){
		curr->execute(room);
	}
}
