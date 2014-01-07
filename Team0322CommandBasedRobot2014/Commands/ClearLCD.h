#ifndef CLEAR_LCD_H
#define CLEAR_LCD_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class ClearLCD: public CommandBase {
public:
	ClearLCD();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
