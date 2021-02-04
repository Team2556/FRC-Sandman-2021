// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>
#include "OpMode.h"
#include "OpModes/TestTeleop1.h"
#include "OpModes/TestTeleop2.h"

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

#include <ctre/Phoenix.h>
#include "OI.h"


#include <frc/WPILib.h>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include "ctre\Phoenix.h"
#include "AHRS.h"
#include <frc/PowerDistributionPanel.h>
#include <iostream>
#include "rev/CANSparkMax.h"
//#include "rev/ColorSensorV3.h"
#include <frc/util/Color.h>
#include <frc/DriverStation.h>
#include "rev/CANSparkMax.h"
#include "ctre/Phoenix.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableInstance.h"

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

  std::vector<OpMode> AutoModes;
  std::vector<OpMode> TeleopModes;

  OI DriverCMD;

  TestTeleop1 Teleop1;
  TestTeleop2 Teleop2;
  
 private:
  
};
