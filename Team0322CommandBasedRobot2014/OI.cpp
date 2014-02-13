#include "OI.h"
#include "Commands/BrakeControl.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/FireKicker.h"
#include "Commands/ReelInKicker.h"
#include "Commands/ResetKicker.h"
#include "Commands/ResetReels.h"

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
	
	// Create the Kicker controls
	kickerFire = new JoystickButton(manipulatorStick, 1);
	kickerReset = new JoystickButton(manipulatorStick, 2);
	kickerFire->WhileHeld(new FireKicker());
	kickerReset->WhileHeld(new ResetKicker());
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
