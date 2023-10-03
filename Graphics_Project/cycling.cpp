#include <graphics.h>

void stickman_open(int speed, int color)
{
    int i, s;
    s = speed;
    for (i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320, 30 + i);
        line(50 + i + s, 350, 50 + i + s, 400);

        // legs
        line(50 + i + s, 400, 30 + i + s, 450);
        line(50 + i + s, 400, 70 + i + s, 450);

        // left hand
        line(50 + s + i, 360, 20 + s + i, 400);
        // right hand
        line(50 + s, 360 + i, 80 + s, 400 + i);
    }
    setcolor(WHITE);
}

// stickman close legs with rose
void stickman_close(int speed, int color)
{
    int s, i, y = 120;
    s = speed + 100;

    for (i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        line(50 + i + s, 350 + y, 50 + i + s, 400 + y);
        // legs
        line(50 - i + s, 400 + y, 50 - i + s, 450 + y);
        line(50 + i + s, 400 + y, 50 + i + s, 450 + y);
        // left hand
        line(50 + s + i, 360 + y, 20 + s + i, 400 + y);
        // right hand
        line(50 + s, 360 + i + y, 80 + s, 400 + i + y);
    }
    setcolor(WHITE);
}

int main()
{

    initwindow(1500, 750, "rajkishorbgp");
    int i = 0, y = 10, cs = 0;

    while (!kbhit())
    {
        cleardevice();

        // Sun
        setcolor(YELLOW);
        for (int k = 0; k < 30; k++)
        {
            circle(1000, 50, 30 - k);
        }
        setcolor(WHITE);

        stickman_close(cs, YELLOW);

        // mountain
        //  step1
        line(0 + i, 199 + y, 200 + i, 100 + y);
        arc(220 + i, 157 + y, 49, 118, 60);

        line(259 + i, 112 + y, 460 + i, 300 + y);
        line(353 + i, 200 + y, 600 + i, 60 + y);
        arc(625 + i, 115 + y, 49, 118, 60);
        line(664 + i, 70 + y, 1100 + i, 360 + y);

        line(1012 + i, 300 + y, 1280 + i, 115 + y);
        arc(1320 + i, 160 + y, 49, 135, 60);
        line(1357 + i, 113 + y, 1600 + i, 300 + y);

        // step 2
        int s2 = 1600;
        line(0 + i + s2, 300 + y, 200 + i + s2, 100 + y);
        arc(220 + i + s2, 157 + y, 49, 113, 60);

        line(259 + s2 + i, 112 + y, 460 + i + s2, 300 + y);
        line(353 + i + s2, 200 + y, 600 + i + s2, 60 + y);
        arc(625 + i + s2, 115 + y, 49, 118, 60);
        line(664 + i + s2, 70 + y, 1100 + i + s2, 360 + y);

        line(1012 + i + s2, 300 + y, 1280 + i + s2, 115 + y);
        arc(1320 + i + s2, 160 + y, 49, 135, 60);
        line(1357 + i + s2, 113 + y, 1600 + i + s2, 300 + y);

        // step3
        int s3 = 1600 + s2 + s2;
        line(0 + i + s3, 300 + y, 200 + i + s3, 100 + y);
        arc(220 + i + s3, 157 + y, 49, 113, 60);

        line(259 + s3 + i, 112 + y, 460 + i + s3, 300 + y);
        line(353 + i + s3, 200 + y, 600 + i + s3, 60 + y);
        arc(625 + i + s3, 115 + y, 49, 118, 60);
        line(664 + i + s3, 70 + y, 1100 + i + s3, 360 + y);

        line(1012 + i + s3, 300 + y, 1280 + i + s3, 115 + y);
        arc(1320 + i + s3, 160 + y, 49, 135, 60);
        line(1357 + i + s3, 113 + y, 1600 + i + s3, 300 + y);

        // for track
        for (int k = 1; k <= 4; k++)
            line(0, 650 + k, 1800, 650 + k);

        // cycle
        int cy = 150;
        for (int k = 0; k < 3; k++)
        {
            // cycle polygon
            line(100 + cs, 450 - k + cy, 100 + 75 + cs, 450 - k + cy); // lower line of cycle
            line(100 + k + cs, 450 + cy, 100 + 50 + k + cs, 390 + cy); // left line of cycle
            line(150 + cs, 390 + k + cy, 150 + 75 + cs, 390 + k + cy); // upper line of cycle
            line(225 - k + cs, 390 + cy, 225 - 50 - k + cs, 450 + cy); // right line of cycle

            // cycle handle
            line(250 - k + cs, 450 + cy, 250 - 25 - k + cs, 390 + cy);
            line(225 - k + cs, 390 + cy, 225 - 25 - k + cs, 340 + cy);
            line(200 + cs, 340 + k + cy, 200 - 20 + cs, 340 + k + cy);

            // cycle sheet
            line(149 + k + cs, 390 + cy, 149 + k + cs, 380 + cy);
            line(145 + cs, 379 + k + cy, 145 + 10 + cs, 379 + k + cy);

            // cycle tires
            circle(100 + cs, 450 + cy, 50 - k); // first circle left side
            circle(250 + cs, 450 + cy, 50 - k); // second circle risht side
        }

        i--;
        delay(10);
        if (cs == 1550)
        {
            cs = -80;
        }
        cs++;
    }

    getch();
    closegraph();
}
