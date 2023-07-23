/*
                        Program: 17
    Write a Program that illustrating the use of Floodfill function.
*/

#include <graphics.h>
int main()
{
    int p, point[] = {400, 200, 350, 250, 370, 250, 300, 350, 360, 350,
                      360, 350, 250, 450, 380, 450, 380, 500, 420, 500,
                      420, 450, 550, 450, 440, 350, 500, 350, 430, 250,
                      450, 250, 400, 200};
    initwindow(900, 800, "Rajkishor");

    p = (sizeof(point) / sizeof(int)) / 2;
    setcolor(GREEN);
    drawpoly(p, point);
    setfillstyle(1, GREEN);
    floodfill(400, 250, GREEN);
    getch();
    closegraph();
    return 0;
}
