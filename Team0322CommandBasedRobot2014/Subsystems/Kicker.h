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
	Victor *kickerLeftReel, *kickerRightReel, *kickerRelease;
	DigitalInput *kickerFront1, *kickerFront2, *kickerSensorLeft, *kickerSensorRight;
	
	bool kickerResetCheck(void);
	bool kickerReleaseCheck(void);
public:
	Kicker();
	void InitDefaultCommand();
	void lockKicker(void);
	void unlockKicker(void);
	void runRollersIn(void);
	void runRollersOut(void);
	bool kickerStatus(int);
	void manualReelControl(float);
	void manualLockControl(float);
};

#endif
