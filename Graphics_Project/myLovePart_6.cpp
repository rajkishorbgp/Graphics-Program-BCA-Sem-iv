#include <graphics.h>

void stickman_open(int speed, int color)
{
    int i, s, y = 350;
    s = speed;
    for (i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        line(50 + i + s, 350 + y, 50 + i + s, 400 + y);

        // legs
        line(50 + i + s, 400 + y, 30 + i + s, 450 + y);
        line(50 + i + s, 400 + y, 70 + i + s, 450 + y);

        // left hand
        line(50 + s + i, 360 + y, 35 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 360 + y, 65 + s + i, 400 + y);
    }
    setcolor(WHITE);
}

void stickman_mid(int speed, int color)
{

    int s, i, y = 350;
    s = speed;

    for (i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        line(50 + i + s, 350 + y, 50 + i + s, 400 + y);
        // legs
        line(52 - i + s, 400 + y, 40 - i + s, 450 + y);
        line(50 + i + s, 400 + y, 60 + i + s, 450 + y);
        // left hand
        line(50 + s + i, 360 + y, 20 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 360 + y, 80 + s + i, 400 + y);
    }
    setcolor(WHITE);
}

// stickman close legs with rose
void stickman_close(int speed, int color)
{
    int s, i, y = 350;
    s = speed;

    for (i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        line(50 + i + s, 350 + y, 50 + i + s, 400 + y);
        // legs
        line(52 - i + s, 400 + y, 50 - i + s, 450 + y);
        line(50 + i + s, 400 + y, 52 + i + s, 450 + y);
        // left hand
        line(50 + s + i, 360 + y, 40 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 360 + y, 60 + s + i, 400 + y);
    }
    setcolor(WHITE);
}

// stickWomen open legs
void stickwomen_open(int speed, int color)
{
    int s, i, y = 350;
    s = speed;
    for (i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        // dress
        line(50 + i + s, 350 + y, 40 + i + s, 400 + y);
        line(50 + i + s, 350 + y, 60 + i + s, 400 + y);
        line(40 + s, 400 - i + y, 60 + s, 400 - i + y);
        // legs
        line(50 + i + s, 400 + y, 30 + i + s, 450 + y);
        line(50 + i + s, 400 + y, 70 + i + s, 450 + y);

        // left hand
        line(50 + s + i, 360 + y, 35 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 360 + y, 65 + s + i, 400 + y);
    }
}

void stickwomen_mid(int speed, int color)
{
    int s = speed, y = 350;
    for (int i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        // dress
        line(50 + i + s, 350 + y, 40 + i + s, 400 + y);
        line(50 + i + s, 350 + y, 60 + i + s, 400 + y);
        line(40 + s, 400 - i + y, 60 + s, 400 - i + y);
        // legs
        line(52 - i + s, 400 + y, 40 - i + s, 450 + y);
        line(50 + i + s, 400 + y, 60 + i + s, 450 + y);
        // left hand
        line(50 + s + i, 360 + y, 20 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 360 + y, 80 + s + i, 400 + y);
    }
}

// stickwomen close legs
void stickwomen_close(int speed, int color)
{
    int s = speed, y = 350;
    for (int i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        // dress
        line(50 + i + s, 350 + y, 40 + i + s, 400 + y);
        line(50 + i + s, 350 + y, 60 + i + s, 400 + y);
        line(40 + s, 400 - i + y, 60 + s, 400 - i + y);
        // legs
        line(52 - i + s, 400 + y, 50 - i + s, 450 + y);
        line(50 + i + s, 400 + y, 52 + i + s, 450 + y);
        // left hand
        line(50 + s + i, 360 + y, 40 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 360 + y, 60 + s + i, 400 + y);
    }
}

int main()
{
    int f = 0, x = 20, y = 100;
    initwindow(1600, 900, "rajkishorbgp");
    int s = 10;
    while (!kbhit())
    {
        cleardevice();

        if (f == 0)
        {
            stickwomen_open(x + 100, WHITE);
            stickman_open(x, YELLOW);
            f = 1;
        }
        else if (f == 1)
        {
            stickwomen_mid(x + 100, WHITE);
            stickman_mid(x, YELLOW);
            f = 2;
        }
        else
        {
            stickwomen_close(x + 100, WHITE);
            stickman_close(x, YELLOW);
            f = 0;
        }

        // 2 bogie
        int b = 170;
        int d = 350;

        rectangle(30 + x + b, 340 + d, 180 + b + x, 350 + d);
        rectangle(40 + x + b, 350 + d, 170 + b + x, 425 + d);

        // for back wheels
        circle(70 + b + x, 437 + d, 12);
        circle(140 + b + x, 437 + d, 12);

        // for back incircle for wheels
        circle(70 + b + x, 437 + d, 8);
        circle(140 + b + x, 437 + d, 8);
        rectangle(70 + b + x, 435 + d, 140 + b + x, 439 + d);
        // for back windows
        rectangle(55 + b + x, 365 + d, 155 + b + x, 400 + d);
        line(83 + b + x, 365 + d, 83 + b + x, 400 + d);
        line(122 + b + x, 365 + d, 122 + b + x, 400 + d);

        // road
        for (int i = 0; i < 4; i++)
        {
            line(0, 800 + i, 1000, 800 + i);
        }

        // EARTH
        circle(300 + x, 350 + y, 200);
        circle(300 + x, 350 + y, 199);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(300 + x, 200 + y, WHITE);

        // MASK
        int mask[14] = {150 + x, 380 + y, 300 + x, 310 + y, 450 + x,
                        380 + y, 450 + x, 430 + y, 300 + x, 500 + y,
                        150 + x, 430 + y, 150 + x, 380 + y};
        drawpoly(7, mask);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(300 + x, 400 + y, WHITE);

        // Mask ribbon

        line(150 + x, 380 + y, 150 - 50 + x, 380 - 10 + y);
        line(150 + 1 + x, 380 + 1 + y, 100 + 1 + x, 370 + 1 + y);

        line(450 + x, 380 + y, 450 + 50 + x, 380 - 10 + y);
        line(450 + x + 1, 380 + 1 + y, 450 + 50 + 1 + x, 380 - 10 + 1 + y);

        line(150 + x, 430 + y, 150 - 20 + x, 430 + 15 + y);
        line(150 + 1 + x, 430 + 1 + y, 150 - 20 + 1 + x, 430 + 15 + 1 + y);

        line(450 + x, 430 + y, 450 + 20 + x, 430 + 15 + y);
        line(450 + 1 + x, 430 + 1 + y, 450 + 20 + 1 + x, 430 + 15 + 1 + y);

        // mask details

        line(150 + x, 380 + 15 + y, 300 + x, 380 - 25 + y);
        line(300 + x, 380 - 25 + y, 450 + x, 380 + 15 + y);
        line(150 + 1 + x, 380 + 15 + 1 + y, 300 + 1 + x, 380 - 25 + 1 + y);
        line(300 + 1 + x, 380 - 25 + 1 + y, 450 + 1 + x, 380 + 15 + 1 + y);

        line(150 + x, 430 - 15 + y, 300 + x, 500 - 25 + y);
        line(300 + x, 500 - 25 + y, 450 + x, 430 - 15 + y);
        line(150 + 1 + x, 430 - 15 + 1 + y, 300 + 1 + x, 500 - 25 + 1 + y);
        line(300 + 1 + x, 500 - 25 + 1 + y, 450 + 1 + x, 430 - 15 + 1 + y);

        // EYES

        circle(200 + x, 300 + y, 30);
        circle(400 + x, 300 + y, 30);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(200 + x, 300 + y, WHITE);
        floodfill(400 + x, 300 + y, WHITE);

        // ARCS

        arc(400 + x, 570 + y, 63, 165, 90);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(330 + x, 520 + y, WHITE);

        arc(400 + x, 100 + y, 180 + 20, 360 - 63, 150);
        arc(400 + x, 100 + y, 180 + 22, 360 - 65, 151);
        floodfill(300 + x, 155 + y, WHITE);

        arc(50 + x, 360 + y, 270 + 40, 270 + 57, 150 + 1);
        floodfill(150 + x, 440, WHITE);
        arc(50 + x, 360 + y, 270 + 122, 450 - 35, 150 + 1);
        arc(50 + x, 360 + y, 360, 360 + 12, 150 + 1);
        floodfill(110 + x, 350 + y, WHITE);
        //   setcolor(WHITE);
        //  settextstyle(1, HORIZ_DIR, 5);
        //  outtextxy(140 + x, 70, "COVID-19");

        //   x += 5;
        delay(200);
    }
    getch();
    closegraph();
}
