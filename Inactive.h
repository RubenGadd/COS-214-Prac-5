#ifndef INACTIVE_H
#define INACTIVE_H

#include "State.h"
#include "Active.h"

namespace Prac_5_Class_Diagram {
	class Inactive : public State {


	public:
		Inactive();
		void performAction(Prac_5_Class_Diagram::Device* device);
	};
}

#endif
