#include "ClearLCD.h"

ClearLCD::ClearLCD() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(driverStationLCDSystem);
}

// Called just before this Command runs the first time
void ClearLCD::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ClearLCD::Execute() {
	driverStationLCDSystem->ClearLCD();
}

// Make this return true when this Command no longer needs to run execute()
bool ClearLCD::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ClearLCD::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClearLCD::Interrupted() {
}
