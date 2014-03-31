#include "cubeplex.h"

int color = red;
void setup() {
  initCube();
  animationMax = 1000;
}
void loop() {
  OrbitV2();
}

/****************************** #12 orbitV2 ***********************************\
| A simple 4x4 side orbits around the cube                                     |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void OrbitV2() {
  continuePattern = true;
  int animationSpeed = 100;
  int a = 0;
  int b = 0;
  while (continuePattern) {
    for ( a = 0; a < 12; a++); {
      clearBuffer();
      if (a = 0) {
        drawBoxWalls(red,5,0,0,0,0,3,3);
        drawBoxWalls(blue,5,3,0,0,0,3,0);
        drawBoxWalls(green,5,0,3,0,3,3,3);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }
      if (a = 1) {
        drawBoxWalls(red,5,1,0,0,1,0,3);
        drawBoxWalls(red,5,0,0,0,0,2,3);
        drawBoxWalls(blue,5,3,0,1,3,3,1);
        drawBoxWalls(blue,5,1,0,0,3,3,0);
        drawBoxWalls(green,5,0,2,0,3,2,0);
        drawBoxWalls(green,5,0,3,0,3,3,2);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }
      if (a = 2) {
        drawBoxWalls(red,5,1,0,0,2,0,3);
        drawBoxWalls(red,5,0,0,0,0,1,3);
        drawBoxWalls(blue,5,3,0,2,3,3,1);
        drawBoxWalls(blue,5,2,0,0,3,3,0);
        drawBoxWalls(green,5,0,1,0,3,2,0);
        drawBoxWalls(green,5,0,3,0,3,3,1);
        flushBuffer();
        clearBuffer();          
        delay(animationSpeed);
      }
      if (a = 3) {
        drawBoxWalls(red,5,0,0,0,3,0,3);
        drawBoxWalls(blue,5,3,0,3,3,3,0);
        drawBoxWalls(green,5,0,0,0,3,3,0);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }       
      if (a = 4) {
        drawBoxWalls(red,5,3,1,0,3,1,3);
        drawBoxWalls(red,5,1,0,0,3,0,3);
        drawBoxWalls(blue,5,2,0,3,2,3,3);
        drawBoxWalls(blue,5,3,0,3,3,3,1);
        drawBoxWalls(green,5,0,0,1,3,0,1);
        drawBoxWalls(green,5,0,0,0,3,2,0);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
      if (a = 5) {
        drawBoxWalls(red,5,3,1,0,3,2,3);
        drawBoxWalls(red,5,2,0,0,3,0,3);
        drawBoxWalls(blue,5,1,0,3,2,3,3);
        drawBoxWalls(blue,5,3,0,3,3,3,2);
        drawBoxWalls(green,5,0,0,2,3,0,1);
        drawBoxWalls(green,5,0,0,0,3,1,0);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
      if (a = 6) {
        drawBoxWalls(red,5,3,0,0,3,3,3);
        drawBoxWalls(blue,5,0,0,3,3,3,3);
        drawBoxWalls(green,5,0,0,3,3,0,0);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
      if (a = 7) {
        drawBoxWalls(red,5,2,3,0,2,3,3);
        drawBoxWalls(red,5,3,1,0,3,3,3);
        drawBoxWalls(blue,5,0,0,2,0,3,2);
        drawBoxWalls(blue,5,0,0,3,2,3,3);
        drawBoxWalls(green,5,0,1,3,3,1,3);
        drawBoxWalls(green,5,0,0,3,3,0,1);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
      if (a = 8) {
        drawBoxWalls(red,5,2,3,0,1,3,3);
        drawBoxWalls(red,5,3,2,0,3,3,3);
        drawBoxWalls(blue,5,0,0,1,0,3,2);
        drawBoxWalls(blue,5,0,0,3,1,3,3);
        drawBoxWalls(green,5,0,2,3,3,1,3);
        drawBoxWalls(green,5,0,0,3,3,0,2);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
      if (a = 9) {
        drawBoxWalls(red,5,3,3,0,0,3,3);
        drawBoxWalls(blue,5,0,0,0,0,3,3);
        drawBoxWalls(green,5,0,3,3,3,0,3);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
      if (a = 10) {
        drawBoxWalls(red,5,0,2,0,0,2,3);
        drawBoxWalls(red,5,2,3,0,0,3,3);
        drawBoxWalls(blue,5,1,0,0,1,3,0);
        drawBoxWalls(blue,5,0,0,2,0,3,0);
        drawBoxWalls(green,5,0,3,2,3,3,2);
        drawBoxWalls(green,5,0,3,3,3,1,3);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
      if (a = 11) {
        drawBoxWalls(red,5,0,1,0,0,2,3);
        drawBoxWalls(red,5,1,3,0,1,3,3);
        drawBoxWalls(blue,5,2,0,0,1,3,0);
        drawBoxWalls(blue,5,0,0,1,0,3,0);
        drawBoxWalls(green,5,0,3,1,3,3,2);
        drawBoxWalls(green,5,0,3,3,3,2,3);
        flushBuffer();
        clearBuffer();
        delay(animationSpeed);
      }  
    }
  }
}
