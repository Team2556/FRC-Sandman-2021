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

// void OI::SetExtension() //Run in init
// {
//     extended = false;
//     frc::SmartDashboard::PutBoolean("Extension", extended);
// }

bool OI::IntakeExtension()
{
if (Xbox2.GetYButtonPressed())//&& extended == false)
    {
        extended = false; //Goes up

        //frc::SmartDashboard::PutBoolean("Extension", extended);
    }
else if (Xbox2.GetXButtonPressed())// && extended == true)
    {
        extended = true; //goes down
        //frc::SmartDashboard::PutBoolean("Extension", extended);
    } 

return extended;

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
//frc::SmartDashboard::PutNumber("Intake Speed", speed);
return speed;

}





int OI::BottomFeeder()
{
    int x;

    if (Xbox2.GetPOV() == 270 || Xbox2.GetPOV() == 0)
    {
        x = 1;
        //frc::SmartDashboard::PutString("Bottom Feeder", "1");
    }

    else if (Xbox2.GetPOV() == 180 || Xbox2.GetBumper(frc::XboxController::kRightHand))
    {
        x = -1;
        //frc::SmartDashboard::PutString("Bottom Feeder", "-1");
    }

    else
    {
        x = 0;
        //frc::SmartDashboard::PutString("Bottom Feeder", "0");
    }
    return x;
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

int OI::runwinch() 
{
    if (Xbox1.GetBButton())
    {
        
    }

 
}
