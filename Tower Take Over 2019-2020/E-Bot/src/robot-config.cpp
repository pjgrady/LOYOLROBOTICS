#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor BackDrive = motor(PORT1, ratio18_1, false);
motor LeftDrive = motor(PORT10, ratio18_1, false);
motor RightDrive = motor(PORT11, ratio18_1, false);
motor FrontDrive = motor(PORT20, ratio18_1, false);
motor TopLift = motor(PORT18, ratio36_1, true);
motor BottomLIft = motor(PORT19, ratio36_1, true);
motor ClawMotor = motor(PORT6, ratio18_1, true);

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