#ifndef MANUAL_REEL_CONTROL_H
#define MANUAL_REEL_CONTROL_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ManualReelControl: public CommandBase {
public:
	ManualReelControl();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
