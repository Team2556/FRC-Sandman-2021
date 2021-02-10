// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Robot.h"
#include "Feeder.h"
#include "Debug.h"
#include <rev/CANSparkMax.h>

using rev::CANSparkMax;

/**
 * The class that controls the shooter wheel,
 * aiming the turret, and rotating the hood.
 * 
 * Authors: Sam & Ash
 */
class Shooter {
  public:
    /**
     * Constructor, needs a reference
     * to the robot to access OI
     * 
     * @param robot Pointer to the robot
     */
    Shooter(Robot *robot);

    /**
     * Set the speed of the wheel
     * 
     * @param speed The speed of the wheel
     */
    void spinUpWheel(float speed);

    /**
     * Hold the previous speed of the wheel,
     * keeps the motor watchdog happy.
     */
    void spinUpWheel();

    /**
     * Stops the wheel, shorthand for 
     * spinUpWheel(0), may be used to
     * do more in the future so avoid
     * directly calling spinUpWheel(0)
     */
    void stopWheel();

    /**
     * Use to check if the motor is
     * ready to be shot.
     * 
     * @returns Whether the motor is at 
     *          the target speed.
     */
    bool isTargetSpeed();

    //TODO: implement these things, they do nohing
    void moveHood();
    bool setHood(int angle /*units is encoder ticks*/);
    bool hoodAimed();
    void rotateHood(float speed);

    bool aim();
    bool isAimed();
    void rotateTurret(float speed);

  private:
    CANSparkMax *shooterMotor;
    float wheelSpeed;
    Debug *debug;
    Robot *robot;
};
