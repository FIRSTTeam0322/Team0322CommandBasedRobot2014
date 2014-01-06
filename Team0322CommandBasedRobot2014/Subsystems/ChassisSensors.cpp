#include "ChassisSensors.h"
#include "../Robotmap.h"

ChassisSensors::ChassisSensors() : Subsystem("ChassisSensors") {
	// Create an Encoder object for each transmission
	leftEncoder = new Encoder(DIGITAL_MODULE_LEFT,1,DIGITAL_MODULE_LEFT,11,true, leftEncoder->k4X);
	rightEncoder = new Encoder(DIGITAL_MODULE_RIGHT,1,DIGITAL_MODULE_RIGHT,11,false, rightEncoder->k4X);
	
	// Create a Gyro(scope) object on AnalogModule 1, AnalogInput 1
	gyro = new Gyro(ANALOG_MODULE,1);
	
	// Create the I2C Accelerometer object for the I2C 3-axis Accelerometer
	accel = new ADXL345_I2C(DIGITAL_MODULE_LEFT, ADXL345_I2C::kRange_2G);
}
    
void ChassisSensors::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void ChassisSensors::resetEncoders() {
	leftEncoder->Reset();
	rightEncoder->Reset();
}

double ChassisSensors::getLeftDistance() {
	return leftEncoder->GetDistance();
}

double ChassisSensors::getRightDistance() {
	return rightEncoder->GetDistance();
}

void ChassisSensors::resetGyro() {
	gyro->Reset();
}

float ChassisSensors::getGyroAngle() {
	return gyro->GetAngle();
}

float ChassisSensors::getAccelerometerXData() {
	return accel->GetAcceleration(accel->kAxis_X);
}

float ChassisSensors::getAccelerometerYData() {
	return accel->GetAcceleration(accel->kAxis_Y);
}

float ChassisSensors::getAccelerometerZData() {
	return accel->GetAcceleration(accel->kAxis_Z);
}

Encoder* ChassisSensors::getEncoder(int type) {
	switch(type) {
		case 1:
			return leftEncoder;
		break;
		
		case 2:
			return rightEncoder;
		break;
		
		default:
			return NULL;
		break;
	}
}

Gyro* ChassisSensors::getGyro() {
	return gyro;
}

ADXL345_I2C* ChassisSensors::getAccelerometer() {
	return accel;
}
