// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Shooter.h"
#include "RobotMap.h"

Shooter::Shooter(Robot *robot) {
    this->robot = robot; // Save robot pointer
    debug = new Debug("/Subsystems/Shooter"); // Initialize the debug object
    shooterMotor = new CANSparkMax(SHOOTER_1, rev::CANSparkMax::MotorType::kBrushless);
    wheelSpeed = 0; // Set the saved speed to 0
}

void Shooter::spinUpWheel() {
    debug->PutNumber("Spin speed", wheelSpeed); // Log speed
    if (wheelSpeed != 0) {
        shooterMotor->Set(wheelSpeed);
    }
}

void Shooter::spinUpWheel(float speed) {
    wheelSpeed = speed; // Save the speed
    debug->PutNumber("Spin speed", wheelSpeed); // Log speed
    shooterMotor->Set(speed); // Actually set the motor
}

void Shooter::stopWheel() {
    wheelSpeed = 0;
    shooterMotor->StopMotor();
}

bool Shooter::isTargetSpeed() {
    return true;
}