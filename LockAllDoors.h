#ifndef LOCKALLDOORS_H
#define LOCKALLDOORS_H

#include "Command.h"


class LockAllDoors : public  Command {
	public:
		void execute(HousePart * room);
};


#endif
