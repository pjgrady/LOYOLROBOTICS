#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor FrontDrive = motor(PORT10, ratio18_1, false);
motor RightDrive = motor(PORT20, ratio18_1, false);
motor BackDrive = motor(PORT11, ratio18_1, false);
motor LeftDrive = motor(PORT1, ratio18_1, false);
motor TopLift = motor(PORT2, ratio18_1, false);
motor BottomLift = motor(PORT9, ratio18_1, false);
motor FlipMotor = motor(PORT16, ratio18_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}