#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>

using namespace std;



class Component {

protected:
	string name;

public:
	Component(string n);
	virtual string getStatus() = 0;

	virtual string getDeviceType() = 0;

	virtual void performAction(bool OnOff, string deviceType) = 0;

	string getName();

	virtual Component * getChildren(int index) = 0;

	virtual void addChildren(Component* component) = 0;

	virtual void removeChildren(Component* component) = 0;
};

#endif
