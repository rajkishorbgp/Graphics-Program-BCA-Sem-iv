/*
                     Program: 27
    Write a C program to draw sine wave using graphics.
*/
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, i;
    int angle = 0;
    float x, y;

    initwindow(800, 600, "RajKishor");
    line(0, 300, 800, 300);
    for (x = 0; x < 850; x += 3)
    {
        y = 50 * sin(angle * 3.141 / 180);
        y = 300 - y;

        for (i = 0; i < 4; i++)
        {
            putpixel(x, y + i, YELLOW);
            putpixel(x - 50, y + 10 + i, GREEN);
            putpixel(x - 20, y + 10 + i, WHITE);
        }
        delay(100);
        angle += 5;
    }

    getch();
    closegraph();

    return 0;
}
