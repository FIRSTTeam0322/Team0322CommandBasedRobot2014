#ifndef LOWER_BALL_RESTRAINT_H
#define LOWER_BALL_RESTRAINT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class LowerBallRestraint: public CommandBase {
public:
	LowerBallRestraint();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
