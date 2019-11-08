#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Front1 = motor(PORT20, ratio18_1, false);
motor Front2 = motor(PORT11, ratio18_1, false);
motor Back1 = motor(PORT1, ratio18_1, true);
motor Back2 = motor(PORT10, ratio18_1, true);
controller Controller1 = controller(primary);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}