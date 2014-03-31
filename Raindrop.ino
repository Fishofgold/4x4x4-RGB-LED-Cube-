#include "cubeplex.h"

int color = red;

void setup() {
  initCube();
  animationMax = 600;
}
void loop() {
  RaindropV2();
}

/****************************** #5 RaindropV2 *********************************\
| random raindrops                                                             |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void RaindropV2() {
  continuePattern = true;
  int animationSpeed =150;
  int x=0;
  int y=0;
  int z=4;
  int a=1;
  while (continuePattern) {
    for (a = 100; a > 0; a--) {
      x=(random(0,4));
      y=(random(0,4));
      z=4;
      delay (250);
      for (int i = 4; i > 0; i--) {
        z = z - 1;
        drawLed(color,5,x,y,z);
        flushBuffer(); 
        clearBuffer();
        delay(animationSpeed);
      }
      color = nextColor(color);
    }
  }
}
