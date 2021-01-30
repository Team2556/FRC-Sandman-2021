// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "Robot.h"
#include "Feeder.h"
#include "Shooter.h"
#include "OpMode.h"

class OpMode {
 public:
  Robot *robot;
  Feeder *feeder;
  Shooter *shooter;

  Robot *getRobot();
  Feeder *getFeeder();
  Shooter *getShooter();

  OpMode(Robot *robot);

  void Start(); // overide this

  void Run(); // overide this

  bool Complete(); // override this

};
