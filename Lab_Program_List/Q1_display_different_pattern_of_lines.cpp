/*
                 Program: 1
    Write a program to display different pattern of lines.
*/

#include <graphics.h>
int main()
{
    int gd = DETECT, gm, i, y = 100;
    initgraph(&gd, &gm, "");

    for (i = 0; i < 4; i++)
    {
        setlinestyle(i, 0, 3);
        line(50, y, 500, y);
        y = y + 50;
    }
    setlinestyle(4, 1, 3);
    line(50, y, 500, y);

    getch();
    closegraph();
    return 0;
}
