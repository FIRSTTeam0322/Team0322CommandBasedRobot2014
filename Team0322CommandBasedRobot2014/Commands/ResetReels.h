#ifndef RESET_REELS_H
#define RESET_REELS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class ResetReels: public CommandBase {
private:
	Timer *resetTimer;
public:
	ResetReels();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
