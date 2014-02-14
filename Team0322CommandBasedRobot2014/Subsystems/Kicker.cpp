#include "Kicker.h"
#include "../Robotmap.h"
#include "RobotDrive.h"

Kicker::Kicker() : Subsystem("Kicker") {
	// Create the SpeedController objects for the kicker release mechanisms
	kickerRelease = new Victor(DIGITAL_MODULE_LEFT,3);
	
	// Create the SpeedController objects for the kicker retraction mechanism
	kickerLeftReel = new Victor(DIGITAL_MODULE_LEFT,4);
	kickerRightReel = new Victor(DIGITAL_MODULE_RIGHT,4);
	
	// Create the DigitalInput objects for the kicker set detectors
	kickerFront1 = new DigitalInput(DIGITAL_MODULE_LEFT,5);
	kickerFront2 = new DigitalInput(DIGITAL_MODULE_RIGHT,5);
	
	// Create the DigitalInput objects for the kicker release and reset detectors
	kickerResetCheck = new DigitalInput(DIGITAL_MODULE_LEFT,6);
	kickerReleaseCheck = new DigitalInput(DIGITAL_MODULE_RIGHT,6);
}
    
void Kicker::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Kicker::unlockKicker() {
	kickerRelease->Set(-0.25);
}

void Kicker::lockKicker() {
	kickerRelease->Set(0.25);
}

void Kicker::runRollersIn() {
	kickerLeftReel->Set(1.0);
	kickerRightReel->Set(1.0);
}

void Kicker::runRollersOut() {
	kickerLeftReel->Set(1.0);
	kickerRightReel->Set(1.0);
}

int Kicker::kickerStatus() {
	if (kickerResetCheck) return 1;
	else if (kickerReleaseCheck) return 2;
	else return 0;
}

bool Kicker::kickerResetStatus() {
	if (kickerResetCheck) return true;
	else return false;
}

void Kicker::manualReelControl(float reelSpeed) {
	kickerLeftReel->Set(reelSpeed);
	kickerRightReel->Set(reelSpeed);
}

void Kicker::manualLockControl(float lockSpeed) {
	kickerRelease->Set(lockSpeed);
}
