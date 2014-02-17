#ifndef AUTON_DRIVE_FORWARD_H
#define AUTON_DRIVE_FORWARD_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Robotics
 */
class AutonDriveForward: public CommandBase {
public:
	AutonDriveForward();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
