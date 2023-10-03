#include <graphics.h>
int main()
{
    initwindow(600, 700, "COVID-19", 150);

    // EARTH
    circle(300, 350, 200);
    circle(300, 350, 199);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(300, 200, WHITE);

    // MASK
    int mask[14] = {150, 380, 300, 310, 450, 380, 450, 430, 300, 500, 150, 430, 150, 380};
    drawpoly(7, mask);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 400, WHITE);

    // Mask ribbon

    line(150, 380, 150 - 50, 380 - 10);
    line(150 + 1, 380 + 1, 100 + 1, 370 + 1);

    line(450, 380, 450 + 50, 380 - 10);
    line(450 + 1, 380 + 1, 450 + 50 + 1, 380 - 10 + 1);

    line(150, 430, 150 - 20, 430 + 15);
    line(150 + 1, 430 + 1, 150 - 20 + 1, 430 + 15 + 1);

    line(450, 430, 450 + 20, 430 + 15);
    line(450 + 1, 430 + 1, 450 + 20 + 1, 430 + 15 + 1);

    // mask details

    line(150, 380 + 15, 300, 380 - 25);
    line(300, 380 - 25, 450, 380 + 15);
    line(150 + 1, 380 + 15 + 1, 300 + 1, 380 - 25 + 1);
    line(300 + 1, 380 - 25 + 1, 450 + 1, 380 + 15 + 1);

    line(150, 430 - 15, 300, 500 - 25);
    line(300, 500 - 25, 450, 430 - 15);
    line(150 + 1, 430 - 15 + 1, 300 + 1, 500 - 25 + 1);
    line(300 + 1, 500 - 25 + 1, 450 + 1, 430 - 15 + 1);

    // EYES

    circle(200, 300, 30);
    circle(400, 300, 30);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(200, 300, WHITE);
    floodfill(400, 300, WHITE);

    // ARCS

    arc(400, 570, 63, 165, 90);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(330, 520, WHITE);

    arc(400, 100, 180 + 20, 360 - 63, 150);
    arc(400, 100, 180 + 22, 360 - 65, 151);
    floodfill(300, 155, WHITE);

    arc(50, 360, 270 + 40, 270 + 57, 150 + 1);
    floodfill(150, 440, WHITE);
    arc(50, 360, 270 + 122, 450 - 35, 150 + 1);
    arc(50, 360, 360, 360 + 12, 150 + 1);
    floodfill(110, 350, WHITE);
    setcolor(RED);
    settextstyle(1, HORIZ_DIR, 5);
    outtextxy(140, 600, "COVID-19");
    getch();
    closegraph();
}
