#ifndef FIRE_KICKER_H
#define FIRE_KICKER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class FireKicker: public CommandBase {
public:
	FireKicker();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
