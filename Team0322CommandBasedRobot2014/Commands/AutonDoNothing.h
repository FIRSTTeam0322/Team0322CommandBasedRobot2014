#ifndef AUTON_DO_NOTHING_H
#define AUTON_DO_NOTHING_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class AutonDoNothing: public CommandBase {
public:
	AutonDoNothing();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
