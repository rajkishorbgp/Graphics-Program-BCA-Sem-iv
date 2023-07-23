/*
                  Program: 3
    Write a program to draw a Circle inside a Square.
*/

#include <graphics.h>
int main()
{
   int gd = DETECT, gm, xx, xy;
   initgraph(&gd, &gm, "");

   xx = getmaxx();
   xy = getmaxy();

   rectangle((xx / 2) - 200, (xy / 2) - 200, (xx / 2) + 200, (xy / 2) + 200);
   circle(xx / 2, xy / 2, 200);

   getch();
   closegraph();
   return 0;
}
