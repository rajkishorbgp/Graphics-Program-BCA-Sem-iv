/*
                     Program: 19

    Write a Smiling face animation program in C .
 */

#include <graphics.h>
void eye(int y)
{
    // left eye
    int i, j;
    setcolor(BLACK);
    for (i = 0; i < 5; i++)
    {
        circle(210 + y, 250, 30 + i);
        setfillstyle(1, BLACK);
        floodfill(210 + y, 250, BLACK);
        setcolor(WHITE);
        for (j = 0; j < 8; j++)
        {
            circle(210 + y, 250, 8 - j);
        }
    }
}
void smil_1()
{
    int i, j;
    setcolor(YELLOW);
    for (i = 0; i < 3; i++)
        circle(300, 300, 200 - i);
    setfillstyle(1, YELLOW);
    floodfill(300, 300, YELLOW);
    setcolor(BLACK);
    for (i = 0; i < 5; i++)
        arc(300, 300, 200, 340, 150 + i);
    eye(0);
    eye(180);
}
int main()
{
    int i, time = 1;
    initwindow(600, 600, "RajKishor");

    while (!kbhit())
    {
        cleardevice();
        if (time % 2 == 0)
        {
            smil_1();
        }
        else
        {
            smil_1();
            for (i = 0; i < 5; i++)
            {
                setcolor(BLACK);
                arc(300, 280, 200, 340, 160 + i);
                setcolor(WHITE);
                arc(300, 285, 220, 320, 160 + i);
            }
        }
        time++;
        delay(900);
    }
    getch();
    closegraph();
}
