#include "cubeplex.h"

int color = red;

void setup() {
  initCube();
  animationMax = 600;
}
void loop() {
  planarSpin1();
}

/****************************** #4 PlanarSpin1 ********************************\
| A simple variation on Asher Glicks's PlanarSpin                              |
|                                                                              |
| Written By: Jules Meredith                                                   |
| (using Asher Glick's cubeplex.h/mappings.h/niceTimer.h)                      |
\******************************************************************************/
void planarSpin1() {
  
  continuePattern = true;
  int animationSpeed =150;
  while (continuePattern) {
    int a = 1;
    int b = 0;
    int c = 3;
    int d = 2;
    int e = 3;
    int f = 3;
    int u = 3;
    int v = 1;
    int w = 0;
    int x = 0;
    int y = 2;
    int z = 0;
    for (int one = 1; one < 4; one ++){
      drawLine(color,a,b,c,d,e,f);
      drawLine(color,u,v,w,x,y,z);
      drawLine(color,a,b,c,u,v,w);
      drawLine(color,d,e,f,x,y,z);
      a=a+1;
      d=d-1;
      v=v+1;
      y=y-1;
      flushBuffer();
      clearBuffer();
      delay(animationSpeed);
    }
    a = 3;
    b = 1;
    c = 3;
    d = 0;
    e = 2;
    f = 3;
    u = 2;
    v = 3;
    w = 0;
    x = 1;
    y = 0;
    z = 0;
    for (int two = 1; two < 4; two ++){
      drawLine(color,a,b,c,d,e,f);
      drawLine(color,u,v,w,x,y,z);
      drawLine(color,a,b,c,u,v,w);
      drawLine(color,d,e,f,x,y,z);
        b=b+1;
        e=e-1;
        u=u-1;
        x=x+1;
      flushBuffer();
      clearBuffer();
      delay(animationSpeed);
    }
  color = nextColor(color);  
  }
}
