using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern signature HV__HORANGE;
extern signature HV__HPURPLE;
extern signature HV__SIG_3;
extern signature HV__SIG_4;
extern signature HV__SIG_5;
extern signature HV__SIG_6;
extern signature HV__SIG_7;
extern vision HV;
extern motor FrontRight;
extern motor FrontLeft;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );