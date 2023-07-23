/*
                    Program: 21

    Write a C program for bouncing ball graphics animation.
*/
#include <graphics.h>

void ball(int x, int y)
{
    int i;
    setcolor(YELLOW);
    for (i = 0; i < 50; i++)
        circle(x, y, 50 - i);
    setcolor(WHITE);
}

int main()
{
    int i, x, y;
    initwindow(1200, 800, "Rajkishor");
    x = 50;
    y = 150;
    while (!kbhit())
    {
        cleardevice();
        ball(x, y);
        for (i = 0; i < 5; i++)
        {
            line(20, 200 + i, 300, 200 + i);
            line(0, 700 + i, 1200, 700 + i);
        }
        if (x <= 320)
        {
            ball(x, y);
            x += 2;
        }
        else if (x <= 355)
        {
            x += 2;
            y += 2;
        }
        else if (x < 472 && y <= 650)
        {
            x++;
            y += 4;
        }
        else if (x <= 575 && y >= 350)
        {
            x++;
            y -= 3;
        }
        else if (x <= 650 && y <= 650)
        {
            x++;
            y += 4;
        }
        else if (x <= 700 && y >= 500)
        {
            x++;
            y -= 3;
        }
        else if (x <= 750 && y <= 650)
        {
            x++;
            y += 3;
        }
        else if (x <= 780 && y >= 530)
        {
            x++;
            y -= 3;
        }
        else if (x <= 810 && y <= 650)
        {
            x++;
            y += 3;
        }
        else if (x <= 830 && y >= 590)
        {
            x++;
            y -= 3;
        }
        else if (x <= 920 && y <= 650)
        {
            x++;
            y += 3;
        }
        else if (x <= 920 && y >= 630)
        {
            x++;
            y -= 5;
        }
        else if (x < 1000)
        {
            x++;
        }
        delay(10);
    }

    getch();
    closegraph();
}
