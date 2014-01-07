#ifndef DRIVE_FORWARD_SLOWLY_H
#define DRIVE_FORWARD_SLOWLY_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class DriveForwardSlowly: public CommandBase {
public:
	DriveForwardSlowly();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
