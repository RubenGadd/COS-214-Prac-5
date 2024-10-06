#ifndef STATE_H
#define STATE_H

namespace Prac_5_Class_Diagram {
	class State {

	private:
		string status;

	public:
		void performAction(Prac_5_Class_Diagram::Device* device);
	};
}

#endif
