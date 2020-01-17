// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor10              motor         10              
// Motor11              motor         11              
// Motor20              motor         20              
// Motor18              motor         18              
// Motor19              motor         19              
// Motor6               motor         6               
// Motor7               motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor10              motor         10              
// Motor11              motor         11              
// Motor20              motor         20              
// Motor18              motor         18              
// Motor19              motor         19              
// Motor6               motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Motor18              motor         18              
// Motor19              motor         19              
// ---- END VEXCODE CONFIGURED DEVICES ----

//    F-m 
//       
//L       R
//
//    B
#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {

  // Speed for lift
  int armSpeedPCT = 200;
    
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
        }
        if(brake)
        { 
            Motor1.stop(brakeType::brake);
            Motor10.stop(brakeType::brake);
            Motor11.stop(brakeType::brake);
            Motor20.stop(brakeType::brake);
        }
        // Lift Up 
        if(Controller1.ButtonX.pressing())
        {
           Motor18.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
           Motor19.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
        }
        // Lift Down 
        else if (Controller1.ButtonY.pressing())
        {
           Motor18.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
           Motor19.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
        }
        // Add holding pressure
        else
        {
           Motor18.stop(brakeType::hold);
           Motor19.stop(brakeType::hold);
        }
        // grabber up
        if(Controller1.ButtonL1.pressing())
        {
          Motor6.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
          Motor7.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
        }
        // grabber down
        else if (Controller1.ButtonL2.pressing())
        {
          Motor6.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
          Motor7.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
        }
        // holding pressure for grabber
        else
        {
          Motor6.stop(brakeType::hold);
          Motor7.stop(brakeType::hold); 
        }
    wait(20,msec); // Sleep the task for a short amount of time to 
                   // prevent wasted resources
    }
}

int main() {
  // Set up callbacks for auton and driver control
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  //Run the pre-auton function
  pre_auton();

  // prevent infinite
  while(true) 
  {
    wait(100,msec);
  }
}