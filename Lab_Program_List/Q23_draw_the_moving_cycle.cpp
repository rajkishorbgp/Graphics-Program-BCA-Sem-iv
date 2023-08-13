/*
                        Program: 23

    Write a Program to draw the moving cycle using computer graphics.

*/

#include <graphics.h>
int main()
{
    int speed = 0, f = 1;
    initwindow(1200, 800, "Rajkishor");
    while (!kbhit())
    {
        cleardevice();

        // root
        for (int i = 0; i < 4; i++)
            line(0, 500 + i, 1500, 500 + i);

        // cycle
        for (int k = 0; k < 3; k++)
        {
            // cycle polygon
            line(100 + speed, 450 - k, 100 + 75 + speed, 450 - k); // lower line of cycle
            line(100 + k + speed, 450, 100 + 50 + k + speed, 390); // left line of cycle
            line(150 + speed, 390 + k, 150 + 75 + speed, 390 + k); // upper line of cycle
            line(225 - k + speed, 390, 225 - 50 - k + speed, 450); // right line of cycle

            // cycle handle
            line(250 - k + speed, 450, 250 - 25 - k + speed, 390);
            line(225 - k + speed, 390, 225 - 25 - k + speed, 340);
            line(200 + speed, 340 + k, 200 - 20 + speed, 340 + k);

            // cycle sheet
            line(149 + k + speed, 390, 149 + k + speed, 380);
            line(145 + speed, 379 + k, 145 + 10 + speed, 379 + k);

            // cycle tires
            circle(100 + speed, 450, 50 - k); // first circle left side
            circle(250 + speed, 450, 50 - k); // second circle risht side
            getch();
        }
        speed+=3;
        delay(20);
    }

    closegraph();
    return 0;
}
