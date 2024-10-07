#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H

#include "Command.h"


class TurnOffAllLights : public  Command {


public:
	void execute(HousePart * room);
};


#endif
