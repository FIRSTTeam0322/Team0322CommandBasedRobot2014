#ifndef RAISE_BALL_RESTRAINT_H
#define RAISE_BALL_RESTRAINT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class RaiseBallRestraint: public CommandBase {
public:
	RaiseBallRestraint();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
