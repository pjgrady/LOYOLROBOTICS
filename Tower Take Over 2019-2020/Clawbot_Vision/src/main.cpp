/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\owner                                            */
/*    Created:      Fri Nov 22 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// VisionSensor         vision        11              
// FrontRight           motor         2               
// FrontLeft            motor         1               
// Claw                 motor         4               
// Lift                 motor         3               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  vexcodeInit();
  while (true) {
    VisionSensor.takeSnapshot(VisionSensor__ORANGECUBE);
    if (VisionSensor.largestObject.exists && VisionSensor.largestObject.width>50 && VisionSensor.largestObject.width<100) {
        Brain.Screen.setPenColor(vex::color::white);
        Brain.Screen.setFillColor(vex::color::orange);
        Brain.Screen.drawRectangle(0,0, 480, 240);
        Brain.Screen.setCursor(2,6);
        Brain.Screen.setFont(vex::fontType::mono40);
        Brain.Screen.print("FORWARD-ORANGE\n");
        Brain.Screen.print(VisionSensor.largestObject.width);
        FrontLeft.spin(directionType::fwd, 30, velocityUnits::pct);
        FrontRight.spin(directionType::fwd, 30, velocityUnits::pct);
    }
    else  {
            VisionSensor.takeSnapshot(VisionSensor__PURPLECUBE);
    if (VisionSensor.largestObject.exists && VisionSensor.largestObject.width>50) {
        //DISPLAY
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setFillColor(vex::color::purple);
        Brain.Screen.drawRectangle(0,0, 480, 240);
        Brain.Screen.setCursor(2,6);
        Brain.Screen.setFont(vex::fontType::mono40);
        Brain.Screen.print("REVERSE-PURPLE\n");
        Brain.Screen.print(VisionSensor.largestObject.width);
        //
        FrontLeft.spin(directionType::rev, 30, velocityUnits::pct);
        FrontRight.spin(directionType::rev, 30, velocityUnits::pct);
    }
    else  {
            VisionSensor.takeSnapshot(VisionSensor__GREENCUBE);
    if (VisionSensor.largestObject.exists && VisionSensor.largestObject.width>50) {
        //DISPLAY
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setFillColor(vex::color::green);
        Brain.Screen.drawRectangle(0,0, 480, 240);
        Brain.Screen.setCursor(2,6);
        Brain.Screen.setFont(vex::fontType::mono40);
        Brain.Screen.print("CHASE TAIL-GREEN\n");
        Brain.Screen.print(VisionSensor.largestObject.width);
        //
        FrontLeft.spin(directionType::rev, 30, velocityUnits::pct);
        FrontRight.spin(directionType::fwd, 30, velocityUnits::pct);
    }
    else{
      FrontLeft.stop();
      FrontRight.stop();

    }
  }
}
}
}
