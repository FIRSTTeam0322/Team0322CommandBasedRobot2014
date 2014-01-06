#ifndef AUTON_SELECTOR_H
#define AUTON_SELECTOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class AutonSelector: public CommandBase {
private:
	Command* autonCommand;
	int mode;
public:
	AutonSelector();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
