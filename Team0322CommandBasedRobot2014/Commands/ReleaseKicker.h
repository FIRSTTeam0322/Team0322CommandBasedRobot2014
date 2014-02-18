#ifndef RELEASE_KICKER_H
#define RELEASE_KICKER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ReleaseKicker: public CommandBase {
public:
	ReleaseKicker();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
