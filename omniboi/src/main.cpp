/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Caleb                                            */
/*    Created:      Fri Nov 08 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Front1               motor         20              
// Front2               motor         11              
// Back1                motor         1               
// Back2                motor         10              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() 
{
  
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
   vex::task::sleep(2000);
    Brain.Screen.print("Program started");
    
    Front1.setVelocity(50, vex::velocityUnits::pct);
    Back1.setVelocity(50,vex::velocityUnits::pct);
    Front2.setVelocity(50,vex::velocityUnits::pct);
    Back2.setVelocity(50,vex::velocityUnits::pct);

    Front1.spin(vex::directionType::fwd,Controller1.Axis3.value(),vex::velocityUnits::pct);
    Back1.spin(vex::directionType::rev,Controller1.Axis3.value(),vex::velocityUnits::pct);
    Front2.spin(vex::directionType::fwd,Controller1.Axis3.value(),vex::velocityUnits::pct);
    Back2.spin(vex::directionType::rev,Controller1.Axis3.value(),vex::velocityUnits::pct);
}
