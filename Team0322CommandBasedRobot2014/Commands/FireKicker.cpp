#include "FireKicker.h"

FireKicker::FireKicker() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(kicker);
}

// Called just before this Command runs the first time
void FireKicker::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void FireKicker::Execute() {
	if (kicker->kickerStatus(0)) kicker->unlockKicker();
}

// Make this return true when this Command no longer needs to run execute()
bool FireKicker::IsFinished() {
	if (kicker->kickerStatus(0)) return false;
	else return true;
}

// Called once after isFinished returns true
void FireKicker::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FireKicker::Interrupted() {
}
