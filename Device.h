#ifndef DEVICE_H
#define DEVICE_H

namespace Prac_5_Class_Diagram {
	class Device : Prac_5_Class_Diagram::Component {

	public:
		State* state;

		virtual void update() = 0;

		virtual string getDeviceType() = 0;

		virtual string getStatus() = 0;

		virtual void performAction() = 0;
	};
}

#endif
