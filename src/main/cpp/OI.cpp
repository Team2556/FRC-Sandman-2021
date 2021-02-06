// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "OI.h"

OI::OI()
{
    
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