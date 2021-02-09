// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Climber.h"

Climber::Climber(Robot * pRobot) 
{
    this->pRobot = pRobot;
}



void Climber::RunWinch(float speed)
{
    WinchMotor.Set(speed);
}

void Climber::ClimberUpDown(bool up)
{
    if(up)
    {
        ClimbSolenoid.Set(frc::DoubleSolenoid::Value::kForward);
    }
    else
    {
        ClimbSolenoid.Set(frc::DoubleSolenoid::Value::kReverse);
    }
    
}
