#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;
#include <list>
#include "HousePart.h"
#include "Component.h"	
class House {
	private:
		list<HousePart*> rooms;
	public:
		House(list<string> roomsList);
};


#endif
