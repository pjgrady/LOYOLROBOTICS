// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// BackDrive            motor         1               
// LeftDrive            motor         10              
// RightDrive           motor         11              
// FrontDrive           motor         20              
// TopLift              motor         18              
// BottomLift           motor         19              
// ClawMotor            motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// BackDrive            motor         1               
// LeftDrive            motor         10              
// RightDrive           motor         11              
// FrontDrive           motor         20              
// TopLift              motor         18              
// BottomLIft           motor         19              
// ClawMotor            motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\owner                                            */
/*    Created:      Fri Nov 08 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/



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
    // Initialize speed for motors
    RightDrive.setVelocity(200, velocityUnits::pct);
    LeftDrive.setVelocity(200, velocityUnits::pct);
    TopLift.setVelocity(80, velocityUnits::pct);
    BottomLift.setVelocity(80, velocityUnits::pct);
    
//START AUTO CODE
  //Lift up to clear tire
  TopLift.rotateFor(45, rotationUnits::deg, false);
  BottomLift.rotateFor(45, rotationUnits::deg, false);
  //wait lift then drive
  wait(120,msec);
  //Drive forward and reach 720 degrees at full power forward
  RightDrive.rotateFor(-720, rotationUnits::deg, false);
  LeftDrive.rotateFor(720, rotationUnits::deg, false);


}

void auton2( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 2.");

    //
    TopLift.setVelocity(100, velocityUnits::pct);
    BottomLift.setVelocity(100, velocityUnits::pct);
    ClawMotor.setVelocity(200, velocityUnits::pct);
    //
    TopLift.rotateFor(directionType::fwd,360, rotationUnits::deg, false);
    BottomLift.rotateFor(directionType::fwd,360, rotationUnits::deg, false);

    wait(1500,msec);
    int counter = 0;

    while (counter != 100){
      ClawMotor.rotateFor(directionType::fwd,270, rotationUnits::deg, false);
      wait(1000,msec);
      int count = 0;
      while (count!= 1){
        ClawMotor.rotateFor(directionType::rev,270, rotationUnits::deg, false);  
        wait(1000, msec);
        count++;
      }
      counter++;
    }
    
}

void auton3( void ) {
    
    Brain.Screen.setFillColor(vex::color::white);
    Brain.Screen.clearScreen(vex::color::white);
    Brain.Screen.setPenColor(vex::color::black);
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Auton 3.");

    //Drive velocity set
    RightDrive.setVelocity(50, velocityUnits::pct);
    LeftDrive.setVelocity(50, velocityUnits::pct);
    BackDrive.setVelocity(50, velocityUnits::pct);
    FrontDrive.setVelocity(50, velocityUnits::pct);
    //Lift velocity set
    TopLift.setVelocity(100, velocityUnits::pct);
    BottomLift.setVelocity(100, velocityUnits::pct);
    //Intake velocity set
    ClawMotor.setVelocity(100, velocityUnits::pct);


    //Lift up to clear tire
    TopLift.rotateFor(150, rotationUnits::deg, false);
    BottomLift.rotateFor(150, rotationUnits::deg, false);
    //wait lift then drive
    wait(120,msec);
    //Drive Rotation 
    //forward back
    RightDrive.rotateFor(-950, rotationUnits::deg, false);
    LeftDrive.rotateFor(950, rotationUnits::deg, false);

    wait(1500, msec);
    RightDrive.rotateFor(100, rotationUnits::deg, false);
    LeftDrive.rotateFor(-100, rotationUnits::deg, false);

    wait(1500,msec);
    FrontDrive.rotateFor(-90, rotationUnits::deg, false);
    BackDrive.rotateFor(90, rotationUnits::deg, false);

  
    wait(1500, msec);
    BackDrive.rotateFor(-280, rotationUnits::deg, false);
    FrontDrive.rotateFor(-280, rotationUnits::deg, false);
    RightDrive.rotateFor(-280, rotationUnits::deg, false);
    LeftDrive.rotateFor(-280, rotationUnits::deg, false);
   
    wait(1500, msec);
    RightDrive.rotateFor(-420,rotationUnits::deg, false);
    LeftDrive.rotateFor(420,rotationUnits::deg, false);
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
        
        if (auton == 0) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Do nothing.");
        } else if (auton == 1) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 1: Push one block into scoring zone.");
        } else if (auton == 2) {
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Auton 2: Raise up wave at crowd, lower down.");
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
  int armSpeedPCT = 70;
    
  //Spin at half speed
  BackDrive.setVelocity(50, vex::velocityUnits::pct);
  LeftDrive.setVelocity(50,vex::velocityUnits::pct);
  RightDrive.setVelocity(50,vex::velocityUnits::pct);
  FrontDrive.setVelocity(50,vex::velocityUnits::pct); 

  while(1)
    {
        // scaling down drive speed for stability
        double scale = .75;
        
        int brake = 1; //Brakes on
        // Initializing Robot Configuration. DO NOT REMOVE!
        vexcodeInit();
        vex::task::sleep(50);
        Controller1.Screen.print("");
        //360 spin on axis1
        if(Controller1.Axis1.value())
        {
            brake = 0;
            BackDrive.spin(vex::directionType::fwd, Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
            LeftDrive.spin(vex::directionType::fwd,Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
            RightDrive.spin(vex::directionType::fwd,Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
            FrontDrive.spin(vex::directionType::fwd,Controller1.Axis1.value() * scale, vex::velocityUnits::pct);
            wait(100, msec);
        }
        // Forward/Backwards on axis3
        if(Controller1.Axis3.value())
        {
           brake = 0;
           RightDrive.spin(directionType::rev,Controller1.Axis3.value() * scale,vex::velocityUnits::pct);
           LeftDrive.spin(directionType::fwd,Controller1.Axis3.value() * scale,vex::velocityUnits::pct);  
        }
        // Left/Right on axis 4
        if(Controller1.Axis4.value())
        {
          brake = 0;
          BackDrive.spin(directionType::rev,Controller1.Axis4.value() * scale,vex::velocityUnits::pct);
          FrontDrive.spin(directionType::fwd,Controller1.Axis4.value() * scale,vex::velocityUnits::pct);
        }
        
        if(brake)
        { 
            BackDrive.stop(brakeType::brake);
            LeftDrive.stop(brakeType::brake);
            RightDrive.stop(brakeType::brake);
           FrontDrive.stop(brakeType::brake);
        }
        // Lift Up 
        if(Controller1.ButtonR1.pressing())
        {
           TopLift.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
           BottomLift.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
        }
        // Lift Down 
        else if (Controller1.ButtonR2.pressing())
        {
           TopLift.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
           BottomLift.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
        }
        // Add holding pressure
        else
        {
           TopLift.stop(brakeType::hold);
           BottomLift.stop(brakeType::hold);
        }
        int liftSpeedPCT = 100;
        // 
        if(Controller1.ButtonL2.pressing() && ClawMotor.position(degrees) > -100)
        {
          ClawMotor.spin(directionType::fwd, liftSpeedPCT, velocityUnits::pct);
         
        }
        // 
        else if (Controller1.ButtonL1.pressing())
        {
          ClawMotor.spin(directionType::rev, liftSpeedPCT, velocityUnits::pct);
          
        }
        // holding pressure for grabber
        else
        {
          ClawMotor.stop(brakeType::hold);
          
        }
    wait(20,msec); // Sleep the task for a short amount of time to 
                   // prevent wasted resources
    }
}

int main() {

  //Initialize Robot Config.
  vexcodeInit();

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