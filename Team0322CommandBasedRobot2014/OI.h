#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	static const int NUMAXIS = 5;
	static const int NUMBUTTONS = 10;
	
	Joystick *driveStickLeft, *driveStickRight, *manipulatorStick;
	
	JoystickButton *brake, *precisionDriveButton;
	
public:
	OI();
	Joystick* getDriveStickLeft();
	Joystick* getDriveStickRight();
	Joystick* getManipulatorStick();
};

#endif
