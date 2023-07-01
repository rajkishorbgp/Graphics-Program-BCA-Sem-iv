#include <graphics.h>
#include <stdlib.h>
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
}

// stickman close legs with rose
void stickman_close(int speed, int color)
{
  int s, i;
  s = speed;

  for (i = 0; i < 3; i++)
  {
    setcolor(color);
    circle(50 + s, 320, 30 + i);
    line(50 + i + s, 350, 50 + i + s, 400);
    // legs
    line(50 - i + s, 400, 50 - i + s, 450);
    line(50 + i + s, 400, 50 + i + s, 450);
    // left hand
    line(50 + s + i, 360, 20 + s + i, 400);
    // right hand
    line(50 + s, 360 + i, 80 + s, 400 + i);
  }
}

// stickWomen open legs
void stickwomen_open(int speed, int color)
{
  int s, i;
  s = speed;
  for (i = 0; i < 3; i++)
  {
    setcolor(color);
    circle(50 + s, 320, 30 + i);
    // dress
    line(50 + i + s, 350, 40 + i + s, 400);
    line(50 + i + s, 350, 60 + i + s, 400);
    line(40 + s, 400 - i, 60 + s, 400 - i);
    // legs
    line(50 + i + s, 400, 30 + i + s, 450);
    line(50 + i + s, 400, 70 + i + s, 450);
    // left hand
    line(50 + s + i, 350, 20 + s + i, 400);
    // right hand
    line(50 + s + i, 350, 80 + s + i, 400);
  }
}
// stickman with rose
void stickman_rose(int speed, int color)
{
  int s, i, h;
  s = speed;
  for (i = 0; i < 3; i++)
  {
    setcolor(color);
    circle(50 + s, 320, 30 + i);
    circle(50 + s, 320, 30 + i);
    line(50 + i + s, 350, 50 + i + s, 400);
    // legs
    line(50 + i + s, 400, 30 + i + s, 450);
    line(50 + i + s, 400, 70 + i + s, 450);
    // left hand
    line(50 + i + s, 360, 20 + i + s, 400);
    // right hand
    line(50 + s, 360 + i, 80 + s, 380 + i);
    line(80 + i + s, 380, 100 + i + s, 360);
  }
  // rose
  setcolor(LIGHTGREEN);
  for (i = 0; i < 2; i++)
  {
    line(100 + i + s, 360, 100 + i + s, 345);
  }

  setcolor(LIGHTRED);
  for (i = 10, h = 0; i >= 0; i--, h++)
  {
    line(90 + i + s, 345 - h, 110 - i + s, 345 - h);
  }
}

// stickmain rose break
void stickman_rose_break(int speed, int color)
{
  int s, i, h;
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
    line(50 + s, 360 + i, 80 + s, 380 + i);
    line(80 + i + s, 380, 100 + i + s, 360);
  }
  // rose
  setcolor(LIGHTGREEN);
  for (i = 0; i < 2; i++)
  {
    line(100 + i + s, 360, 100 + i + s, 350);
    line(100 + s, 350 + i, 110 + s, 350 + i);
  }
  setcolor(LIGHTRED);
  for (i = 10, h = 0; i >= 0; i--, h++)
  {
    line(110 + s + i, 350 - i, 110 + i + s, 350 + i);
  }
}
// stickwomen close legs
void stickwomen_close(int speed, int color)
{
  int s = speed;
  for (int i = 0; i < 3; i++)
  {
    setcolor(color);
    circle(50 + s, 320, 30 + i);
    // dress
    line(50 + i + s, 350, 40 + i + s, 400);
    line(50 + i + s, 350, 60 + i + s, 400);
    line(40 + s, 400 - i, 60 + s, 400 - i);
    // legs
    line(50 - i + s, 400, 50 - i + s, 450);
    line(50 + i + s, 400, 50 + i + s, 450);
    // left hand
    line(50 + s + i, 350, 20 + s + i, 400);
    // right hand
    line(50 + s + i, 350, 80 + s + i, 400);
  }
}

// stickman chat
void stickman_chat(int speed, int box_color, int text_color)
{
  int s = speed;
  setcolor(box_color);


  setcolor(text_color);
  settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
  outtextxy(-20 + s, 210, "I Love");
  outtextxy(-5 + s, 240, "You");
}

void stickwomen_chat(int speed, int box_color, int text_color)
{
  int s = speed;
  setcolor(text_color);
  settextstyle(EUROPEAN_FONT, HORIZ_DIR, 4);
  outtextxy(45 + s, 210, "Sorry, I Love");
  outtextxy(100 + s, 240, "Raj");
}

// road
void road(int color)
{
  setcolor(color);
  for (int i = 0; i < 3; i++)
  {
    line(0, 450 + i, 800, 450 + i);
  }
}

// cloud
void cloud(int speed, int cloud_color)
{
  setcolor(LIGHTGRAY);
  int a = speed;
  int i = 2;
  // up
  arc(50 + a, 50 + 2, 20, 160, 25 + i);
  arc(100 - 2 + a, 50 + 2, 20, 160, 25 + i);

  // down
  arc(50 + a, 80 - 4, 180 + 20, 360 - 20, 25 + i);
  arc(100 - 2 + a, 80 - 4, 180 + 20, 360 - 20, 25 + i);
  // left
  arc(25 + 5 + a, 65, 90 + 10, 270 - 10, 20 + i);
  // right
  arc(125 - 5 + a, 65, 270, 90, 20 + i);

  setfillstyle(1, cloud_color);
  floodfill(50 + a, 75, LIGHTGRAY);
}
// rain
void rain(int speed, int drop_size)
{
  setcolor(LIGHTCYAN);
  for (int i = 0; i < 30; i++)
  {
    settextstyle(0, HORIZ_DIR, drop_size);
    outtextxy(speed + rand() % 150, 100+ rand() % 330, "|");
  }
}

// rose_fall
void rose_fall(int speed, int height_spppd)
{
  int s = speed;
  int hf = height_spppd;
  setcolor(LIGHTGREEN);
  // rose

  for (int i = 0; i < 2; i++)
    line(100 + i + s, 360 + hf, 120 + i + s, 360 + hf);
  setcolor(LIGHTRED);
  for (int i = 1; i <= 10; i++)
  {
    // line(90+i+s,345-h,110-i+s,345-h);
    line(120 + s + i, 360 - i + hf, 120 + i + s, 360 + hf + i);
  }
}

int main()
{
  int page = 0, sm = 4, sw = 4, n = 0, cs = 650, rf = 0;
  initwindow(800, 500, "MY LOVE", 150, 50);

  while (n < 400)
  {
    setactivepage(page);
    setvisualpage(1 - page);
    cleardevice();

    if (n < 20)
    {
      road(13);
      stickman_open(sm, 14);
      stickwomen_open(280, 15);
    }

    // stick man walk 40

    if (n >= 20 && n <= 60)
    {
      road(13);
      if (n % 2 == 0)
        stickman_open(sm, 14);
      else
        stickman_close(sm, 14);
      stickwomen_open(280, 15);
      sm += 4;
    }

    // stick man propose 10

    if (n > 60 && n <= 70)
    {
      if (n == 61)
        delay(300);
      road(13);
      stickman_rose(sm, 14);
      if (n == 61)
        stickman_chat(sm, 14, 14);
      if (n == 62)
        delay(4000);
      stickwomen_open(280, 15);
      if (n == 63)
        stickwomen_chat(280, 15, 15);
      if (n == 64)
        delay(4000);
    }

    // stick women walk 70
    if (n > 70 && n <= 200 )
    {
      road(13);
      stickman_rose(sm, 14);
      if (n % 2 == 0)
        stickwomen_open(280 + sw, 15);
      else
        stickwomen_close(280 + sw, 15);
      sw += 4;
    }

    // cloud move 50

    if (n > 140 && n < 190)
    {
      road(13);
      stickman_rose(sm, 14);
      cloud(cs, 15);
      cs -= 10;
    }

    // rose break and starting rain
    if (n >= 190 && n <= 250)
    {
      road(13);
      stickman_rose_break(sm, 14);
      cloud(sm, 15);
      rain(sm, 2);
    }

    // rose fall
    if (n > 250 && n <= 300)
    {
      road(13);
      cloud(sm, 15);
      rain(sm, 2);
      rose_fall(200, rf);
      stickman_open(sm, 14);
      rf += 2;
    }

    // stick man walk
    if (n > 300 && n < 390)
    {
      road(13);
      cloud(sm, 15);
      rain(sm, 2);
      rose_fall(200, rf);
      if (n % 2 == 0)
        stickman_open(sm, 14);
      else
        stickman_close(sm, 14);
      sm -= 4;
    }
         // mountain
        //  step1
        int i = 0,y=0;
        line(0 + i, 199 + y, 200 + i, 100 + y);
        arc(220 + i, 157 + y, 49, 118, 60);

        line(259 + i, 112 + y, 460 + i, 300 + y);
        line(353 + i, 200 + y, 600 + i, 60 + y);
        arc(625 + i, 115 + y, 49, 118, 60);
        line(664 + i, 70 + y, 1100 + i, 360 + y);

    delay(100);
    page = 1 - page;
    n++;
  }

  getch();
  closegraph();
  return 0;
}
