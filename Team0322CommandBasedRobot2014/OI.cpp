#include "OI.h"
#include "Commands/BrakeControl.h"
#include "Commands/PrecisionDrive.h"

OI::OI() {
	// Process operator interface input here.
	
	// Create the three Joystick objects
	driveStickLeft = new Joystick(1);
	driveStickRight = new Joystick(2);
	manipulatorStick = new Joystick(3, NUMAXIS, NUMBUTTONS);
	
	// Create the Brake SubSystem controls
	brake = new JoystickButton(driveStickLeft, 1);
	brake->WhileHeld(new BrakeControl());
	
	// Create the Drive System controls	
	precisionDriveButton = new JoystickButton(driveStickRight, 1);
	precisionDriveButton->WhileHeld(new PrecisionDrive());
	
}

Joystick* OI::getDriveStickLeft() {
	return driveStickLeft;
}

Joystick* OI::getDriveStickRight() {
	return driveStickRight;
}

Joystick* OI::getManipulatorStick() {
	return manipulatorStick;
}
