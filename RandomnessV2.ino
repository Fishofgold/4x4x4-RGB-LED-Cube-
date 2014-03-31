#include "cubeplex.h"

int color = red;
void setup() {
  initCube();
  animationMax = 1000;
}
void loop() {
  RandomnessV2();
}

/***************************** #10 RandomnessV2 *******************************\
| Random sets of leds                                                          |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void RandomnessV2() {
  continuePattern = true;
  int animationSpeed = 400;
  int xpos[] = {0,0,0,0,0,0,0,0,0,0};
  int ypos[] = {0,0,0,0,0,0,0,0,0,0};
  int zpos[] = {0,0,0,0,0,0,0,0,0,0};
  int countx = 0;
  int county = 0;
  int led = 0;
  while (continuePattern) {
    for (int y = 0; y < 100; y++) {
      countx =10;
      county =9;
      for (int arr = 10; arr > 1; arr--){
        countx = countx - 1;
        county = county - 1;
        xpos[countx] = xpos[county];
        ypos[countx] = ypos[county];
        zpos[countx] = zpos[county];
        drawLed(color,xpos[countx],ypos[countx],zpos[countx]);
      }
      switch(random(0,6)) {
        case 0:
        if (xpos[0] > 0) {
          xpos[0]--; 
          break;
        }
        case 1:
        if (xpos[0] < 3) {
          xpos[0]++;
          break;
        }
        xpos[0]--; 
        break;
        case 2:
        if (ypos[0] > 0) {
          ypos[0]--;
          break;
        }
        case 3:
        if (ypos[0] < 3) {
          ypos[0]++;
          break;
        }
        ypos[0]--; break;
        case 4:
        if (zpos[0] > 0) {
          zpos[0]--;
          break;
        }
        case 5:
        if (zpos[0] < 3) {
          zpos[0]++;
          break;
        }
        zpos[0]--; 
        break;
      }
      flushBuffer();
    }
    clearBuffer();
    delay(animationSpeed);
    color=nextColor(color);
  }
}
