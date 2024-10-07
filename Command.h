#ifndef COMMAND_H
#define COMMAND_H


using namespace std;

#include "HousePart.h"
class Command {


public:
	virtual void execute(HousePart * room) = 0;
};


#endif
