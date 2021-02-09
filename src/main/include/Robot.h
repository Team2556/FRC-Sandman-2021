// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

#include <ctre/Phoenix.h>
#include "RobotMap.h"
#include "OI.h"

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
#include "frc/XboxController.h"
#include "frc/DoubleSolenoid.h"

#include "Debug.h"
#include "OI.h"
#include "frc/SpeedControllerGroup.h"
#include "frc/drive/DifferentialDrive.h"

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

<<<<<<< HEAD
=======
  std::vector<OpMode> AutoModes;
  std::vector<OpMode> TeleopModes;

  OI DriverCMD;

   rev::CANSparkMax            MotorControl_L1{LEFT_DRIVE_1, rev::CANSparkMax::MotorType::kBrushless};
   rev::CANSparkMax            MotorControl_L2{LEFT_DRIVE_2, rev::CANSparkMax::MotorType::kBrushless};
   rev::CANSparkMax            MotorControl_R1{RIGHT_DRIVE_1, rev::CANSparkMax::MotorType::kBrushless};
   rev::CANSparkMax            MotorControl_R2{RIGHT_DRIVE_2, rev::CANSparkMax::MotorType::kBrushless};

   frc::SpeedControllerGroup LeftDrive{MotorControl_L1, MotorControl_L2};
   frc::SpeedControllerGroup RightDrive{MotorControl_R1, MotorControl_R2};

   frc::DifferentialDrive WestCoastDrive{LeftDrive, RightDrive};
  TestTeleop1 Teleop1;
  TestTeleop2 Teleop2;

  float TopFeederSpeed;
  float BottomFeederSpeed;


  
  OI * pOI;
//Feeder
//Motors
  WPI_TalonSRX      Feeder_High_Motor{FEEDER_HIGH}; //Motor 9
  WPI_TalonSRX      Feeder_Low_Motor{FEEDER_LOW}; //Motor 10
  WPI_TalonSRX      Intake_Motor{CAN_INTAKE}; //Motor 11




frc::DoubleSolenoid   Intake_Solenoid{CAN_PCM, INTAKE_OUT, INTAKE_IN};

  
>>>>>>> origin/dev
 private:
  
};
