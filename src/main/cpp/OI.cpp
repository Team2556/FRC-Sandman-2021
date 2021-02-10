// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "OI.h"

OI::OI()
{
}

void OI::Test()
{

}


bool OI::IntakeExtension()
{
if (Xbox2.GetYButtonPressed())
    {
        extended = false; //Goes up

    }
else if (Xbox2.GetXButtonPressed())
    {
        extended = true; //goes down
    } 

return extended;
//Extended is passed into function that controls the actual extension of the robot. 
}

int OI::RunIntake()
{
int speed;
if (Xbox2.GetBButton())  //Intake in
    {
        speed = 1; 
    }
else if (Xbox2.GetAButton()) //Intake out
    {
        speed = -1;
    }

else                            //Nothing
    {   
        speed = 0;
    }
//Speed integer controls the speed of the intake system. 
return speed;

}





int OI::BottomFeeder()
{
    int x;

    if (Xbox2.GetPOV() == 270 || Xbox2.GetPOV() == 0)
    {
        x = 1;
    }

    else if (Xbox2.GetPOV() == 180 || Xbox2.GetBumper(frc::XboxController::kRightHand))
    {
        x = -1;
    }

    else
    {
        x = 0;
    }
    return x;
    //Integer x controls the speed of the bottom feeder.
}

double OI::TopFeeder()
{
    if (Xbox2.GetPOV() == 90 || Xbox2.GetPOV() == 0)
    {
        return -0.7;
        frc::SmartDashboard::PutString("Top Feeder", "-0.7");
    }

    else if (Xbox2.GetPOV() == 180)
    {
        return 0.7;
        frc::SmartDashboard::PutString("Top Feeder", "0.7");
    }

    else
    {
        return 0.0;
        frc::SmartDashboard::PutString("Top Feeder", "0");
    }

    
}

void OI::testFunction()
{
    return;
}

float OI::fForward() {
    float fY = Xbox1.GetY(frc::XboxController::kLeftHand);
    return fY;
}

float OI::fRotate() {
    float fR = Xbox1.GetX(frc::XboxController::kLeftHand);
    return fR;
}