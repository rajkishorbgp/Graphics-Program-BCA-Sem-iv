/*
                     Program: 6
      Write a program to implement midpoint algorithm to generate ellipse.
*/

#include <stdio.h>
#include <graphics.h>
void main()
{
   int gd = DETECT, gm;
   float cx, cy, x, y, p1, p2, dx, dy, ry, rx;
   initgraph(&gd, &gm, "");

   ry = 80;
   rx = 50;

   cx = 200;
   cy = 200;

   x = 0;
   y = ry;

   p1 = ry * ry + (1 / 4 * (rx * rx)) - rx * rx * ry;
   dx = 2 * ry * ry * x;
   dy = 2 * rx * rx * y;

   do
   {
      putpixel(cx + x, cy + y, GREEN);
      putpixel(cx - x, cy + y, GREEN);
      putpixel(cx + x, cy - y, GREEN);
      putpixel(cx - x, cy - y, GREEN);

      if (p1 < 0)
      {
         x++;
         dx = dx + 2 * ry * ry;
         p1 = p1 + dx + ry * ry;
      }
      else
      {
         x++;
         y--;
         dx = dx + 2 * ry * ry;
         dy = dy - 2 * rx * rx;
         p1 = p1 + dx - dy + ry * ry;
      }
      delay(100);
   } while (dx < dy);

   p2 = ry * ry * (x + 1 / 2) * (x + 1 / 2) + rx * rx * (y - 1) * (y - 1) - rx * rx * ry * ry;

   do
   {

      putpixel(cx + x, cy + y, GREEN);
      putpixel(cx - x, cy + y, GREEN);
      putpixel(cx + x, cy - y, GREEN);
      putpixel(cx - x, cy - y, GREEN);

      if (p2 > 0)
      {
         y--;
         dy = dy - 2 * rx * rx;
         p2 = p2 - dy + rx * rx;
      }
      else
      {
         x++;
         y--;
         dx = dx + 2 * ry * ry;
         dy = dy - 2 * rx * rx;
         p2 = p2 + dx - dy + rx * rx;
         delay(100);
      }
   } while (y >= 0);

   getch();
   closegraph();
}