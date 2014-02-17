#ifndef AUTON_DRIVE_FORWARD_AND_SCORE_1PT_H
#define AUTON_DRIVE_FORWARD_AND_SCORE_1PT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Robotics
 */
class AutonDriveForwardAndScore1Pt: public CommandBase {
public:
	AutonDriveForwardAndScore1Pt();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
