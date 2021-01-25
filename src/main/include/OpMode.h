// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

class OpMode {
 public:
  OpMode(); // 
  

  void Start(); // overide this

  void Run(); // overide this

  bool Complete(); // override this

};
