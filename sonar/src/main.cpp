/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       binkley                                                   */
/*    Created:      Sun Dec 01 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// FrontRight           motor         2               
// FrontLeft            motor         1               
// Sonar                sonar         A, B            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

static const int SPEED = 15;

// sensor was mounted 6" from edge of robot
static const double MIN_DISTANCE = 9.0;
static const double MAX_DISTANCE = 15.0;
static const double IDEAL = (MAX_DISTANCE + MIN_DISTANCE) / 2.0;
static const int MIN_TURN_TIME = 10;


// claw is on the back :)

static void cls_write(vex::color color, const char *msg, int value)
{
  Brain.Screen.setPenColor(vex::color::white);
  Brain.Screen.setFillColor(color);
  Brain.Screen.drawRectangle(0,0, 480, 240);
  Brain.Screen.setCursor(2,4);
  Brain.Screen.setFont(vex::fontType::mono40);
  Brain.Screen.print(msg);
  Brain.Screen.print(value);
}


static void write(int r, int c, const char *msg)
{
  Brain.Screen.setCursor(r,c);
  Brain.Screen.print(msg);
}

static void write(int r, int c, double v)
{
  Brain.Screen.setCursor(r,c);
  Brain.Screen.print(v);
}


static void write(int r, int c, const char *msg, double v)
{
  Brain.Screen.setCursor(r,c);
  Brain.Screen.print(msg);
  Brain.Screen.print(v);
}

bool to_close_panic(double dist)
{
  return dist < MIN_DISTANCE;
}

bool to_far_panic(double dist)
{
  return dist > MAX_DISTANCE;
}


void turn_right(double dist)
{
  write(3, 6, "turn right");
  FrontLeft.spin(directionType::fwd, SPEED, velocityUnits::pct);
  FrontRight.spin(directionType::rev, SPEED, velocityUnits::pct);
}

void turn_left(double dist)
{
  write(3, 6, "turn left");
  FrontLeft.spin(directionType::rev, SPEED, velocityUnits::pct);
  FrontRight.spin(directionType::fwd, SPEED, velocityUnits::pct);
}

void go_forward(double dist)  // biased towrard IDEAL
{
  write(3,6, "go forward");
  double range  = (MAX_DISTANCE - MIN_DISTANCE) / 2.0;
  double r = (MAX_DISTANCE - dist) / range;
  double l = 2 - r;
  FrontLeft.spin(directionType::fwd, l*SPEED, velocityUnits::pct);
  FrontRight.spin(directionType::fwd, r*SPEED, velocityUnits::pct);
  write(5, 6, "l = ", l);
  write(6, 6, "r = ", r);
  write(4, 6, "dist = ", dist);
}

double sonar_ping()
{
  double d = Sonar.distance(inches);
  write(4, 6, "dist = ", d);
  return d;
}


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  cls_write(vex::color::blue, "", 0);

  while (true) {
    double dist = sonar_ping();
    if (to_close_panic(dist))
    {
      turn_left(dist);
      //task::sleep(MIN_TURN_TIME); // min turning time
    }
    else if (to_far_panic(dist))
    {
      turn_right(dist);
      // task::sleep(MIN_TURN_TIME); // min turning time
    }
    else
    {
      go_forward(dist);
    }

    task::sleep(100);  // poll 10 times a second
   }
}
