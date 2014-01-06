#ifndef VISION_H
#define VISION_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Vision/RGBImage.h"
#include "Vision/BinaryImage.h"

/**
 *
 *
 * @author CCRLH85
 */
class Vision: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
public:
	Vision();
	void InitDefaultCommand();
};

#endif
