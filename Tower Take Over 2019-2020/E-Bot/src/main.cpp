// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor10              motor         10              
// Motor11              motor         11              
// Motor20              motor         20              
// Motor18              motor         18              
// Motor19              motor         19              
// Motor6               motor         6               
// Motor7               motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor10              motor         10              
// Motor11              motor         11              
// Motor20              motor         20              
// Motor18              motor         18              
// Motor19              motor         19              
// Motor6               motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\owner                                            */
/*    Created:      Fri Nov 08 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// Motor10              motor         10              
// Motor11              motor         11              
// Motor20              motor         20              
// Motor18              motor         18              
// Motor19              motor         19              
// ---- END VEXCODE CONFIGURED DEVICES ----

//    F-m 
//       
//L       R
//
//    B
#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

//field
int tiles = 6;
int tile_px = 240/tiles;

int x_displacement = 120;
int y_displacement = 0;
int x = x_displacement;
int y = y_displacement;

int capsRadiusPX = 7;
int ballsRadiusPX = 1;

int button_pressed = 0;

bool redColor;
bool front;
int auton = 0;

int promise = 6;

//Auton Constants
const float WHEEL_DIAMETER = 4.125; // inches
const float WHEEL_CIRCUMFERENCE = WHEEL_DIAMETER * 3.1416;
const float GEAR_RATIO = 0.5; // 0.5 turn of motor = 1 turn of wheel
const int  AUTON_DRIVE_PCT = 50; // motors at 50% power during auton

//Auton Functions
void driveForward( float inches)
{
  float inchesPerDegree = WHEEL_CIRCUMFERENCE / 360;
  float degrees = inches / inchesPerDegree;

  Motor10.startRotateFor(
    degrees * GEAR_RATIO, vex::rotationUnits::deg,
    AUTON_DRIVE_PCT, vex::velocityUnits::pct
  );

  Motor11.startRotateFor(
    degrees * GEAR_RATIO, vex::rotationUnits::deg,
    AUTON_DRIVE_PCT, vex::velocityUnits::pct
  );

}

void auton0( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
}

void auton1( void ) {
    //RED FRONT AUTON
    
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 1.");


}

void auton2( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 2.");
}

void auton3( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 3.");
}

void auton4( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 4.");

}

void auton5( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 5.");
}

void auton6( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 6.");
}

void auton7( void ) {
    //BLUE FRONT AUTON
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 7.");

}

void auton8( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 8.");
}

void auton9( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 9.");
}

void auton10( void ) {
       
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 10.");

}

void auton11( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 11.");
}

void auton12( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 12.");
}

void screens(int screen) {
    if (screen == 1) {
        auton = 0;
        
        Brain.Screen.clearScreen(vex::color::white);
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setPenWidth(2);
        
        y_displacement = 0;
        x_displacement = 120;
        x = x_displacement;
        y = y_displacement;
        
        for (int i = 0; i < tiles; i++) {
            x = x_displacement;
            for (int j = 0; j < tiles; j++) {
                Brain.Screen.drawRectangle(x, y, tile_px, tile_px, "#838383");
                x += tile_px;
            }
            y += tile_px;
        }
        
        int buttons[4][3][2] = {
            {{0, 40}, {80 , 120}, {0, 0}},          //1: Top Left Red
            {{0, 40}, {160, 200}, {0, 0}},          //2: Bottom Left Red
            {{200, 240}, {80, 120}, {240, 240}},    //3: Top Right Blue
            {{200, 240}, {160, 200}, {240, 240}}    //4: Bottom Right Blue
        };
        
        int platforms[3][3][2] = {
            {{65, 105}, {120, 160}, {0, 0}}, //red
            {{135, 175}, {120, 160}, {240, 240}}, //blue
            {{100, 140}, {120, 160}, {60, 60}} //yellow
        };
        
        int caps[8][2][2] = {
            {{60, 60}, {240, 240}},
            {{100, 100}, {0, 0}},
            {{100, 180}, {0, 0}},
            {{100, 220}, {240, 240}},
            {{180, 60}, {0, 0}},
            {{140, 100}, {240, 240}},
            {{140, 180}, {240, 240}},
            {{140, 220}, {0, 0}}
        };
        
        int balls[16][2][2] = {
            {{65, 120}, {60, 60}},
            {{65, 160}, {60, 60}},
            {{175, 120}, {60, 60}},
            {{175, 160}, {60, 60}},
            {{100, 100}, {60, 60}},
            {{140, 100}, {60, 60}},
            {{100, 180}, {60, 60}},
            {{140, 180}, {60, 60}},
            {{55, 55}, {60, 60}},
            {{65, 65}, {60, 60}},
            {{175, 65}, {60, 60}},
            {{185, 55}, {60, 60}},
            {{100, 214}, {60, 60}},
            {{100, 226}, {60, 60}},
            {{140, 214}, {60, 60}},
            {{140, 226}, {60, 60}}
        };
        
        for(int i = 0; i < 8; i++) {
            Brain.Screen.setPenColor(caps[i][1][0]);
            Brain.Screen.drawCircle(caps[i][0][0]+x_displacement, caps[i][0][1]+y_displacement, capsRadiusPX, caps[i][1][1]);
        }
        
        for(int i = 0; i < 4; i++) {
            int length = buttons[i][0][1] - buttons[i][0][0];
            int width = buttons[i][1][1] - buttons[i][1][0];

            Brain.Screen.setPenColor(buttons[i][2][0]);
            Brain.Screen.drawRectangle(buttons[i][0][0]+x_displacement, buttons[i][1][0]+y_displacement, width, length, buttons[i][2][1]);
        }
        
        //Expansion Zone
        Brain.Screen.setPenColor(vex::color::white);
        Brain.Screen.setPenWidth(2);
        Brain.Screen.drawLine(0+x_displacement, 120+y_displacement, 40+x_displacement, 120+y_displacement);
        Brain.Screen.drawLine(200+x_displacement, 120+y_displacement, 240+x_displacement, 120+y_displacement);
        Brain.Screen.drawLine(40+x_displacement, 120+y_displacement, 40+x_displacement, 200+y_displacement);
        Brain.Screen.drawLine(200+x_displacement, 120+y_displacement, 200+x_displacement, 200+y_displacement);
        
        Brain.Screen.drawLine(40+x_displacement, 200+y_displacement, 200+x_displacement, 200+y_displacement);
        Brain.Screen.drawLine(120+x_displacement, 240+y_displacement, 120+x_displacement, 0+y_displacement);
        
        //Flag Pole
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setPenWidth(7);
        Brain.Screen.drawLine(0+x_displacement, 0+y_displacement, 0+x_displacement, 40+y_displacement);
        Brain.Screen.drawLine(0+x_displacement, 0+y_displacement, 240+x_displacement, 0+y_displacement);
        Brain.Screen.drawLine(240+x_displacement, 0+y_displacement, 240+x_displacement, 40+y_displacement);
        Brain.Screen.drawLine(40+x_displacement, 0+y_displacement, 40+x_displacement, 20+y_displacement);
        Brain.Screen.drawLine(120+x_displacement, 0+y_displacement, 120+x_displacement, 20+y_displacement);
        Brain.Screen.drawLine(200+x_displacement, 0+y_displacement, 200+x_displacement, 20+y_displacement);
        
        //Flags
        Brain.Screen.setPenWidth(3);
        Brain.Screen.setPenColor(vex::color::red);
        Brain.Screen.drawLine(120+x_displacement, 20+y_displacement, 134+x_displacement, 6+y_displacement);
        Brain.Screen.drawLine(200+x_displacement, 20+y_displacement, 220+x_displacement, 20+y_displacement);
        
        Brain.Screen.setPenColor(vex::color::blue);
        Brain.Screen.drawLine(40+x_displacement, 20+y_displacement, 20+x_displacement, 20+y_displacement);
        Brain.Screen.drawLine(120+x_displacement, 20+y_displacement, 106+x_displacement, 6+y_displacement);
        
        for(int i = 0; i < 3; i++) {
            int length = platforms[i][0][1] - platforms[i][0][0];
            int width = platforms[i][1][1] - platforms[i][1][0];

            Brain.Screen.setPenColor(platforms[i][2][0]);
            Brain.Screen.drawRectangle(platforms[i][0][0]+x_displacement, platforms[i][1][0]+y_displacement, width, length, platforms[i][2][1]);
        }
        
        for(int i = 0; i < 16; i++) {
            Brain.Screen.setPenColor(balls[i][1][0]);
            Brain.Screen.drawCircle(balls[i][0][0]+x_displacement, balls[i][0][1]+y_displacement, ballsRadiusPX, balls[i][1][1]);
        }
        
        button_pressed = 0;
        while (button_pressed == 0) {
            for(int i = 0; i < 4; i++) {
                if(((Brain.Screen.xPosition() > buttons[i][0][0]+x_displacement) && 
                    (Brain.Screen.xPosition() < buttons[i][0][1]+x_displacement)) && 
                   ((Brain.Screen.yPosition() > buttons[i][1][0]+y_displacement && 
                     Brain.Screen.yPosition() < buttons[i][1][1]+y_displacement)) &&
                   Brain.Screen.pressing()) {
                    vex::task::sleep(1000); //or add wait until function...
                    button_pressed = i+1;
                }
            }
            vex::task::sleep(25);
        }
        
        if (button_pressed == 1) {
            redColor = true;
            front = true;
        } else if (button_pressed == 2) {
            redColor = true;
            front = false;
        } else if (button_pressed == 3) {
            redColor = false;
            front = true;
        } else if (button_pressed == 4) {
            redColor = false;
            front = false;
        }
        screens(2);
        
    } else if (screen == 2) {
        auton = 0;
        
        Brain.Screen.clearScreen(vex::color::white);
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setPenWidth(2);

        int color;
        if (redColor) {
            color = 0;
        } else {
            color = 240;
        }
        
        Brain.Screen.setCursor(1, 1);
        Brain.Screen.setPenColor(color);
        Brain.Screen.setFillColor(vex::color::white);
        if (redColor) {
            if (front) {
                Brain.Screen.print("Red Front Selected", true);
            } else {
                Brain.Screen.print("Red Back Selected", true);
            }
        } else {
            if (front) {
                Brain.Screen.print("Blue Front Selected", true);
            } else {
                Brain.Screen.print("Blue Back Selected", true);
            }
        }
        
        int buttons[4][2][2] = {
            {{0, 160}, {25, 180}},
            {{160, 320}, {25, 180}},
            {{320, 480}, {25, 180}},
            {{400, 480}, {180, 240}}
        };
        
        for(int i = 0; i < 4; i++) {
            int width = buttons[i][0][1] - buttons[i][0][0];
            int length = buttons[i][1][1] - buttons[i][1][0];

            Brain.Screen.setPenColor(vex::color::black);
            Brain.Screen.drawRectangle(buttons[i][0][0], buttons[i][1][0], width, length, color+(i*30));
            if(i == 3) {
                Brain.Screen.drawRectangle(buttons[i][0][0], buttons[i][1][0], width, length, vex::color::white);
            }
        }
        
        Brain.Screen.setCursor(11, 43);
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setFillColor(vex::color::white);
        Brain.Screen.print("Back");
        
        button_pressed = 0;
        while (button_pressed == 0) {
            for(int i = 0; i < 4; i++) {
                if(((Brain.Screen.xPosition() > buttons[i][0][0]) && 
                    (Brain.Screen.xPosition() < buttons[i][0][1])) && 
                   ((Brain.Screen.yPosition() > buttons[i][1][0] && 
                     Brain.Screen.yPosition() < buttons[i][1][1])) &&
                   Brain.Screen.pressing()) {
                    vex::task::sleep(1000); //or add wait until function...
                    button_pressed = i+1;
                }
            }
            vex::task::sleep(25);
        }
        
        if (button_pressed == 4) {
            screens(1);
        } else if (redColor) {
            if (front) {
                if (button_pressed == 1) {
                    auton = 1;
                } else if (button_pressed == 2) {
                    auton = 2;
                } else if (button_pressed == 3) {
                    auton = 3;
                }
            } else {
                if (button_pressed == 1) {
                    auton = 4;
                } else if (button_pressed == 2) {
                    auton = 5;
                } else if (button_pressed == 3) {
                    auton = 6;
                }
            }
        } else  {
            if (front) {
                if (button_pressed == 1) {
                    auton = 7;
                } else if (button_pressed == 2) {
                    auton = 8;
                } else if (button_pressed == 3) {
                    auton = 9;
                }
            } else {
                if (button_pressed == 1) {
                    auton = 10;
                } else if (button_pressed == 2) {
                    auton = 11;
                } else if (button_pressed == 3) {
                    auton = 12;
                }
            }
        }
        
        screens(3);
    } else if (screen == 3) {
        Brain.Screen.clearScreen(vex::color::white);
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setFillColor(vex::color::white);
        Brain.Screen.setPenWidth(2);
        Brain.Screen.setFont(vex::fontType::mono20);
        
        //TODO: Explain what each auton does and select auton in preauton.
        
        if (auton == 0) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Do nothing.");
        } else if (auton == 1) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 1.");
        } else if (auton == 2) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 2.");
        } else if (auton == 3) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 3.");
        } else if (auton == 4) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 4.");
        } else if (auton == 5) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 5.");
        } else if (auton == 6) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 6.");
        } else if (auton == 7) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 7.");
        } else if (auton == 8) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 8.");
        } else if (auton == 9) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 9.");
        } else if (auton == 10) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 10.");
        } else if (auton == 11) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 11.");
        } else if (auton == 12) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 12.");
        }
        
        int buttons[1][2][2] = {
            {{400, 480}, {180, 240}}
        };
        
        for(int i = 0; i < 1; i++) {
            int width = buttons[i][0][1] - buttons[i][0][0];
            int length = buttons[i][1][1] - buttons[i][1][0];

            Brain.Screen.setPenColor(vex::color::black);
            Brain.Screen.drawRectangle(buttons[i][0][0], buttons[i][1][0], width, length, vex::color::white);
        }
        
        Brain.Screen.setCursor(11, 43);
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setFillColor(vex::color::white);
        Brain.Screen.print("Back");
        
        button_pressed = 0;
        while (button_pressed == 0) {
            for(int i = 0; i < 1; i++) {
                if(((Brain.Screen.xPosition() > buttons[i][0][0]) && 
                    (Brain.Screen.xPosition() < buttons[i][0][1])) && 
                   ((Brain.Screen.yPosition() > buttons[i][1][0] && 
                     Brain.Screen.yPosition() < buttons[i][1][1])) &&
                   Brain.Screen.pressing()) {
                    vex::task::sleep(1000); //or add wait until function...
                    screens(2);
                    button_pressed = i+1;
                }
            }
            vex::task::sleep(25);
        }
    } else if (screen == 4) {
        Brain.Screen.clearScreen(vex::color::white);
        Brain.Screen.setPenColor(vex::color::black);
        Brain.Screen.setPenWidth(2);
        Brain.Screen.setFont(vex::fontType::mono20);
        Brain.Screen.setFillColor(vex::color::white);
    }
}

void pre_auton( void ) {
  screens(1);
  vexcodeInit();
};

void autonomous(void) {
  if (auton == 0) {
        auton0();
    } else if (auton == 1) {
        auton1();
    } else if (auton == 2) {
        auton2();
    } else if (auton == 3) {
        auton3();
    } else if (auton == 4) {
        auton4();
    } else if (auton == 5) {
        auton5();
    } else if (auton == 6) {
        auton6();
    } else if (auton == 7) {
        auton7();
    } else if (auton == 8) {
        auton8();
    } else if (auton == 9) {
        auton9();
    } else if (auton == 10) {
        auton10();
    } else if (auton == 11) {
        auton11();
    } else if (auton == 12) {
        auton12();
    }
}


void usercontrol(void) {

  // Speed for lift
  int armSpeedPCT = 200;
    
  //Spin at half speed
  Motor1.setVelocity(50, vex::velocityUnits::pct);
  Motor10.setVelocity(50,vex::velocityUnits::pct);
  Motor11.setVelocity(50,vex::velocityUnits::pct);
  Motor20.setVelocity(50,vex::velocityUnits::pct); 

  while(1)
    {
      
        int brake = 1; //Brakes on
        // Initializing Robot Configuration. DO NOT REMOVE!
        vexcodeInit();
        vex::task::sleep(50);
        Controller1.Screen.print("");
        //Spins on axis1
        if(Controller1.Axis1.value())
        {
            brake = 0;
            Motor1.spin(vex::directionType::fwd, Controller1.Axis1.value(), vex::velocityUnits::pct);
            Motor10.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
            Motor11.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
            Motor20.spin(vex::directionType::fwd,Controller1.Axis1.value(), vex::velocityUnits::pct);
        }
        // Forward/Backwards
        if(Controller1.Axis3.value())
        {
           brake = 0;
           Motor11.spin(directionType::rev,Controller1.Axis3.value(),vex::velocityUnits::pct);
           Motor10.spin(directionType::fwd,Controller1.Axis3.value(),vex::velocityUnits::pct);  
        }
        // Left/Right
        if(Controller1.Axis4.value())
        {
          brake = 0;
          Motor1.spin(directionType::rev,Controller1.Axis4.value(),vex::velocityUnits::pct);
          Motor20.spin(directionType::fwd,Controller1.Axis4.value(),vex::velocityUnits::pct);
        }
        // forward turn
      
        if(brake)
        { 
            Motor1.stop(brakeType::brake);
            Motor10.stop(brakeType::brake);
            Motor11.stop(brakeType::brake);
            Motor20.stop(brakeType::brake);
        }
        // Lift Up 
        if(Controller1.ButtonR1.pressing())
        {
           Motor18.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
           Motor19.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
        }
        // Lift Down 
        else if (Controller1.ButtonR2.pressing())
        {
           Motor18.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
           Motor19.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
        }
        // Add holding pressure
        else
        {
           Motor18.stop(brakeType::hold);
           Motor19.stop(brakeType::hold);
        }
        // grabber up
        if(Controller1.ButtonUp.pressing())
        {
          Motor6.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
          Motor7.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
        }
        // grabber down
        else if (Controller1.ButtonDown.pressing())
        {
          Motor6.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
          Motor7.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
        }
        // holding pressure for grabber
        else
        {
          Motor6.stop(brakeType::hold);
          Motor7.stop(brakeType::hold); 
        }
    wait(20,msec); // Sleep the task for a short amount of time to 
                   // prevent wasted resources
    }
}

int main() {

  while (true) 
  {
    pre_auton();

    if(!Competition.isCompetitionSwitch())
    {
      usercontrol();
    }
  }
  // Set up callbacks for auton and driver control
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  //Run the pre-auton function
  

  // prevent infinite
  while(true) 
  {
    wait(100,msec);
  }
}