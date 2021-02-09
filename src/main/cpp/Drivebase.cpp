// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
#include "Robot.h"
#include "Drivebase.h"

Drivebase::Drivebase(Robot * pRobot) {
    this->pRobot = pRobot;
}

void Drivebase::Drive() {
    float fForward = pRobot->DriverCMD.fForward();
    float fRotate = pRobot->DriverCMD.fRotate();
    float dampener = 0.5;
    fForward = fForward * dampener;
    fRotate = fRotate * dampener;
    pRobot->WestCoastDrive.ArcadeDrive(fForward, fRotate);
}