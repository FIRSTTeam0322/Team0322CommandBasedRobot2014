#include "CommandBase.h"
//#include "Subsystems/DriverStationLCDSystem.h"
//#include "Subsystems/ChassisSensors.h"
//#include "Subsystems/AutonomusModeSwitches.h"
//#include "Subsystems/Chassis.h"
//#include "Subsystems/Kicker.h"
//#include "Subsystems/Vision.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
DriverStationLCDSystem* CommandBase::driverStationLCDSystem = NULL;
ChassisSensors* CommandBase::chassisSensors = NULL;
AutonomusModeSwitches* CommandBase::autonomusModeSwitches = NULL;
BallRestraint* CommandBase::ballRestraint = NULL;
Chassis* CommandBase::chassis = NULL;
Vision* CommandBase::vision = NULL;
Kicker* CommandBase::kicker = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	driverStationLCDSystem = new DriverStationLCDSystem();
	chassisSensors = new ChassisSensors();
	autonomusModeSwitches = new AutonomusModeSwitches();
	ballRestraint = new BallRestraint();
	chassis = new Chassis();
	kicker = new Kicker();
	vision = new Vision();	
	oi = new OI();
}
