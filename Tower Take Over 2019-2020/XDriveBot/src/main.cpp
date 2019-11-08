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

#include "vex.h"

using namespace vex;

int main() {

  while(1)
    {
        //vex::task::sleep(50);
        //Controller1.Screen.print("$");
        if(Controller1.ButtonUp.pressing()) 
        {
            Motor1.spin(vex::directionType::fwd);
            Motor10.spin(vex::directionType::fwd);
            Motor11.spin(vex::directionType::fwd);
            Motor20.spin(vex::directionType::fwd);
        }
	    else if (Controller1.ButtonDown.pressing())
        {
         
            Motor1.spin(directionType::rev);
            Motor10.spin(directionType::rev);
            Motor11.spin(directionType::rev);
            Motor20.spin(directionType::rev);
           
        }
        else
        {
         
            Motor1.stop(brakeType::brake);
            Motor10.stop(brakeType::brake);
            Motor11.stop(brakeType::brake);
            Motor20.stop(brakeType::brake);
           
        }

    }
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}
