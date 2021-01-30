// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Shooter.h"

Shooter::Shooter(OpMode *opMode) {
    robot = opMode->getRobot();
    feeder = opMode->getFeeder();
}
