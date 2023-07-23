/*
                Program: 20

    Write a C Program to create traffic simulation.
*/
#include <graphics.h>
int main()
{
    int i;
    initwindow(800, 800, "Rajkishor");
    setcolor(3);
    setfillstyle(1, 3);
    rectangle(300, 200, 400, 500);
    floodfill(310, 210, 3);
    setcolor(RED);
    circle(350, 250, 30);
    setfillstyle(1, RED);
    floodfill(350, 250, RED);
    setcolor(YELLOW);
    circle(350, 350, 30);
    setfillstyle(1, YELLOW);
    floodfill(350, 350, YELLOW);
    setcolor(GREEN);
    circle(350, 450, 30);
    setfillstyle(1, GREEN);
    floodfill(350, 450, GREEN);
    setcolor(9);
    rectangle(350, 500, 360, 700);
    setfillstyle(1, 9);
    floodfill(355, 600, 9);
    // base
    setcolor(12);
    rectangle(320, 700, 390, 710);
    setfillstyle(1, 12);
    floodfill(325, 704, 12);
    setcolor(WHITE);
    rectangle(310, 710, 400, 720);
    setfillstyle(1, WHITE);
    floodfill(315, 712, WHITE);
    setcolor(GREEN);
    rectangle(300, 720, 410, 730);
    setfillstyle(1, GREEN);
    floodfill(305, 722, GREEN);
    setcolor(BLUE);
    for (i = 0; i < 40; i++)
    {
        arc(401, 220, 270, 360, 40 - i);
        line(400, 220, 440, 220);
        arc(301, 220, 180, 270, 40 - i);
        line(260, 220, 300, 220);

        arc(401, 320, 270, 360, 40 - i);
        line(400, 320, 440, 320);

        arc(301, 320, 180, 270, 40 - i);
        line(260, 320, 300, 320);

        arc(401, 420, 270, 360, 40 - i);
        line(400, 420, 440, 420);

        arc(301, 420, 180, 270, 40 - i);
        line(260, 420, 300, 420);

        arc(350, 200, 0, 180, 50 - i);
    }

    getch();
    closegraph();
}
