// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Feeder.h"

Feeder::Feeder(Robot * pRobot)
{
    this-> pRobot = pRobot;
}

// void Feeder::SetIntake()
// {
// pRobot->Extended = false;

// }

void Feeder::IntakeExtendRetract(bool Extended)
{
    if (Extended == false)
    {
    pRobot->Intake_Solenoid.Set(frc::DoubleSolenoid::Value::kForward);
    }
    else
    {
    pRobot->Intake_Solenoid.Set(frc::DoubleSolenoid::Value::kReverse);    
    }
}


void Feeder::RunIntake(int speed)
{
    printf("in intake, speed is %d", speed);
switch (speed){
case 1: 
    pRobot->Intake_Motor.Set(0.75);
    break;
case -1:
    pRobot->Intake_Motor.Set(-0.75);
    break;
case 0:
    pRobot->Intake_Motor.Set(0);
    break;
}


}


void Feeder::BottomFeeder(int speed)
{
    pRobot->Feeder_Low_Motor.Set(speed);
}   

void Feeder::TopFeeder(double speed)
{
    pRobot->Feeder_High_Motor.Set(speed);
