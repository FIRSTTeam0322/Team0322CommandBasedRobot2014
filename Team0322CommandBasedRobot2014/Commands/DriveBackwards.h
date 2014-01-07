#ifndef DRIVE_BACKWARDS_H
#define DRIVE_BACKWARDS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class DriveBackwards: public CommandBase {
public:
	DriveBackwards();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
