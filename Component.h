#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>

using namespace std;

namespace Prac_5_Class_Diagram {
	class Component {

	protected:
		string name;

	public:
		Component(string n);
		virtual string getStatus() = 0;

		virtual string getDeviceType() = 0;

		virtual void performAction() = 0;

		virtual void getChildren(int index);

		virtual void addChildren(Component component);

		virtual void removeChildren(Component component);
	};
}

#endif
