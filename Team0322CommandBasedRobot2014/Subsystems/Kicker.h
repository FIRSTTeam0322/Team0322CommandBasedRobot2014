#ifndef KICKER_H
#define KICKER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Robotics
 */
class Kicker: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *kickerLeft, *kickerRight, *kickerRelease;
	DigitalInput *kickerFront1, *kickerFront2, *kickerReleaseCheck, *kickerResetCheck;
public:
	Kicker();
	void InitDefaultCommand();
	void lockKicker(void);
	void unlockKicker(void);
	void runRollersIn(void);
	void runRollersOut(void);
	int kickerStatus(void);
	bool kickerResetStatus(void);
};

#endif
