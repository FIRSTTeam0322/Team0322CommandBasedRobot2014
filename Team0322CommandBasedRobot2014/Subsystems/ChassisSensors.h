#ifndef CHASSIS_SENSORS_H
#define CHASSIS_SENSORS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class ChassisSensors: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Encoder *leftEncoder, *rightEncoder;
	Gyro *gyro;
	ADXL345_I2C *accel;
public:
	ChassisSensors();
	void InitDefaultCommand();
	void resetEncoders();
	double getLeftDistance();
	double getRightDistance();
	void resetGyro();
	float getGyroAngle();
	float getAccelerometerXData();
	float getAccelerometerYData();
	float getAccelerometerZData();
	Encoder* getEncoder(int);
	Gyro* getGyro();
	ADXL345_I2C* getAccelerometer();
};

#endif
