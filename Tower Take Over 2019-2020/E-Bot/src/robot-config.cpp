#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor Motor1 = motor(PORT1, ratio18_1, false);
motor Motor10 = motor(PORT10, ratio18_1, false);
motor Motor11 = motor(PORT11, ratio18_1, false);
motor Motor20 = motor(PORT20, ratio18_1, false);
motor Motor18 = motor(PORT18, ratio18_1, true);
motor Motor19 = motor(PORT19, ratio18_1, true);
motor Motor6 = motor(PORT6, ratio18_1, false);
motor Motor7 = motor(PORT7, ratio18_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}