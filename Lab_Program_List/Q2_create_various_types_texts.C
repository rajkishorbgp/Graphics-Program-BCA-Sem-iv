/*
                          @program: 2
     Write a program to create various types of texts and fonts.
*/

#include <stdio.h>
#include <graphics.h>
void main()
{
  int gd = DETECT, gm, i, y = 20;
  initgraph(&gd, &gm, "");

  for (i = 0; i < 8; i++)
  {
    settextstyle(i, HORIZ_DIR, 5);
    outtextxy(10, y, "Raj Kishor");
    y = y + 50;
  }
  y = 100;

  for (i = 8; i < 11; i++)
  {
    settextstyle(i, HORIZ_DIR, 5);
    outtextxy(300, y, "Raj Kishor");
    y = y + 60;
  }
  getch();
  closegraph();
}