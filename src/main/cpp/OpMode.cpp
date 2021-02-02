// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "OpMode.h"

OpMode::OpMode(Robot *robot) {
    this->robot = robot;
    
    // Would instantiate stuff here but then we would
    // have to pay attention to the order they are
    // instantiated, so now I just instantiate them as
    // they are accessed
}

// Bunch of getters

Vision *OpMode::getVision() {
    if (vision == nullptr) { // If nullptr, instantiate it.
        vision = new Vision();
    }
    return vision;
}

Feeder *OpMode::getFeeder() {
    if (feeder == nullptr) { // If nullptr, instantiate it.
        feeder = new Feeder(this);
    }
    return feeder;
}

Robot *OpMode::getRobot() {
    // This should never be null, otherwise check where this OpMode instance was constructed
    return robot;
}