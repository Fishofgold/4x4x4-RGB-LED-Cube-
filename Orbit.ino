#include "cubeplex.h"

int color = color;
void setup() {
  initCube();
  animationMax = 1000;
}
void loop() {
  Orbit();
}

/****************************** #2 orbit **************************************\
| A simple 4x4 block that orbits around the cube                               |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void Orbit() {
  continuePattern = true;
  int animationSpeed = 125;
  int a = 0;
  int b = 0;
    
      while (continuePattern) {
       for ( a = 0; a < 13; a++); {
        if (a = 1) {
          drawBoxWalls(color,8,1,0,0,1,0,3);
          drawBoxWalls(color-1,8,0,0,0,0,2,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }
        if (a = 2) {
          drawBoxWalls(color,8,1,0,0,2,0,3);
          drawBoxWalls(color-1,8,0,0,0,0,1,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }
        if (a = 3) {
          drawBoxWalls(color-1,8,0,0,0,0,0,3);
          drawBoxWalls(color,8,1,0,0,3,0,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }
        if (a = 4) {
          drawBoxWalls(color,8,3,1,0,3,1,3);
          drawBoxWalls(color,8,1,0,0,3,0,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
        if (a = 5) {
          drawBoxWalls(color,8,3,1,0,3,2,3);
          drawBoxWalls(color,8,2,0,0,3,0,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
        if (a = 6) {
          drawBoxWalls(color,8,3,0,0,3,3,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
        if (a = 7) {
          drawBoxWalls(color,8,2,3,0,2,3,3);
          drawBoxWalls(color,8,3,1,0,3,3,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
        if (a = 8) {
          drawBoxWalls(color,8,2,3,0,1,3,3);
          drawBoxWalls(color,8,3,2,0,3,3,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
        if (a = 9) {
          drawBoxWalls(color,8,3,3,0,0,3,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
        if (a = 10) {
          drawBoxWalls(color,8,0,2,0,0,2,3);
          drawBoxWalls(color,8,2,3,0,0,3,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
        if (a = 11) {
          drawBoxWalls(color,8,0,1,0,0,2,3);
          drawBoxWalls(color,8,1,3,0,1,3,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }
        if (a = 12) {
          drawBoxWalls(color,8,0,0,0,0,3,3);
          flushBuffer();
          clearBuffer();
          delay(animationSpeed);
        }  
      }
   color = nextColor(color);
  }
}
