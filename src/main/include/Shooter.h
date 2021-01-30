// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Robot.h"
#include "Feeder.h"
#include "OpMode.h"

class Shooter {
  public:
    OpMode *opMode;
    Robot *robot;
    Feeder *feeder;

    Shooter(OpMode *opMode);

    // Wheel Functions
    bool spinUp();
    void setSpinSpeed(float speed/*speed in rpm*/);
    void stopSpin();
    bool targetSpeed();

    // Hood
    void moveHood();
    bool setHood(int angle /*units is encoder ticks*/);
    bool hoodAimed();
    void rotateHood(float speed);

    // Turret Functions
    bool aim();
    bool isAimed();
    void rotateTurret(float speed);
};
