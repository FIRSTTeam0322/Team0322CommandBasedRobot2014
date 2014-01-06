#include "DriverStationLCDOutput.h"

DriverStationLCDOutput::DriverStationLCDOutput() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(driverStationLCDSystem);
	Requires(chassisSensors);
}

// Called just before this Command runs the first time
void DriverStationLCDOutput::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriverStationLCDOutput::Execute() {
	driverStationLCDSystem->UpdateLCD(0, chassisSensors->getGyro(), chassisSensors->getEncoder(1),
			chassisSensors->getEncoder(2), chassisSensors->getAccelerometer());
}

// Make this return true when this Command no longer needs to run execute()
bool DriverStationLCDOutput::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriverStationLCDOutput::End() {
	driverStationLCDSystem->ClearLCD();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriverStationLCDOutput::Interrupted() {
	End();
}
