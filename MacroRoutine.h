#ifndef MACROROUTINE_H
#define MACROROUTINE_H

namespace Prac_5_Class_Diagram {
	class MacroRoutine {

	private:
		string name;
		Vector<Prac_5_Class_Diagram::Command*> procedures;

	public:
		void addProcedure();

		void removeProcedure();

		void executeRoutine();
	};
}

#endif
