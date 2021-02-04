// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
#include "Robot.h"
#pragma once

class Drivebase {
 public:
  Drivebase();
  // reference frame for robot is: +X Right, +Y Forward, +theta
  void Drive(float xSpeed, float ySpeed, float rotate, float gyro);
  void GyroDrive();
  void FieldOrientedDrive();
  
};
