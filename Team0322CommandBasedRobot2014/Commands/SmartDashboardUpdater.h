#ifndef SMART_DASHBOARD_UPDATER_H
#define SMART_DASHBOARD_UPDATER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author CCRLH85
 */
class SmartDashboardUpdater: public CommandBase {
public:
	SmartDashboardUpdater();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
