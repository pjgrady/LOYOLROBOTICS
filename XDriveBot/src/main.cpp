/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\owner                                            */
/*    Created:      Fri Nov 08 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor10              motor         10              
// Motor11              motor         11              
// Motor20              motor         20              
// ---- END VEXCODE CONFIGURED DEVICES ----

//    F-m 
//       
//L       R
//
//    B
#include "vex.h"

using namespace vex;

int main() {
  
  //Spin at half speed
  Motor1.setVelocity(50, vex::velocityUnits::pct);
  Motor10.setVelocity(50,vex::velocityUnits::pct);
  Motor11.setVelocity(50,vex::velocityUnits::pct);
  Motor20.setVelocity(50,vex::velocityUnits::pct); 

  while(1)
    {
      
        int brake = 1; //Brakes on
        // Initializing Robot Configuration. DO NOT REMOVE!
        vexcodeInit();
        vex::task::sleep(50);
        Controller1.Screen.print("$");
        //Spins Right
        if(Controller1.ButtonL1.pressing()) 
        {
            brake = 0;
            Motor1.spin(vex::directionType::rev);
            Motor10.spin(vex::directionType::rev);
            Motor11.spin(vex::directionType::rev);
            Motor20.spin(vex::directionType::rev);
        }
        //Spins Left
	      if (Controller1.ButtonR1.pressing())
        {
            brake = 0;
            Motor1.spin(directionType::fwd);
            Motor10.spin(directionType::fwd);
            Motor11.spin(directionType::fwd);
            Motor20.spin(directionType::fwd);
        }
        // Forward/Backwards
        if(Controller1.Axis3.value())
        {
           brake = 0;
           Motor11.spin(directionType::rev,Controller1.Axis3.value(),vex::velocityUnits::pct);
           Motor10.spin(directionType::fwd,Controller1.Axis3.value(),vex::velocityUnits::pct);  
        }
        // Left/Right
        if(Controller1.Axis4.value())
        {
          brake = 0;
          Motor1.spin(directionType::rev,Controller1.Axis4.value(),vex::velocityUnits::pct);
          Motor20.spin(directionType::fwd,Controller1.Axis4.value(),vex::velocityUnits::pct);
          //.spin(vex::directionType::fwd,Controller1.Axis3.value(),vex::velocityUnits::pct);
        }
        if(brake)
        { 
            Motor1.stop(brakeType::brake);
            Motor10.stop(brakeType::brake);
            Motor11.stop(brakeType::brake);
            Motor20.stop(brakeType::brake);
        }

    }

  
}
