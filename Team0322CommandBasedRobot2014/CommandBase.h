#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/DriverStationLCDSystem.h"
#include "Subsystems/ChassisSensors.h"
#include "Subsystems/AutonomusModeSwitches.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Vision.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static DriverStationLCDSystem *driverStationLCDSystem;
	static ChassisSensors *chassisSensors;
	static AutonomusModeSwitches *autonomusModeSwitches;
	static Chassis *chassis;
	static Vision *vision;
	static OI *oi;
};

#endif
