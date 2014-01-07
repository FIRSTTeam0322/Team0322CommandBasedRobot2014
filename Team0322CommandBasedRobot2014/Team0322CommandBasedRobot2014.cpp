#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ResetSensors.h"
#include "Commands/DriversStationUpdater.h"
#include "Commands/ClearLCD.h"
#include "Commands/AutonSelector.h"
#include "CommandBase.h"

class Team0322CommandBasedRobot2014 : public IterativeRobot {
private:
	Command* autonomousCommand;
	Command* resetSensors;
	Command* driversStationUpdater;
	Command* clearLCD;
	LiveWindow *lw;
	
	virtual void RobotInit() {
		CommandBase::init();
		autonomousCommand = new AutonSelector();
		resetSensors = new ResetSensors();
		driversStationUpdater = new DriversStationUpdater();
		clearLCD = new ClearLCD();
		lw = LiveWindow::GetInstance();
		
		resetSensors->SetRunWhenDisabled(true);
		driversStationUpdater->SetRunWhenDisabled(true);
		clearLCD->SetRunWhenDisabled(true);
	}
	
	virtual void DisabledInit() {
		clearLCD->Start();
		resetSensors->Start();
	}
	
	virtual void DisabledPeriodic() {
		resetSensors->Cancel();
		driversStationUpdater->Run();
		SmartDashboard::PutNumber("Gyro Angle", CommandBase::chassisSensors->getGyroAngle());
		SmartDashboard::PutNumber("Left Drive Encoder", CommandBase::chassisSensors->getLeftDistance());
		SmartDashboard::PutNumber("Right Drive Encoder", CommandBase::chassisSensors->getRightDistance());
		SmartDashboard::PutNumber("X-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerXData());
		SmartDashboard::PutNumber("Y-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerYData());
		SmartDashboard::PutNumber("Z-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerZData());
		SmartDashboard::PutNumber("Left Drive Stick", CommandBase::oi->getDriveStickLeft()->GetY());
		SmartDashboard::PutNumber("Right Drive Stick", CommandBase::oi->getDriveStickRight()->GetY());
		SmartDashboard::PutNumber("Left Front Motor", CommandBase::chassis->getSpeedControllerOutput(1));
		SmartDashboard::PutNumber("Left Rear Motor", CommandBase::chassis->getSpeedControllerOutput(3));	
		SmartDashboard::PutNumber("Right Front Motor", CommandBase::chassis->getSpeedControllerOutput(2));
		SmartDashboard::PutNumber("Right Rear Motor", CommandBase::chassis->getSpeedControllerOutput(4));
		Scheduler::GetInstance()->Run();
	}
	
	virtual void AutonomousInit() {
		autonomousCommand->Start();
		clearLCD->Start();
		resetSensors->Cancel();
	}
	
	virtual void AutonomousPeriodic() {
		driversStationUpdater->Run();
		SmartDashboard::PutNumber("Gyro Angle", CommandBase::chassisSensors->getGyroAngle());
		SmartDashboard::PutNumber("Left Drive Encoder", CommandBase::chassisSensors->getLeftDistance());
		SmartDashboard::PutNumber("Right Drive Encoder", CommandBase::chassisSensors->getRightDistance());
		SmartDashboard::PutNumber("X-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerXData());
		SmartDashboard::PutNumber("Y-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerYData());
		SmartDashboard::PutNumber("Z-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerZData());
		SmartDashboard::PutNumber("Left Drive Stick", CommandBase::oi->getDriveStickLeft()->GetY());
		SmartDashboard::PutNumber("Right Drive Stick", CommandBase::oi->getDriveStickRight()->GetY());
		SmartDashboard::PutNumber("Left Front Motor", CommandBase::chassis->getSpeedControllerOutput(1));
		SmartDashboard::PutNumber("Left Rear Motor", CommandBase::chassis->getSpeedControllerOutput(3));	
		SmartDashboard::PutNumber("Right Front Motor", CommandBase::chassis->getSpeedControllerOutput(2));
		SmartDashboard::PutNumber("Right Rear Motor", CommandBase::chassis->getSpeedControllerOutput(4));
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		autonomousCommand->Cancel();
		resetSensors->Cancel();
	}
	
	virtual void TeleopPeriodic() {
		driversStationUpdater->Run();
		SmartDashboard::PutNumber("Gyro Angle", CommandBase::chassisSensors->getGyroAngle());
		SmartDashboard::PutNumber("Left Drive Encoder", CommandBase::chassisSensors->getLeftDistance());
		SmartDashboard::PutNumber("Right Drive Encoder", CommandBase::chassisSensors->getRightDistance());
		SmartDashboard::PutNumber("X-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerXData());
		SmartDashboard::PutNumber("Y-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerYData());
		SmartDashboard::PutNumber("Z-Axis Accelerometer", CommandBase::chassisSensors->getAccelerometerZData());
		SmartDashboard::PutNumber("Left Drive Stick", CommandBase::oi->getDriveStickLeft()->GetY());
		SmartDashboard::PutNumber("Right Drive Stick", CommandBase::oi->getDriveStickRight()->GetY());
		SmartDashboard::PutNumber("Left Front Motor", CommandBase::chassis->getSpeedControllerOutput(1));
		SmartDashboard::PutNumber("Left Rear Motor", CommandBase::chassis->getSpeedControllerOutput(3));	
		SmartDashboard::PutNumber("Right Front Motor", CommandBase::chassis->getSpeedControllerOutput(2));
		SmartDashboard::PutNumber("Right Rear Motor", CommandBase::chassis->getSpeedControllerOutput(4));
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TestPeriodic() {
		lw->Run();
	}
};

START_ROBOT_CLASS(Team0322CommandBasedRobot2014);

