#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set color and style for drawing
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 3);

    // Draw the top part of the Taj Mahal
    line(100, 300, 500, 300);
    line(100, 300, 300, 100);
    line(300, 100, 500, 300);

    // Draw the middle part of the Taj Mahal
    rectangle(200, 300, 400, 550);
    line(200, 425, 400, 425);
    line(300, 300, 300, 550);

    // Draw the base of the Taj Mahal
    rectangle(50, 550, 550, 600);

    getch();
    closegraph();
    return 0;
}
