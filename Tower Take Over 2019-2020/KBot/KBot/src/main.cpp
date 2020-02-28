// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor3               motor         3               
// Motor2               motor         2               
// Motor19              motor         19              
// Motor20              motor         20              
// Motor14              motor         14              
// Motor6               motor         6               
// Motor7               motor         7               
// Motor9               motor         9               
// Motor10              motor         10              
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor3               motor         3               
// Motor2               motor         2               
// Motor19              motor         19              
// Motor20              motor         20              
// Motor14              motor         14              
// Motor6               motor         6               
// Motor7               motor         7               
// Motor9               motor         9               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor3               motor         3               
// Motor2               motor         2               
// Motor19              motor         19              
// Motor20              motor         20              
// Motor14              motor         14              
// Motor6               motor         6               
// Motor7               motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor3               motor         3               
// Motor2               motor         2               
// Motor19              motor         19              
// Motor20              motor         20              
// Motor14              motor         14              
// Motor6               motor         6               
// Motor7               motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor3               motor         3               
// Motor2               motor         2               
// Motor19              motor         19              
// Motor20              motor         20              
// Motor14              motor         14              
// Motor6               motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor3               motor         3               
// Motor2               motor         2               
// Motor19              motor         19              
// Motor20              motor         20              
// Motor14              motor         14              
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// FrontRightMotor      motor         1               
// FrontLeftMotor       motor         2               
// BackLeftMotor        motor         3               
// BackRightMotor       motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;


//Field
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
int force = 0;








void fast_move_forward(int howFar){
  Motor19.setVelocity(200, velocityUnits::pct);
    Motor20.setVelocity(200, velocityUnits::pct);
    Motor2.setVelocity(200, velocityUnits::pct);
    Motor3.setVelocity(200, velocityUnits::pct);

  Motor19.rotateFor(howFar, rotationUnits::deg, false);
  Motor20.rotateFor(howFar, rotationUnits::deg, false);
  Motor2.rotateFor(howFar, rotationUnits::deg, false); 
  Motor3.rotateFor(howFar, rotationUnits::deg, false);
}


void move_to_cube(){

}





void auton0( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("No Auto Chosen! Tell refs technical difficulties and to wait a second, restart program");
}

void auton1( void ) {
//RED FRONT AUTON
    //Config Auto 1
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Running Auto 1");

    
  //Drive forward and reach 360 degrees at full power forward
  fast_move_forward(360);

}

void auton2( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");


    //move forward to the cube
move_to_cube();
  
    //intake cube

  
    //back away from spot

  
    //drive towards stacking square goal

    
    //raise the intake sled

    
    //outtake cube


    //back away
}

void auton3( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
}

void auton4( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");

}

void auton5( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
}

void auton6( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
}

void auton7( void ) {
    //BLUE FRONT AUTON
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");

}

void auton8( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
}

void auton9( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
}

void auton10( void ) {
       
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");

}

void auton11( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
}

void auton12( void ) {
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Lol.");
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
    
        for(int i = 0; i < 4; i++) {
            int length = buttons[i][0][1] - buttons[i][0][0];
            int width = buttons[i][1][1] - buttons[i][1][0];

            Brain.Screen.setPenColor(buttons[i][2][0]);
            Brain.Screen.drawRectangle(buttons[i][0][0]+x_displacement, buttons[i][1][0]+y_displacement, width, length, buttons[i][2][1]);
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
        //2L 3R
        //19L 20R
        if (auton == 0) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 0.");
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

void autonomous( void ) {
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

void advance(void){
  Motor2.setVelocity(200, vex::velocityUnits::pct);
  Motor3.setVelocity(200,vex::velocityUnits::pct);
}

void usercontrol(void) {

  //Driving Control
  while(1)
    {
      
        int brake = 1; //Brakes on
        // Initializing Robot Configuration. DO NOT REMOVE!
        vexcodeInit();
        vex::task::sleep(50);
        //Controller1.Screen.print("Driver");
        /*int mv1 = Motor14.position(degrees);
        Controller1.Screen.print("Tray:%f degrees",mv1);
        Brain.Screen.print("Arm rotation: %f degrees",Motor14.rotation(rotationUnits::deg));*/

           /*brake = 0;
           Motor19.spin(directionType::fwd,Controller1.Axis3.value(),vex::velocityUnits::pct);
           Motor2.spin(directionType::fwd,Controller1.Axis3.value(), vex::velocityUnits::pct);
           Motor20.vex::motor::setStopping(coast);
           Motor3.vex::motor::setStopping(coast);
           brake = 0;
           Motor19.vex::motor::setStopping(coast);
           Motor2.vex::motor::setStopping(coast);
           Motor20.spin(directionType::fwd,Controller1.Axis2.value(), vex::velocityUnits::pct);
           Motor3.spin(directionType::fwd,Controller1.Axis2.value(), vex::velocityUnits::pct);*/
         //Brakes on
        // Initializing Robot Configuration. DO NOT REMOVE!

           brake = 0;
           double scale = .5;
           Motor19.spin(directionType::fwd,Controller1.Axis3.value()*scale,vex::velocityUnits::pct);
           Motor2.spin(directionType::fwd,Controller1.Axis3.value()*scale, vex::velocityUnits::pct);
           Motor20.vex::motor::setStopping(coast);
           Motor3.vex::motor::setStopping(coast);
           brake = 0;
           Motor19.vex::motor::setStopping(coast);
           Motor2.vex::motor::setStopping(coast);
           Motor20.spin(directionType::fwd,Controller1.Axis2.value()*scale, vex::velocityUnits::pct);
           Motor3.spin(directionType::fwd,Controller1.Axis2.value()*scale, vex::velocityUnits::pct);
       
      
        if(brake)
        { 
            Motor2.stop(brakeType::brake);
            Motor3.stop(brakeType::brake);
            Motor19.stop(brakeType::brake);
            Motor20.stop(brakeType::brake);
        }

        //double slowDown = .5;
       
        if(Controller1.ButtonR1.pressing() && Motor14.position(degrees) < 760){
          Motor14.spin(directionType::fwd, 50, velocityUnits::pct);
        }
        else if(Controller1.ButtonR2.pressing() && Motor14.position(degrees) > 125){
          Motor14.spin(directionType::rev, 50, velocityUnits::pct);
        }
        else{
          Motor14.stop(brakeType::hold);
        }

        if(brake)
        { 
            Motor2.stop(brakeType::brake);
            Motor3.stop(brakeType::brake);
            Motor19.stop(brakeType::brake);
            Motor20.stop(brakeType::brake);
        }

        
        //control pickup
        if(Controller1.ButtonL1.pressing())
        {
          Motor6.spin(directionType::fwd, 70, velocityUnits::pct);
          Motor7.spin(directionType::fwd, 70, velocityUnits::pct);
        }
        else if(Controller1.ButtonL2.pressing())
        {
          Motor6.spin(directionType::rev, 70, velocityUnits::pct);
          Motor7.spin(directionType::rev, 70, velocityUnits::pct);
        }
        else
        {
          Motor6.stop(brakeType::brake);
          Motor7.stop(brakeType::brake);
        }
        if(Controller1.ButtonDown.pressing())
        {
          Motor9.spin(directionType::rev, 50, velocityUnits::pct);
          Motor10.spin(directionType::fwd,50, velocityUnits::pct);
        }
        else if(Controller1.ButtonUp.pressing())
        {
          Motor9.spin(directionType::fwd, 50, velocityUnits::pct);
          Motor10.spin(directionType::rev,50, velocityUnits::pct);
        }
        else
        {
          Motor9.stop(brakeType::brake);
          Motor10.stop(brakeType::brake);
        }
    }
}


int main() {

    while (true) {
        pre_auton();

        if(!Competition.isCompetitionSwitch()) {
            usercontrol();
            
        }

        Competition.autonomous( autonomous );
        Competition.drivercontrol( usercontrol );

        vex::task::sleep(1000);
    }
}