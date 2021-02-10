// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// #include "PIDMath.h"
// #include "math.h"

// PIDMath::PIDMath(){
//     pPIDOutput = new TurretPIDOutput(&fYawPIDValue);
//     pYawPID    = new frc::PIDController(-.031, 0.0, 0.0, 0.0, this, pPIDOutput);

// };

// class TurretPIDOutput : public frc::PIDOutput
// {
// 	public:
// 		TurretPIDOutput(float * pfYawPIDVar) : pfYawPID(pfYawPIDVar) {}

// 		float       * pfYawPID;

// 		void PIDWrite(double dOutput) { *pfYawPID = dOutput; }
// };

// void Shooter::Aim()
// {
// 		float value = fYawPIDValue;
// 		pRobot->Turret_Motor.Set(value);
// 		ShooterDebug.PutNumber("PID Output",value);
// };

//  TurretPIDOutput     * pPIDOutput;
// 	frc::PIDController  * pYawPID;
//   float fYawPIDValue;
//   void    PIDEnable(bool bEnable);
//   double  PIDGet();