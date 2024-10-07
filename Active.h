#ifndef ACTIVE_H
#define ACTIVE_H

#include "State.h"
#include "Inactive.h"

namespace Prac_5_Class_Diagram {
	class Active : public State {


	public:
		Active();
		void performAction(Prac_5_Class_Diagram::Device* device);
	};
}

#endif
