#include "AutonSelector.h"
#include "AutonDoNothing.h"

AutonSelector::AutonSelector() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(autonomusModeSwitches);
	// I guess I didn't need these two declarations
	//int mode;
	//Command* autonCommand = NULL;
}

// Called just before this Command runs the first time
void AutonSelector::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonSelector::Execute() {
	mode = autonomusModeSwitches->GetMode();
	switch(mode)
	{
		case 0:
			autonCommand = new AutonDoNothing();
			break;
		
		default:
			autonCommand = new AutonDoNothing();
			return;
	}
	autonCommand->Run();
}

// Make this return true when this Command no longer needs to run execute()
bool AutonSelector::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonSelector::End() {
	autonCommand->Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonSelector::Interrupted() {
	End();
}
