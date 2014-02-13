#ifndef RESETKICKERLOCK_H
#define RESETKICKERLOCK_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ResetKickerLock: public CommandBase {
private:
	Timer* resetTimer;
public:
	ResetKickerLock();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
