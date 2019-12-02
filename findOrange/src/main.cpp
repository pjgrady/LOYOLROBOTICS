/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       binkley                                                   */
/*    Created:      Sun Dec 01 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// HV                   vision        11              
// FrontRight           motor         2               
// FrontLeft            motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

static bool clockwise = true;
static bool change_possible = true;

static const int SPEED = 5;


static void cls_write(vex::color color, const char *msg, int value)
{
  Brain.Screen.setPenColor(vex::color::white);
  Brain.Screen.setFillColor(color);
  Brain.Screen.drawRectangle(0,0, 480, 240);
  Brain.Screen.setCursor(2,4);
  Brain.Screen.setFont(vex::fontType::mono40);
  Brain.Screen.print(msg);
  Brain.Screen.print(value);
}


static void write(int r, int c, const char *msg)
{
  Brain.Screen.setCursor(r,c);
  Brain.Screen.print(msg);
}


bool foundOrange()
{
  HV.takeSnapshot(HV__HORANGE);
  if (HV.largestObject.exists)
  {
    cls_write(orange, "Orange Exists ", HV.largestObject.width);
    if (HV.largestObject.width>25 && HV.largestObject.width<100) {
      write(3,6,"size match... FOUND");
      // usign two orange block test find big enough
    }
    FrontLeft.stop();
    FrontRight.stop();
    return true;
  }
  else
  {
    write(3,6, clockwise ? "clockwise" : "counter closkwise");
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
  HV.takeSnapshot((HV__HPURPLE));
  cls_write(orange, HV.largestObject.exists ? "Purple exists " : "No Purple ", 
            HV.largestObject.width);
  if (HV.largestObject.exists && HV.largestObject.width>50) // && HV.largestObject.width<100) 
  {
    write(3, 6, "size match");
    if (change_possible)
      clockwise = !clockwise;
    change_possible = false;
    return true;
  }
  else
  {
    if (!HV.largestObject.exists)  // FIX ME timer (no change for 1 sec?) might tbe better 
      change_possible = true;
    return false;
  }
}


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
   while (true) {
     if (foundOrange())
     {
       write(4,6, "main:orange");
     }
     else if (foundPurple())
     {
       write(4,6, "main:purple");
     }
     else
     {
       write(4,6, "main: no match");
     }
     task::sleep(100);  // poll 10 times a second
   }
}
