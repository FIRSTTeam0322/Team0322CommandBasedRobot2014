#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class Chassis: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	RobotDrive *robotDrive;
	Victor *frontLeftMotor, *frontRightMotor, *rearLeftMotor, *rearRightMotor;
	DigitalOutput *leftFrontBrake, *leftRearBrake, *rightFrontBrake, *rightRearBrake;
public:
	Chassis();
	void InitDefaultCommand();
	void autoDriveSystem(float, float);
	void driveWithJoystick(Joystick *leftStick, Joystick *rightStick);
	void precisionDriveSystem(Joystick *leftStick, Joystick *rightStick);
	void brake();
	void coast();
	float getSpeedControllerOutput(int);
};

#endif
