#ifndef REEL_IN_KICKER_H
#define REEL_IN_KICKER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ReelInKicker: public CommandBase {
public:
	ReelInKicker();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
