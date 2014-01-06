#ifndef RESET_SENSORS_H
#define RESET_SENSORS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class ResetSensors: public CommandBase {
public:
	ResetSensors();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
