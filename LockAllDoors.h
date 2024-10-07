#ifndef LOCKALLDOORS_H
#define LOCKALLDOORS_H

#include "Command.h"

namespace Prac_5_Class_Diagram {
	class LockAllDoors : public Prac_5_Class_Diagram::Command {


	public:
		void execute(HousePart * room);
	};
}

#endif
