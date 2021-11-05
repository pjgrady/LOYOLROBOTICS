/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       paulgrady                                                 */
/*    Created:      Thu Oct 21 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// BackLeft             motor         1               
// FrontLeft            motor         10              
// FrontRight           motor         20              
// BackRight            motor         11              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;


void usercontrol(void) 
{
BackLeft.setVelocity(100, vex::velocityUnits::pct);
BackRight.setVelocity(100, vex::velocityUnits::pct);
FrontLeft.setVelocity(100, vex::velocityUnits::pct);
FrontRight.setVelocity(100, vex::velocityUnits::pct);

while(1)
{
  //Brakes On
  int brake = 1;

  //Initializing Robot Config. DO NOT REMOVE
  vexcodeInit();
  vex::task::sleep(50);

  // Scaling down drive speed
  double scale = 1;

  // Forward/Backward Left side
  if(Controller1.Axis3.value()) 
  {
    brake = 0;
    BackLeft.spin(vex::directionType::fwd, Controller1.Axis3.value() * scale, vex::velocityUnits::pct);
    FrontLeft.spin(vex::directionType::fwd, Controller1.Axis3.value() * scale, vex::velocityUnits::pct);
    
  }  

  if(Controller1.Axis2.value())
  {
    brake = 0;
    FrontRight.spin(vex::directionType::rev, Controller1.Axis2.value() * scale, vex::velocityUnits::pct);
    BackRight.spin(vex::directionType::rev, Controller1.Axis2.value() * scale, vex::velocityUnits::pct);
  }

  if(brake)
  {
    FrontLeft.stop(brakeType::brake);
    FrontRight.stop(brakeType::brake);
    BackLeft.stop(brakeType::brake);
    BackRight.stop(brakeType::brake);
    
  }
}
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  usercontrol();
  
}
