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
// FrontDrive           motor         10              
// RightDrive           motor         20              
// BackDrive            motor         11              
// LeftDrive            motor         1               
// TopLift              motor         2               
// BottomLift           motor         9               
// FlipMotor            motor         16              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;


void usercontrol(void) 
{

int armSpeedPCT = 70;

BackDrive.setVelocity(50, vex::velocityUnits::pct);
LeftDrive.setVelocity(50, vex::velocityUnits::pct);
RightDrive.setVelocity(50, vex::velocityUnits::pct);
FrontDrive.setVelocity(50, vex::velocityUnits::pct);
//TopLift.setVelocity(50, vex::velocityUnits::pct);
//BottomLift.setVelocity(50, vex::velocityUnits::pct);

while(1)
{
  //Brakes On
  int brake = 1;

  //Initializing Robot Config. DO NOT REMOVE
  vexcodeInit();
  vex::task::sleep(50);
  Controller1.Screen.print("");

  // Scaling down drive speed
  double scale = 1;
  
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

  //int armSpeedPCT = 1;

  // Lift Up 
  if(Controller1.ButtonR2.pressing())
  {
      TopLift.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
      BottomLift.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
  }
  // Lift Down 
  else if (Controller1.ButtonR1.pressing())
  {
      TopLift.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
      BottomLift.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
  }

  else 
  {
    TopLift.stop(brakeType::hold);
    BottomLift.stop(brakeType::hold);
  }
// initialize Flipper speed  
int flipSpeedPCT = 100;

//Controlls for flipper
if(Controller1.ButtonL1.pressing())
{
  FlipMotor.spin(directionType::rev, flipSpeedPCT, velocityUnits::pct);
}

else if(Controller1.ButtonL2.pressing())
{
  FlipMotor.spin(directionType::fwd, flipSpeedPCT, velocityUnits::pct);
}

else if(Controller1.ButtonLeft.pressing())
{
  FlipMotor.spinFor(fwd, 180, rotationUnits::deg, flipSpeedPCT, velocityUnits::pct);
  wait(250,msec);
}

else if(Controller1.ButtonRight.pressing())
{
  FlipMotor.spinFor(fwd, -180, rotationUnits::deg, flipSpeedPCT, velocityUnits::pct);
  wait(250,msec);
}

else 
{
  FlipMotor.stop(brakeType::hold);
}


}
}

int main() 
{
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  usercontrol();
  
}
