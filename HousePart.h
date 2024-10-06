#ifndef HOUSEPART_H
#define HOUSEPART_H

#include "Component.h"
#include <list>

using namespace std;

namespace Prac_5_Class_Diagram {
	class HousePart : public Component {

	public:
		list<Component*> children;
		~HousePart();
		string getStatus();

		string getDeviceType();

		void performAction();

		void getChildren(int index);

		void addChildren(Component* component);

		void removeChildren(Component* component);
	};
}

#endif
