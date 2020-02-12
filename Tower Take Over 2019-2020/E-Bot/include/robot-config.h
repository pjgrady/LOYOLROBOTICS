using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor BackDrive;
extern motor LeftDrive;
extern motor RightDrive;
extern motor FrontDrive;
extern motor TopLift;
extern motor BottomLIft;
extern motor ClawMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );