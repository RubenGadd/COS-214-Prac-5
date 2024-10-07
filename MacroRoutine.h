#ifndef MACROROUTINE_H
#define MACROROUTINE_H

#include <string>
#include "Command.h"
#include "TurnOffAllLights.h"
#include "LockAllDoors.h"
#include "HousePart.h"
#include <list>

using namespace std;


namespace   {
	class MacroRoutine {

	private:
		string name;
		list< Command*> procedures;

	public:
		MacroRoutine(string n);
		void addProcedure(Command * command);

		void removeProcedure(Command * command);

		void executeRoutine(HousePart * room);
	};
}

#endif
