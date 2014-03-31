#include "cubeplex.h"

int color = red;
void setup() {
  initCube();
  animationMax = 1000;
}
void loop() {
  Atom();
}

/********************************* #11 Atom ***********************************\
| electrons orbit a neutron                                                    |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void Atom() {
  continuePattern = true;
  int animationSpeed = 50;
  int nxs=1; int nys=1; int nzs=2;
  int nxf=2; int nyf=2; int nzf=1;
  int b=0;
  int s=0;
  while (continuePattern) {
    for (int n = 0; n < 12; n++) {
      if (s==0 && b < 8) {
        b=b+1;
        drawBox(color,b,nxs,nys,nzs,nxf,nyf,nzf);
        flushBuffer();
        delay(animationSpeed);
        if (b==8) {
          s=1;
        }
      } 
      if (s==1 && b > 0) {
        b=b-1;
        drawBox(color,b,nxs,nys,nzs,nxf,nyf,nzf);
        flushBuffer();
        delay(animationSpeed);
        if (b==1) {
          s=0;
        }
      }
      clearBuffer();
      if (n==0) {
        drawLed(blue,1,0,0,1);
        drawLed(blue,8,0,1,1);
        drawLed(green,1,3,3,1);
        drawLed(green,8,3,2,1);
        flushBuffer();
      }
      if (n==1) {
        drawLed(blue,1,0,1,1);
        drawLed(blue,8,0,2,2);
        drawLed(green,1,3,2,1);
        drawLed(green,8,3,1,2);
        flushBuffer();
      }
      if (n==2) {
        drawLed(blue,1,0,2,2);
        drawLed(blue,8,0,3,2);
        drawLed(green,1,3,1,2);
        drawLed(green,8,3,0,2);
        flushBuffer();
      }
      if (n==3) {
        drawLed(blue,1,0,3,2);
        drawLed(blue,8,1,3,3);
        drawLed(green,1,3,0,2);
        drawLed(green,8,2,0,3);
        flushBuffer();
      }
      if (n==4) {
        drawLed(blue,1,1,3,3);
        drawLed(blue,8,2,3,3);
        drawLed(green,1,2,0,3);
        drawLed(green,8,1,0,3);
        flushBuffer();
      }
      if (n==5) {
        drawLed(blue,1,2,3,3);
        drawLed(blue,8,3,3,2);
        drawLed(green,1,1,0,3);
        drawLed(green,8,0,0,2);
        flushBuffer();
      }
      if (n==6) {
        drawLed(blue,1,3,3,2);
        drawLed(blue,8,3,2,2);
        drawLed(green,1,0,0,2);
        drawLed(green,8,0,1,2);
        flushBuffer();
      }
      if (n==7) {
        drawLed(blue,1,3,2,2);
        drawLed(blue,8,3,1,1);
        drawLed(green,1,0,1,2);
        drawLed(green,8,0,2,1);
        flushBuffer();
      }
      if (n==8) {
        drawLed(blue,1,3,1,1);
        drawLed(blue,8,3,0,1);
        drawLed(green,1,0,2,1);
        drawLed(green,8,0,3,1);
        flushBuffer();
      }
      if (n==9) {
        drawLed(blue,1,3,0,1);
        drawLed(blue,8,2,0,0);
        drawLed(green,1,0,3,1);
        drawLed(green,8,1,3,0);
        flushBuffer();
      }
      if (n==10) {
        drawLed(blue,1,2,0,0);
        drawLed(blue,8,1,0,0);
        drawLed(green,1,1,3,0);
        drawLed(green,8,2,3,0);
        flushBuffer();
      }
      if (n==11) {
        drawLed(blue,1,1,0,0);
        drawLed(blue,8,0,0,1);
        drawLed(green,1,2,3,0);
        drawLed(green,8,3,3,1);
        flushBuffer();
      }
      if (n==12) {
        drawLed(blue,1,0,0,1);
        drawLed(blue,8,0,1,1);
        drawLed(green,1,3,3,1);
        drawLed(green,8,2,3,1);
        flushBuffer();
      }
    }   
  }
}
