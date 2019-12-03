/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       binkley                                                   */
/*    Created:      Sun Dec 01 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/


/* turn claw-bot until sufficiently large orange block is found. 
 * reverse direction of spin if a purple block is seen.
 */

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// HV                   vision        11              
// FrontRight           motor         2               
// FrontLeft            motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
#include "util.h"


static bool clockwise = true;
static bool change_possible = true;

static const int SPEED = 5;


bool foundOrange()
{
  HV.takeSnapshot(HV__HORANGE);
  if (HV.largestObject.exists)
  {
    cls_write(orange, "Orange Exists ", HV.largestObject.width);
    if (HV.largestObject.width>25 && HV.largestObject.width<100) {
      bwrite(3,6,"size match... FOUND");
      // FIX ME: using three orange blocks, test not to big / not to small
    }

    FrontLeft.stop();
    FrontRight.stop();
    return true;
  }
  else
  {
    bwrite(3,6, clockwise ? "turning clockwise" : "turning counter-clockwise");
    if (clockwise)
    {
      FrontLeft.spin(directionType::fwd, SPEED, velocityUnits::pct);
      FrontRight.spin(directionType::rev, SPEED, velocityUnits::pct);
    } else {
      FrontLeft.spin(directionType::rev, SPEED, velocityUnits::pct);
      FrontRight.spin(directionType::fwd, SPEED, velocityUnits::pct);
    }
    return false;
  }
}


bool foundPurple()
{
  HV.takeSnapshot(HV__HPURPLE);
  cls_write(orange, HV.largestObject.exists ? "Purple exists " : "No Purple ", 
            HV.largestObject.width);

  // change_possible is used to avoid robot oscillating between clockwise and 
  // counter-clockwise while a purple block is visible.  it does this by
  // preventing further change until the purple block is no longer visible. 
  // an alternative would be to forbid change for X seconds.

  if (HV.largestObject.exists && HV.largestObject.width>50) 
  {
    bwrite(3, 6, "size match");
    if (change_possible)
      clockwise = !clockwise;
    change_possible = false;
    return true;
  }
  else
  {
    if (!HV.largestObject.exists)  
      change_possible = true;
    return false;
  }
}


int main() {
  vexcodeInit();     // Initializing Robot Configuration. 

   while (true) 
   {
     if (foundOrange())
       bwrite(4,6, "main: found orange");
     else if (foundPurple())
       bwrite(4,6, "main: found purple");
     else
       bwrite(4,6, "main: found no match");
     
     task::sleep(100);  // poll 10 times a second
   }
}
