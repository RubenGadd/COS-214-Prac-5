#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H

#include "Command.h"

namespace Prac_5_Class_Diagram {
	class TurnOffAllLights : public Prac_5_Class_Diagram::Command {


	public:
		void execute(HousePart * room);
	};
}

#endif
