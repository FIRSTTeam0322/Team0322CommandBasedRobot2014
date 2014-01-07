#ifndef DRIVE_FORWARD_H
#define DRIVE_FORWARD_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class DriveForward: public CommandBase {
public:
	DriveForward();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
