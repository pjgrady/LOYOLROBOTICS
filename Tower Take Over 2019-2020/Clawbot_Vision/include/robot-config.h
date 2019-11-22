using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern signature VisionSensor__GREENCUBE;
extern signature VisionSensor__ORANGECUBE;
extern signature VisionSensor__PURPLECUBE;
extern signature VisionSensor__SIG_4;
extern signature VisionSensor__SIG_5;
extern signature VisionSensor__SIG_6;
extern signature VisionSensor__SIG_7;
extern vision VisionSensor;
extern motor FrontRight;
extern motor FrontLeft;
extern motor Claw;
extern motor Lift;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );