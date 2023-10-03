#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = getmaxx();
    int y = getmaxy();

    for (int i = 0; i < 100; i++)
        outtextxy(rand() % 500, random(100), ":");

    getch();
    closegraph();
    return 0;
}
