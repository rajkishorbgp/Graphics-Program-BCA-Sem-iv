/*
					Program: 5
	 Write a program to implement Bresenham`s circle algorithm for
	drawing a circle of given center(x,y) and radius r.

*/

#include <stdio.h>
#include <graphics.h>
void main()
{
	int gd = DETECT, gm;
	int xc, yc, x, y, r, p;
	initgraph(&gd, &gm, "");

	printf("Enter the center point xc and yc: ");
	scanf("%d%d", &xc, &yc);
	printf("Enter the radius r: ");
	scanf("%d", &r);

	p = 1 - r;
	x = 0;
	y = r;

	do
	{
		putpixel(x + xc, y + yc, GREEN);
		putpixel(x + xc, -y + yc, GREEN);
		putpixel(-x + xc, -y + yc, GREEN);
		putpixel(-x + xc, y + yc, GREEN);
		putpixel(y + xc, x + yc, GREEN);
		putpixel(y + xc, -x + yc, GREEN);
		putpixel(-y + xc, -x + yc, GREEN);
		putpixel(-y + xc, x + yc, GREEN);

		if (p < 0)
		{
			x = x + 1;
			p = p + 2 * x + 3;
		}
		else
		{
			x = x + 1;
			y = y - 1;
			p = p + 2 * (x - y) + 5;
		}

		delay(50);

	} while (x <= y);

	getch();
	closegraph();
}