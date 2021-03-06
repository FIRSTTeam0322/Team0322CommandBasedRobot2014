#include "DriveForward.h"

DriveForward::DriveForward() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
}

// Called just before this Command runs the first time
void DriveForward::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriveForward::Execute() {
	chassis->autoDriveSystem(0.5, 0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForward::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveForward::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForward::Interrupted() {
}
