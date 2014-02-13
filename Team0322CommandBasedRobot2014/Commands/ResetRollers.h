#ifndef RESET_ROLLERS_H
#define RESET_ROLLERS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ResetRollers: public CommandBase {
private:
	Timer *resetTimer;
public:
	ResetRollers();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
