#include "cubeplex.h"

int color = red;

void setup() {
  initCube();
  animationMax = 600;
}
void loop() {
  Randomness();
}

/****************************** #8 Randomness *********************************\
| random sets of leds                                                          |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void Randomness() {
  
  continuePattern = true;
  int animationSpeed =70;
  int x;
  int y;
  int z;
    while (continuePattern) {
    for (int tt = random(4,8); tt > 0; tt--) { 
      x = random(0,4);
      y = random(0,4);
      z = random(0,4);
      drawLed(color,5,x,y,z);
      delay(animationSpeed);
    }  
    flushBuffer();
    clearBuffer();
    color = nextColor(color);
  }
}
