#include <MeggyJrSimple.h>

void setup()
{
  MeggyJrSimpleSetup(); 
}

int xCursor=3;
int yCursor=3;
int targetX=0;
int targetY=0;
int timerMarker=0;
int rktsDraw[8]={0,1,2,3,4,5,6,7};
int rktsSpent[8]={1,1,1,1,1,1,1,1};
/*int rkt1=1;
int rkt2=1;
int rkt3=1;
int rkt4=1;
int rkt5=1;
int rkt6=1;
int rkt7=1;
int rkt8=1;
int rkt1y=0;
int rkt2y=0;
int rkt3y=0;
int rkt4y=0;
int rkt5y=0;
int rkt6y=0;
int rkt7y=0;
int rkt8y=0;*/

void drawCursor()
{
  DrawPx(xCursor,yCursor,Violet);
}
void drawRockets()
{
  for(int rkt=0; rkt<8; rkt++)
  {
    if(rktsSpent[rkt]=1)
    {
      DrawPx(rktsDraw[rkt],0,Blue);
    } 
  }
}
void pickRocket()
{
  //ReadPx(
}
/*void drawRockets()
{
  if(rkt1=1)
  {
    DrawPx(0,0,Blue);
  }
  if(rkt2=1)
  {
    DrawPx(1,0,Blue);
  }
  if(rkt3=1)
  {
    DrawPx(2,0,Blue);
  }
  if(rkt4=1)
  {
    DrawPx(3,0,Blue);
  }
  if(rkt5=1)
  {
    DrawPx(4,0,Blue);
  }
  if(rkt6=1)
  {
    DrawPx(0,0,Blue);
  }
}*/

void loop()
{  
  CheckButtonsPress();
  if(Button_Right)
  {
    xCursor=xCursor+1;
    if(xCursor>7)
    {
      xCursor=7;
    }
  }
  if(Button_Left)
  {
    xCursor=xCursor-1;
    if(xCursor<0)
    {
      xCursor=0;
    }
  }
  if(Button_Down)
  {
    yCursor=yCursor-1;
    if(yCursor<0)
    {
      yCursor=0;
    }
  }
  if(Button_Up)
  {
    yCursor=yCursor+1;
    if(yCursor>7)
    {
      yCursor=7;
    }
  }
  if(Button_A)
  {
    targetX=xCursor;
    targetY=yCursor;
    timerMarker=millis();
  }
  drawCursor();
  drawRockets();
  DisplaySlate();
  ClearSlate();
}

