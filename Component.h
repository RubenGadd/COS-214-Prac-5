#ifndef COMPONENT_H
#define COMPONENT_H

namespace Prac_5_Class_Diagram {
	class Component {

	private:
		string name;

	public:
		virtual string getStatus() = 0;

		virtual string getDeviceType() = 0;

		virtual void performAction() = 0;

		virtual void getChildren(int index) = 0;

		virtual void addChildren(Component component) = 0;

		virtual void removeChildren(Component component) = 0;
	};
}

#endif
