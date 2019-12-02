#include "vex.h"  /// WTF is vex IDE doing ... just include the file and all is well :(
using namespace vex;


static void bwrite(int r, int c, const char *msg)
{
  Brain.Screen.setCursor(r,c);
  Brain.Screen.print(msg);
}


static void bwrite(int r, int c, double v)
{
  Brain.Screen.setCursor(r,c);
  Brain.Screen.print(v);
}


static void bwrite(int r, int c, const char *msg, double v)
{
  Brain.Screen.setCursor(r,c);
  Brain.Screen.print(msg);
  Brain.Screen.print(v);
}


static void cls_write(vex::color color, const char *msg, int value)
{
  Brain.Screen.setPenColor(vex::color::white);
  Brain.Screen.setFillColor(color);
  Brain.Screen.drawRectangle(0,0, 480, 240);
  Brain.Screen.setFont(vex::fontType::mono40);
  bwrite(2, 4, msg, value);
}

