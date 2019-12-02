#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
/*vex-vision-config:begin*/
signature HV__HORANGE = signature (1, 7921, 10767, 9344, -3915, -2047, -2980, 3, 0);
signature HV__HPURPLE = signature (2, -1261, 763, -250, 9009, 14895, 11952, 1.5, 0);
signature HV__SIG_3 = signature (3, 0, 0, 0, 0, 0, 0, 2.5, 0);
signature HV__SIG_4 = signature (4, 0, 0, 0, 0, 0, 0, 2.5, 0);
signature HV__SIG_5 = signature (5, 0, 0, 0, 0, 0, 0, 2.5, 0);
signature HV__SIG_6 = signature (6, 0, 0, 0, 0, 0, 0, 2.5, 0);
signature HV__SIG_7 = signature (7, 0, 0, 0, 0, 0, 0, 2.5, 0);
vision HV = vision (PORT11, 69, HV__HORANGE, HV__HPURPLE, HV__SIG_3, HV__SIG_4, HV__SIG_5, HV__SIG_6, HV__SIG_7);
/*vex-vision-config:end*/
motor FrontRight = motor(PORT2, ratio18_1, true);
motor FrontLeft = motor(PORT1, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}