#ifndef DRIVER_STATION_LCD_OUTPUT_H
#define DRIVER_STATION_LCD_OUTPUT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class DriverStationLCDOutput: public CommandBase {
public:
	DriverStationLCDOutput();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
