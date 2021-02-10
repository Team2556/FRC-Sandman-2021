// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.



#pragma once
#include "RobotMap.h"
#include "frc/XboxController.h"
#include <frc/smartdashboard/SmartDashboard.h>

class OI {
 public:
  OI();
  void Test();
  //void SetExtension();
  int RunIntake();
  bool IntakeExtension();
  int BottomFeeder();
  double TopFeeder();
  bool extended;
  void testFunction();
  double shooterSpeed();

  float fForward();
  float fRotate();

protected:
  frc::XboxController     Xbox1{XBOX_ONE};
  frc::XboxController     Xbox2{XBOX_TWO};
  frc::XboxController     Xbox3{XBOX_THREE};
};