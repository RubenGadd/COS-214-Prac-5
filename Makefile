# Object files list
ofiles = Active.o Inactive.o Command.o Component.o Device.o DoorLock.o DoorSensor.o House.o HousePart.o LegacyThermostat.o Light.o LockAllDoors.o MacroRoutine.o MotionSensor.o Sensor.o SmartThermostatIntegrator.o State.o Thermometer.o Thermostat.o TurnOffAllLights.o main.o

# Executable target
main: $(ofiles)
	g++ -std=c++23 $(ofiles) -o main

# Individual object file compilation
Active.o: Active.cpp Active.h
	g++ -std=c++23 -c Active.cpp -o Active.o

Inactive.o: Inactive.cpp Inactive.h
	g++ -std=c++23 -c Inactive.cpp -o Inactive.o

Command.o: Command.cpp Command.h
	g++ -std=c++23 -c Command.cpp -o Command.o

Component.o: Component.cpp Component.h
	g++ -std=c++23 -c Component.cpp -o Component.o

Device.o: Device.cpp Device.h
	g++ -std=c++23 -c Device.cpp -o Device.o

DoorLock.o: DoorLock.cpp DoorLock.h
	g++ -std=c++23 -c DoorLock.cpp -o DoorLock.o

DoorSensor.o: DoorSensor.cpp DoorSensor.h
	g++ -std=c++23 -c DoorSensor.cpp -o DoorSensor.o

House.o: House.cpp House.h
	g++ -std=c++23 -c House.cpp -o House.o

HousePart.o: HousePart.cpp HousePart.h
	g++ -std=c++23 -c HousePart.cpp -o HousePart.o

LegacyThermostat.o: LegacyThermostat.cpp LegacyThermostat.h
	g++ -std=c++23 -c LegacyThermostat.cpp -o LegacyThermostat.o

Light.o: Light.cpp Light.h
	g++ -std=c++23 -c Light.cpp -o Light.o

LockAllDoors.o: LockAllDoors.cpp LockAllDoors.h
	g++ -std=c++23 -c LockAllDoors.cpp -o LockAllDoors.o

MacroRoutine.o: MacroRoutine.cpp MacroRoutine.h
	g++ -std=c++23 -c MacroRoutine.cpp -o MacroRoutine.o

MotionSensor.o: MotionSensor.cpp MotionSensor.h
	g++ -std=c++23 -c MotionSensor.cpp -o MotionSensor.o

Sensor.o: Sensor.cpp Sensor.h
	g++ -std=c++23 -c Sensor.cpp -o Sensor.o

SmartThermostatIntegrator.o: SmartThermostatIntegrator.cpp SmartThermostatIntegrator.h
	g++ -std=c++23 -c SmartThermostatIntegrator.cpp -o SmartThermostatIntegrator.o

State.o: State.cpp State.h
	g++ -std=c++23 -c State.cpp -o State.o

Thermometer.o: Thermometer.cpp Thermometer.h
	g++ -std=c++23 -c Thermometer.cpp -o Thermometer.o

Thermostat.o: Thermostat.cpp Thermostat.h
	g++ -std=c++23 -c Thermostat.cpp -o Thermostat.o

TurnOffAllLights.o: TurnOffAllLights.cpp TurnOffAllLights.h
	g++ -std=c++23 -c TurnOffAllLights.cpp -o TurnOffAllLights.o

# Main compilation
main.o: main.cpp
	g++ -std=c++23 -c main.cpp -o main.o

# Run Valgrind to check for memory leaks
valgrind: main
	valgrind --tool=memcheck ./main --leak-check=full -v

# Coverage testing
coverage:
	rm -f *.o *.gcov *.gcda *.gcno *.gz *.json *.txt main
	g++ -g --coverage *.cpp -o main
	./main >> output.txt

# Run the executable
run: main
	./main

# Clean up generated files
clean:
	rm -f *.o *.gcov *.gcda *.gcno *.gz *.json *.txt main
