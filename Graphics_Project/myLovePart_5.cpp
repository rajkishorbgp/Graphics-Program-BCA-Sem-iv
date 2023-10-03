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
        line(48 + s + i, 360 + y, 35 + s + i, 400 + y);
        // right hand
        line(52 + s + i, 360 + y, 65 + s + i, 400 + y);
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
        line(48 + s + i, 360 + y, 20 + s + i, 400 + y);
        // right hand
        line(52 + s + i, 360 + y, 80 + s + i, 400 + y);
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
        line(48 + s + i, 360 + y, 40 + s + i, 400 + y);
        // right hand
        line(52 + s + i, 360 + y, 60 + s + i, 400 + y);
    }
}

// cloud
void cloud(int x, int y)
{
    setcolor(LIGHTGRAY);

    int i = 2;
    // up
    arc(50 + x, 50 + 2 + y, 20, 160, 25 + i);
    arc(100 - 2 + x, 50 + 2 + y, 20, 160, 25 + i);
    // down
    arc(50 + x, 80 - 4 + y, 180 + 20, 360 - 20, 25 + i);
    arc(100 - 2 + x, 80 - 4 + y, 180 + 20, 360 - 20, 25 + i);
    // left
    arc(25 + 5 + x, 65 + y, 90 + 10, 270 - 10, 20 + i);
    // right
    arc(125 - 5 + x, 65 + y, 270, 90, 20 + i);

    setfillstyle(1, LIGHTGRAY);
    floodfill(25 + x, 75 + y, LIGHTGRAY);
}

int main()
{
    int f = 0, x = -900, y = 100;
    initwindow(1600, 900, "rajkishorbgp");
    int m = 10;
    int w = 1300;
    while (!kbhit())
    {
        cleardevice();

        cloud(100, 50);
        cloud(300, 100);
        cloud(500, 50);
        cloud(800, 80);
        cloud(1200, 100);

        int i = 0;
        setcolor(WHITE);
        line(0 + i, 199 + y, 200 + i, 100 + y);
        arc(220 + i, 157 + y, 49, 118, 60);

        line(259 + i, 112 + y, 460 + i, 300 + y);
        line(353 + i, 200 + y, 600 + i, 60 + y);
        arc(625 + i, 115 + y, 49, 118, 60);
        line(664 + i, 70 + y, 1100 + i, 360 + y);

        line(1012 + i, 300 + y, 1280 + i, 115 + y);
        arc(1320 + i, 160 + y, 49, 135, 60);
        line(1357 + i, 113 + y, 1600 + i, 300 + y);

        if (m <= 600 || x > 100)
        {
            m += 10;
            if (x < 100)
                w -= 10;
            if (f == 0)
            {
                stickwomen_open(w, WHITE);
                stickman_open(m, YELLOW);
                f = 1;
            }
            else if (f == 1)
            {
                stickwomen_mid(w, WHITE);
                stickman_mid(m, YELLOW);
                f = 2;
            }
            else
            {
                stickwomen_close(w, WHITE);
                stickman_close(m, YELLOW);
                f = 0;
            }
        }
        else if (x <= 600)
        {
            stickwomen_mid(w, WHITE);
            stickman_mid(m, YELLOW);
        }
        if (x > 100)
        {
            w += 20;
            m += 10;
        }
        if (x > 400 && x < 700 && y < 50)
        {
            y--;
        }
        if (x < 400)
        {
            x += 5;
        }
        if (x > 700 && x < 800)
        {
            y++;
        }

        // road
        for (int i = 0; i < 4; i++)
        {
            line(0, 800 + i, 2000, 800 + i);
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
        setcolor(WHITE);
        settextstyle(1, HORIZ_DIR, 5);
        outtextxy(140 + x, 180, "COVID-19");

        delay(200);
    }
    getch();
    closegraph();
}
