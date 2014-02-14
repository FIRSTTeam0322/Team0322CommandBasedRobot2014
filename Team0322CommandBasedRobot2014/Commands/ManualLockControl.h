#ifndef MANUALLOCKCONTROL_H
#define MANUALLOCKCONTROL_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ManualLockControl: public CommandBase {
public:
	ManualLockControl();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
