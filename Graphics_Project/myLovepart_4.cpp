#include <graphics.h>

void stickman_open(int a, int um_out, int um_color, int um_pattern, int man_color)
{
    int y = 243;
    for (int i = 0; i < 3; i++)
    {
        setcolor(man_color);
        circle(50 + a, 320 + y, 30 + i);
        line(50 + i + a, 350 + y, 50 + i + a, 400 + y);
        // legs
        line(50 + i + a, 400 + y, 30 + i + a, 450 + y);
        line(50 + i + a, 400 + y, 70 + i + a, 450 + y);
        // right hand
        line(50 + a + i, 360 + y, 20 + a + i, 400 + y);
        //
        line(50 + a, 360 + i + y, 80 + a, 380 + i + y);
        line(80 + i + a, 380 + y, 100 + i + a, 360 + y);
        setcolor(um_out);
        line(100 + i + a, 360 + y, 100 + i + a, 270 + y);
        line(50 + a, 270 + i + y, 150 + a, 270 + i + y);
        arc(100 + a, 270 + y, 0, 180, 50 + i);
        setfillstyle(um_pattern, um_color);
        floodfill(55 + a, 260 + y, um_out);
    }
}

void stickman_close(int a, int um_out, int um_color, int um_pattern, int man_color)
{
    int y = 243;
    for (int i = 0; i < 3; i++)
    {
        setcolor(man_color);
        circle(50 + a, 320 + y, 30 + i);
        line(50 + i + a, 350 + y, 50 + i + a, 400 + y);
        // legs
        line(50 - i + a, 400 + y, 50 - i + a, 450 + y);
        line(50 + i + a, 400 + y, 50 + i + a, 450 + y);
        // Right hand
        line(50 + a + i, 360 + y, 45 + a + i, 400 + y);

        line(50 + a, 360 + i + y, 80 + a, 380 + i + y);
        line(80 + i + a, 380 + y, 100 + i + a, 360 + y);
        setcolor(um_out);
        line(100 + i + a, 360 + y, 100 + i + a, 270 + y);
        line(50 + a, 270 + i + y, 150 + a, 270 + i + y);
        arc(100 + a, 270 + y, 0, 180, 50 + i);
        setfillstyle(um_pattern, um_color);
        floodfill(55 + a, 260 + y, um_out);
    }
}

void stickman_open(int speed, int color)
{
    int i, s, y = 243;
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

    int s, i, y = 243;
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
    int s, i, y = 243;
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

// stickWomen open legs
void stickwomen_open(int speed, int color)
{
    int s, i, y = 243;
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
        line(50 + s + i, 350 + y, 20 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 350 + y, 80 + s + i, 400 + y);
    }
}

// stickwomen close legs
void stickwomen_close(int speed, int color)
{
    int s = speed, y = 243;
    for (int i = 0; i < 3; i++)
    {
        setcolor(color);
        circle(50 + s, 320 + y, 30 + i);
        // dress
        line(50 + i + s, 350 + y, 40 + i + s, 400 + y);
        line(50 + i + s, 350 + y, 60 + i + s, 400 + y);
        line(40 + s, 400 - i + y, 60 + s, 400 - i + y);
        // legs
        line(50 - i + s, 400 + y, 50 - i + s, 450 + y);
        line(50 + i + s, 400 + y, 50 + i + s, 450 + y);
        // left hand
        line(50 + s + i, 350 + y, 20 + s + i, 400 + y);
        // right hand
        line(50 + s + i, 350 + y, 80 + s + i, 400 + y);
    }
}

void rain(int x, int y, int w, int s)
{

    setcolor(LIGHTCYAN);

    for (int i = 0; i < s; i++)
    {
        settextstyle(0, HORIZ_DIR, 2);
        outtextxy(x + rand() % w, y + rand() % 365, "|");
    }
    setcolor(WHITE);
}

int main()
{
    initwindow(1200, 750, "rajkishorbgp");

    int i = 0, y = 150, s = 1, t = 0, d = 0, m = 0, w = 0, wx = 400, mx;
    int r = 10;
    while (!kbhit())
    {
        // Sun
        setcolor(7);
        for (int k = 0; k < 40; k++)
        {
            circle(800, 80, 40 - k);
        }
        setcolor(WHITE);

        cloud(100, 100 + d);
        cloud(250, 50 + d);
        cloud(870, 40 + d);
        cloud(500, 40 + d);
        cloud(1000, 100 + d);

        // Road
        for (int i = 0; i < 5; i++)
            line(0, 692 + i, 1200, 692 + i);

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
        line(0 + s2, 300 + y, 200 + s2, 100 + y);
        arc(220 + s2, 157 + y, 49, 113, 60);

        line(259 + s2, 112 + y, 460 + s2, 300 + y);
        line(353 + s2, 200 + y, 600 + s2, 60 + y);
        arc(625 + s2, 115 + y, 49, 118, 60);
        line(664 + s2, 70 + y, 1100 + s2, 360 + y);

        line(1012 + s2, 300 + y, 1280 + s2, 115 + y);
        arc(1320 + s2, 160 + y, 49, 135, 60);
        line(1357 + s2, 113 + y, 1600 + s2, 300 + y);

        if (s < 150)
        {
            cloud(s + t, r);
            if (r < 240)
            {
                r += 2;
            }
        }
        else if (s < 600)
        {
            cloud(150, r);
            rain(150, r + 150, 500, 40);
        }
        else
        {
            cloud(mx, r);
            rain(mx, 350, 200, 20);
            if (r < 240)
            {
                r += 2;
            }
        }

        if (s < 150)
        {

            if (m == 0)
            {
                stickman_open(s + t, YELLOW);
                m = 1;
            }
            else if (m == 1)
            {
                stickman_mid(s + t, YELLOW);
                m = 2;
            }
            else
            {
                stickman_close(s + t, YELLOW);
                m = 0;
            }
        }
        else if (s < 700)
        {
            stickman_open(200, 9, 9, 3, YELLOW);
            m = 0;
            mx = 150;
        }
        else
        {
            mx++;
            if (m == 0)
            {
                stickman_open(mx, 9, 9, 3, YELLOW);
                m = 1;
            }
            else
            {
                stickman_close(mx, 9, 9, 3, YELLOW);
                m = 0;
            }
        }

        if (s > 350 && s < 690)
        {

            if (w == 0)
            {
                wx--;
                stickwomen_close(wx, WHITE);
                w = 1;
            }
            else
            {
                wx--;
                stickwomen_open(wx, WHITE);
                w = 0;
            }
        }
        else if (s < 600)
        {
            stickwomen_open(wx, WHITE);
        }
        else
        {
            if (w == 0)
            {
                wx++;
                stickwomen_close(wx, WHITE);
                w = 1;
            }
            else
            {
                wx++;
                stickwomen_open(wx, WHITE);
                w = 0;
            }
        }

        if (d < 50)
        {
            d++;
        }

        i--;
        t += 2;
        s += 3;
        delay(200);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
