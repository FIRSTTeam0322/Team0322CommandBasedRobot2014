#ifndef BRAKE_CONTROL_H
#define BRAKE_CONTROL_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class BrakeControl: public CommandBase {
public:
	BrakeControl();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
