#include "cubeplex.h"

int color = red;

void setup() {
  initCube();
  animationMax = 600;
}
void loop() {
  RandomPlanarFlop();
}

/*************************** #3 RandomPlanarFlop ******************************\
| As Asher Glicks "Planar Flop 3D" but instead of following a set animated     |
| sequence this version is totally random.                                     |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void RandomPlanarFlop() {
  int side = 1;
  continuePattern = true;
  int animationSpeed = 50;
  while (continuePattern) {
    if (side == 1) {
      switch(random(0,5)) {
        case 0:
          for (int y = 3; y > -1; y--){
            for (int z = 0; z < 4; z++) drawLine(color,0,3,z,3,y,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 3; x > -1; x--) {
            for (int z = 0; z < 4; z++) drawLine(color,0,3,z,x,0,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 2;break;
        case 1:
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,3,3,z,0,y,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 0; x < 4; x++) {
            for (int z = 0; z < 4; z++) drawLine(color,3,3,z,x,0,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 4;break;
        case 2:
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,z,3,0,z,y,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 3; y > -1; y--) {
            for (int x = 0; x < 4; x++) drawLine(color,x,3,0,x,0,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 6;break;
        case 3:
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,z,3,3,z,y,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 0; y < 4; y++) {
            for (int x = 0; x < 4; x++) drawLine(color,x,3,3,x,0,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 5;break;
        }
      }
    if (side == 2) {
      switch(random(5,10)) {
        case 5:
          for (int y = 0; y < 4; y++){
            for (int z = 3; z > -1; z--) drawLine(color,0,0,z,y,3,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 3; x > -1; x--) {
            for (int z = 3; z > -1; z--) drawLine(color,0,0,z,3,x,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 3;break;
        case 6:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,0,3,z,y,0,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 0; x < 4; x++) {
            for (int z = 0; z < 4; z++) drawLine(color,0,3,z,3,x,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 1; break;
        case 7:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,0,z,0,y,z,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 3; y > -1; y--) {
            for (int x = 0; x < 4; x++) drawLine(color,0,x,0,3,x,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 6; break;
        case 8:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,0,z,3,y,z,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 0; y < 4; y++) {
            for (int x = 0; x < 4; x++) drawLine(color,0,x,3,3,x,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 5; break;
        }
      }
    if (side == 3) {
      switch(random(10,15)) {
        case 10:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,0,0,z,3,y,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 3; x > -1; x--) {
            for (int z = 0; z < 4; z++) drawLine(color,0,0,z,x,3,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 2; break;
        case 11:
          for (int y = 0; y < 4; y++) {
            for (int z = 3; z > -1; z--) drawLine(color,3,0,z,0,y,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 0; x < 4; x++) {
            for (int z = 0; z < 4; z++) drawLine(color,3,0,z,x,3,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 4; break;
        case 12:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,z,0,3,z,y,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 0; y < 4; y++) {
            for (int x = 0; x < 4; x++) drawLine(color,x,0,3,x,3,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 5; break;
        case 13:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,z,0,0,z,y,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 3; y >0 -1; y--) {
            for (int x = 0; x < 4; x++) drawLine(color,x,0,0,x,3,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 6; break;
        }
      }
    if (side == 4) {
      switch(random(15,20)) {
        case 15:
          for (int y = 3; y > -1; y--){
            for (int z = 0; z < 4; z++) drawLine(color,3,3,z,y,0,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 0; x < 4; x++) {
            for (int z = 0; z < 4; z++) drawLine(color,3,3,z,0,x,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 1; break;
        case 16:
          for (int y = 3; y > -1; y--) {
            for (int z = 3; z > -1; z--) drawLine(color,3,0,z,y,3,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,3,0,z,0,y,z);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 3; break;
        case 17:
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,3,z,3,y,z,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 0; y < 4; y++) {
            for (int x = 0; x < 4; x++) drawLine(color,3,x,3,0,x,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 5; break;
        case 18:
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,3,z,0,y,z,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 3; y > -1; y--) {
            for (int x = 0; x < 4; x++) drawLine(color,3,x,0,0,x,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 6; break;
        }
      }
    if (side == 5) {
      switch(random(20,25)) {
        case 20:
          for (int y = 3; y > -1; y--){
            for (int z = 0; z < 4; z++) drawLine(color,z,3,3,z,0,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 0; x < 4; x++) {
            for (int z = 0; z < 4; z++) drawLine(color,z,3,3,z,x,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 1; break;
        case 21:
          for (int y = 3; y > -1; y--) {
            for (int z = 3; z > -1; z--) drawLine(color,0,z,3,3,z,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,0,z,3,y,z,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 2; break;
        case 22:
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,z,0,3,z,3,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 3; y > -1; y--) {
            for (int x = 0; x < 4; x++) drawLine(color,x,0,3,x,y,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 3; break;
        case 23:
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,3,z,3,0,z,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 0; y < 4; y++) {
            for (int x = 0; x < 4; x++) drawLine(color,3,x,3,y,x,0);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 4; break;
        }
      }
      if (side == 6) {
      switch(random(25,30)) {
        case 25:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,z,3,0,z,0,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int x = 0; x < 4; x++) {
            for (int z = 0; z < 4; z++) drawLine(color,z,3,0,z,x,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 1; break;
        case 26:
          for (int y = 0; y < 4; y++) {
            for (int z = 3; z > -1; z--) drawLine(color,0,z,0,3,z,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          for (int y = 3; y > -1; y--) {
            for (int z = 0; z < 4; z++) drawLine(color,0,z,0,y,z,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 2; break;
        case 27:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,z,0,0,z,3,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 3; y > -1; y--) {
            for (int x = 0; x < 4; x++) drawLine(color,x,0,0,x,y,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 3; break;
        case 28:
          for (int y = 0; y < 4; y++) {
            for (int z = 0; z < 4; z++) drawLine(color,3,z,0,0,z,y);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }  
          for (int y = 0; y < 4; y++) {
            for (int x = 0; x < 4; x++) drawLine(color,3,x,0,y,x,3);
            flushBuffer();
            clearBuffer();
            delay(animationSpeed);
          }
          side = 4; break;
        }
      }
    color = nextColor(color);
  }
}
