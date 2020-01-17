using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor FrontRightMotor;
extern motor FrontLeftMotor;
extern motor BackLeftMotor;
extern motor BackRightMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );