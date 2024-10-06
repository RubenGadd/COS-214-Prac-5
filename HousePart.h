#ifndef HOUSEPART_H
#define HOUSEPART_H

namespace Prac_5_Class_Diagram {
	class HousePart : Prac_5_Class_Diagram::Component {

	public:
		Prac_5_Class_Diagram::Component* children;

		string getStatus();

		string getDeviceType();

		void performAction();

		void getChildren(int index);

		void addChildren(Component component);

		void removeChildren(Component component);
	};
}

#endif
