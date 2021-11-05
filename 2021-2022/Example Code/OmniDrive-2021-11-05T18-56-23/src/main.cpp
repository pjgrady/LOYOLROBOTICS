/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       paulgrady                                                 */
/*    Created:      Fri Oct 22 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// FrontDrive           motor         11              
// RightDrive           motor         1               
// BackDrive            motor         10              
// LeftDrive            motor         20              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;


void usercontrol(void) 
{
BackDrive.setVelocity(50, vex::velocityUnits::pct);
LeftDrive.setVelocity(50, vex::velocityUnits::pct);
RightDrive.setVelocity(50, vex::velocityUnits::pct);
FrontDrive.setVelocity(50, vex::velocityUnits::pct);

while(1)
{
  //Brakes On
  int brake = 1;

  //Initializing Robot Config. DO NOT REMOVE
  vexcodeInit();
  vex::task::sleep(50);

  // Scaling down drive speed
  double scale = 1;

  //Spin at half speed
  BackDrive.setVelocity(50, vex::velocityUnits::pct);
  LeftDrive.setVelocity(50,vex::velocityUnits::pct);
  RightDrive.setVelocity(50,vex::velocityUnits::pct);
  FrontDrive.setVelocity(50,vex::velocityUnits::pct); 

  
  //360 spin on axis1
  if(Controller1.Axis1.value())
  {
    brake = 0;
    BackDrive.spin(vex::directionType::fwd, Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
    LeftDrive.spin(vex::directionType::fwd,Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
    RightDrive.spin(vex::directionType::fwd,Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
    FrontDrive.spin(vex::directionType::fwd,Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
    wait(100, msec);
  }
  // Forward/Backwards on axis3
  if(Controller1.Axis3.value())
  {
      brake = 0;
      RightDrive.spin(directionType::rev,Controller1.Axis3.value() * scale,vex::velocityUnits::pct);
      LeftDrive.spin(directionType::fwd,Controller1.Axis3.value() * scale,vex::velocityUnits::pct);  
  }
  // Left/Right on axis 4
  if(Controller1.Axis4.value())
  {
    brake = 0;
    BackDrive.spin(directionType::rev,Controller1.Axis4.value() * scale,vex::velocityUnits::pct);
    FrontDrive.spin(directionType::fwd,Controller1.Axis4.value() * scale,vex::velocityUnits::pct);
  }
  
  if(brake)
  { 
      BackDrive.stop(brakeType::brake);
      LeftDrive.stop(brakeType::brake);
      RightDrive.stop(brakeType::brake);
      FrontDrive.stop(brakeType::brake);
  }
}
}

int main() 
{
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  usercontrol();
  
}
