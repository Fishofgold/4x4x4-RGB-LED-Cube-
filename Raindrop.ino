#include "cubeplex.h"

int color = red;

void setup() {
  initCube();
  animationMax = 600;
}
void loop() {
  Raindrop();
}

/****************************** #5 Raindrop ***********************************\
| random raindrops                                                             |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void Raindrop() {
  
  continuePattern = true;
  int animationSpeed =150;
  int x=0;
  int y=0;
  int z=3;
  int a=1;
  while (continuePattern) {
    for (int t = 10; t > 0; t--) {
    
      if (a == 1) {
         switch (random(0,17)) {
           case 0:
             x = 0;
             y = 0;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer(); 
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 1:
             x = 0;
             y = 1;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 2:
             x = 0;
             y = 2;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 3:
             x = 0;
             y = 3;
             z = 4;
             if (z = 4) { 
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 4:
             x = 1;
             y = 0;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 5:
             x = 1;
             y = 1;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 6:
             x = 1;
             y = 2;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 7:
             x = 1;
             y = 3;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 8:
             x = 2;
             y = 0;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 9:
             x = 2;
             y = 1;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 10:
             x = 2;
             y = 2;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 11:
             x = 2;
             y = 3;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 12:
             x = 3;
             y = 0;
             z = 4;
             if (z = 4) { 
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 13:
             x = 3;
             y = 1;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 14:
             x = 3;
             y = 2;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
           case 15:
             x = 3;
             y = 3;
             z = 4;
             if (z = 4) {
               delay(300);
             }
             for (int i = 4; i > 0; i--) {
               z = z - 1;
               drawLed(color,10,x,y,z);
               flushBuffer();
               clearBuffer();
               delay(animationSpeed);
             }
           break;
         } 
       }
     }
     color = nextColor(color);
   }
}
