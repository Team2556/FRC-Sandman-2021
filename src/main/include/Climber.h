// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Robot.h"


class Climber {
  public:
    Climber(Robot * pRobot);
  
    Robot * pRobot;

    void RunWinch(float speed);// +speed is up

    void ClimberUpDown(bool up); // if up is true arms are up, else arms are down

  private:
    WPI_TalonSRX WinchMotor{CLIMB_WINCH};
    frc::DoubleSolenoid ClimbSolenoid{CAN_PCM, CLIMB_UP, CLIMB_DOWN};

};
