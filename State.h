#ifndef STATE_H
#define STATE_H

using namespace std;
#include <string>
#include <iostream>

class Device;

class State {

private:
	string status;

public:
	State(string s);
	string getStatus() const;
	virtual void performAction( Device* device) = 0;
};


#endif
