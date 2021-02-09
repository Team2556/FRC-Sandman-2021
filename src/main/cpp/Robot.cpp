// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"
#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include "Feeder.h"
#include "Drivebase.h"
//Doesn't work in Robot.h because it causes an infinite loop
Feeder * pFeeder;
Drivebase * Drive;
void Robot::RobotInit() 
{
  pFeeder = new Feeder(this);
  pOI = new OI();
  DriverCMD.testFunction();
  Drive = new Drivebase(this);
}


void Robot::RobotPeriodic() 
{

}


void Robot::AutonomousInit() 
{

}

void Robot::AutonomousPeriodic() 
{
  
}

void Robot::TeleopInit() 
{
  TeleopModes.push_back(Teleop1);
  TeleopModes.push_back(Teleop2);
}

void Robot::TeleopPeriodic() 
{
  Drive->Drive();
  pFeeder->BottomFeeder(pOI->BottomFeeder());
  pFeeder->TopFeeder(pOI->TopFeeder());
  pFeeder->IntakeExtendRetract(pOI->IntakeExtension());
  
  if (pOI->IntakeExtension())
  {
  pFeeder->RunIntake(pOI->RunIntake());
  }
  else
  {
  pFeeder->Intake_Motor.Set(0);
  }
}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
