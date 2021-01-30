// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "OpMode.h"

class Feeder {
 public:
  Feeder(OpMode *opMode);

  // Intake
  void SetIntake(bool Extended);
  bool IsExtended();
  void KeepExtending(); // used to keep intake moving to target. Only needed if we use a motor to exend rather than pistons

  void RunIntake();
  void RunIntake(float speed); // positive speed is pulling in, negative is out

  // Hopper
  void SpinHopper();
  void SpinHopper(float speed);

  void KickUp();
  void KickUp(float Speed); // positive is into the shooter, negative is out
};
