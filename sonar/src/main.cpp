/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       binkley                                                   */
/*    Created:      Sun Dec 01 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/* goal: keep robot 9" from central 'track' */

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// FrontRight           motor         2               
// FrontLeft            motor         1               
// Sonar                sonar         A, B            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
#include "util.h"

static const int SPEED = 15;

// sensor was mounted 6" from edge of robot
static const double MIN_DISTANCE = 9.0;
static const double MAX_DISTANCE = 15.0;
static const double IDEAL = (MAX_DISTANCE + MIN_DISTANCE) / 2.0;


// claw is on the back :)

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
  bwrite(3, 6, "turn right");
  FrontLeft.spin(directionType::fwd, SPEED, velocityUnits::pct);
  FrontRight.spin(directionType::rev, SPEED, velocityUnits::pct);
}

void turn_left(double dist)
{
  bwrite(3, 6, "turn left");
  FrontLeft.spin(directionType::rev, SPEED, velocityUnits::pct);
  FrontRight.spin(directionType::fwd, SPEED, velocityUnits::pct);
}

void go_forward(double dist)  // bias toward IDEAL
{
  bwrite(3,6, "go forward");
  double range  = (MAX_DISTANCE - MIN_DISTANCE) / 2.0;
  double r = (MAX_DISTANCE - dist) / range;
  double l = 2 - r;
  FrontLeft.spin(directionType::fwd, l*SPEED, velocityUnits::pct);
  FrontRight.spin(directionType::fwd, r*SPEED, velocityUnits::pct);
  bwrite(4, 6, "dist = ", dist);
  bwrite(5, 6, "l = ", l);
  bwrite(6, 6, "r = ", r);
}

double sonar_ping()
{
  double d = Sonar.distance(inches);
  bwrite(4, 6, "dist = ", d);
  return d;
}


int main() 
{
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  cls_write(vex::color::blue, "", 0);

  while (true) 
  {
    double dist = sonar_ping();
    if (to_close_panic(dist))
      turn_left(dist);
    else if (to_far_panic(dist))
      turn_right(dist);
    else
      go_forward(dist);

    task::sleep(100);  // poll 10 times a second
   }
}
