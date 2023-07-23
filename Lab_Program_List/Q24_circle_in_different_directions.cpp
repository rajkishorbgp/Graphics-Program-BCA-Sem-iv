/*
                     Program: 24

 Write a Program for moving circle in different directions.
*/

#include <graphics.h>
int main()
{
    int x, y, i, f;
    initwindow(1000, 800, "Rajkishor");
    x = 400;
    y = 400;
    for (i = 0; i < 5; i++)

        while (f)
        {
            cleardevice();
            for (i = 0; i < 4; i++)
                circle(x, y, 100 - i);

            if (GetAsyncKeyState(VK_LEFT))
            {
                x -= 5;
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                x += 5;
            }
            if (GetAsyncKeyState(VK_UP))
            {
                y -= 5;
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                y += 5;
            }
            if (GetAsyncKeyState(VK_BACK))
            {
                f = 0;
            }
            delay(20);
        }

    getch();
    closegraph();
    return 0;
}
