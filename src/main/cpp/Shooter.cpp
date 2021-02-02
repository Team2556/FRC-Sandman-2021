// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Shooter.h"

Shooter::Shooter(OpMode *opMode) {
    robot = opMode->getRobot();
    feeder = opMode->getFeeder();
    debug = new Debug("/Subsystems/Shooter");
}

bool Shooter::spinUp() {
    
}

// Wheel Functions
// bool spinUp();
// void setSpinSpeed(float speed/*speed in rpm*/);
// void stopSpin();
// bool targetSpeed();

// // Hood
// void moveHood();
// bool setHood(int angle /*units is encoder ticks*/);
// bool hoodAimed();
// void rotateHood(float speed);

// // Turret Functions
// bool aim();
// bool isAimed();
// void rotateTurret(float speed);