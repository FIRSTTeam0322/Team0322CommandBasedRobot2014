#include "AutonomusModeSwitches.h"
#include "../Robotmap.h"

AutonomusModeSwitches::AutonomusModeSwitches() : Subsystem("AutonomusModeSwitches") {
	switch1 = new DigitalInput(DIGITAL_MODULE_LEFT, 9);
	switch2 = new DigitalInput(DIGITAL_MODULE_LEFT, 10);
	switch3 = new DigitalInput(DIGITAL_MODULE_RIGHT, 9);
	switch4 = new DigitalInput(DIGITAL_MODULE_RIGHT, 10);
}
    
void AutonomusModeSwitches::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
int AutonomusModeSwitches::GetMode() {
	int mode = 0;
	if (switch1)
		mode = mode + 1;
	if (switch2)
		mode = mode + 2;
	if (switch3)
		mode = mode + 4;
	if (switch4)
		mode = mode + 8;
	return mode;
}
