// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include "RobotMap.h"
#include "ctre/Phoenix.h"
//#include <Servo.h>

class ControlPannel {
 public:
  ControlPannel();

WPI_TalonSRX    CtrlPanelMotor{CPMOTOR};
//frc::Servo      CtrlServo{CPSERVO};

};
