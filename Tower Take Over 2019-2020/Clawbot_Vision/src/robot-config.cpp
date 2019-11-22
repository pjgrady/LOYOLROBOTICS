#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
/*vex-vision-config:begin*/
signature VisionSensor__GREENCUBE = signature (1, -7585, -4831, -6208, -4575, -2647, -3610, 2.5, 0);
signature VisionSensor__ORANGECUBE = signature (2, 5121, 7531, 6326, -2233, -1555, -1894, 1.5, 0);
signature VisionSensor__PURPLECUBE = signature (3, -1, 1665, 832, 4801, 9375, 7088, 1.9, 0);
signature VisionSensor__SIG_4 = signature (4, 0, 0, 0, 0, 0, 0, 2.5, 0);
signature VisionSensor__SIG_5 = signature (5, 0, 0, 0, 0, 0, 0, 2.5, 0);
signature VisionSensor__SIG_6 = signature (6, 0, 0, 0, 0, 0, 0, 2.5, 0);
signature VisionSensor__SIG_7 = signature (7, 0, 0, 0, 0, 0, 0, 2.5, 0);
vision VisionSensor = vision (PORT11, 56, VisionSensor__GREENCUBE, VisionSensor__ORANGECUBE, VisionSensor__PURPLECUBE, VisionSensor__SIG_4, VisionSensor__SIG_5, VisionSensor__SIG_6, VisionSensor__SIG_7);
/*vex-vision-config:end*/
motor FrontRight = motor(PORT2, ratio18_1, false);
motor FrontLeft = motor(PORT1, ratio18_1, true);
motor Claw = motor(PORT4, ratio18_1, false);
motor Lift = motor(PORT3, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}