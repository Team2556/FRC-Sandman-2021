// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include "frc/smartdashboard/SmartDashboard.h"
#include "frc/XboxController.h"
#include "RobotMap.h"

class OI {
 public:
  OI();

  void testFunction();

  float fForward();
  float fRotate();

  protected:
    frc::XboxController   Xbox1{XBOX_ONE};
    frc::XboxController   Xbox2{XBOX_TWO};
    frc::XboxController   Xbox3{XBOX_THREE};

};
