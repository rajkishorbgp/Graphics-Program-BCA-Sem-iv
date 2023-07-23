/*
                    Program: 21
    Write a C graphics program to create a text animation.
*/

#include <graphics.h>
int max_x, max_y, left = 0, right = 0, top = 0, bottom = 0;
void check(int x, int y)
{
    if (x >= max_x)
    {
        left = 0;
        right = 1;
        top = 0;
        bottom = 0;
    }
    else if (y >= max_y)
    {
        left = 0;
        right = 0;
        top = 0;
        bottom = 1;
    }
    else if (x <= 10)
    {
        left = 1;
        right = 0;
        top = 0;
        bottom = 0;
    }
    else if (y <= 10)
    {
        left = 0;
        right = 0;
        top = 1;
        bottom = 0;
    }
}
int main()
{
    int x = 10, y = 10;
    initwindow(1200, 800, "RajKishor");
    max_x = getmaxx() - 250;
    max_y = getmaxy() - 30;
    while (!kbhit())
    {
        cleardevice();
        settextstyle(10, 0, 5);
        outtextxy(x, y, "RAJ KISHOR");

        if (!left && !right && !top && !bottom)
        {
            x++;
            y++;
            check(x, y);
        }
        else if (right)
        {
            x--;
            y -= 2;
            check(x, y);
        }
        else if (bottom)
        {
            if (x > max_x / 2)
            {
                x += 2;
                y--;
            }
            else
            {
                x--;
                y--;
            }

            check(x, y);
        }
        else if (top)
        {
            if (top > max_x)
            {
                x += 2;
                y += 2;
            }
            else
            {
                x--;
                y++;
            }
            check(x, y);
        }
        else
        {
            if (y > max_y)
            {
                y--;
                x++;
            }
            else
            {
                x += 2;
                y++;
            }

            check(x, y);
        }
        delay(10);
    }
    getch();
    closegraph();
    return 0;
}
