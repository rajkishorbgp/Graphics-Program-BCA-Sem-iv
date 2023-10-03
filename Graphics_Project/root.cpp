
#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

using namespace std;

int i;

class Love
{

public:
  void body();
  void mountain(int s);
  void stickman_close(int s, int c);
  void cloud(int, int);
};

void Love::body()
{
  int i = 0;
  for (i = 0; i < 1300; i++)
  {
    // For cycle
    setcolor(WHITE);
    line(50 + i, 555, 100 + i, 555);
    line(75 + i, 525, 125 + i, 525);
    line(50 + i, 555, 75 + i, 525);
    line(100 + i, 555, 125 + i, 525);
    line(150 + i, 555, 100 + i, 495);
    line(75 + i, 525, 75 + i, 520);
    line(70 + i, 520, 80 + i, 520);
    line(80 + i, 495, 100 + i, 495);

    // For cycle Wheels
    circle(150 + i, 555, 30);
    circle(50 + i, 555, 30);

    setcolor(RED);
    circle(150 + i, 555, 27);
    circle(50 + i, 555, 27);

    setcolor(WHITE);
    mountain(i);

    stickman_close(i, YELLOW);

    // For Roads and Road lines
    setcolor(WHITE);
    line(0, 536, getmaxx(), 536);
    line(0, 650, getmaxx(), 650);
    line(0, 538, getmaxx(), 538);
    line(0, 652, getmaxx(), 652);
    rectangle(0, 590, 50, 596);
    rectangle(100, 590, 150, 596);
    rectangle(200, 590, 250, 596);
    rectangle(300, 590, 350, 596);
    rectangle(400, 590, 450, 596);
    rectangle(500, 590, 550, 596);
    rectangle(600, 590, 650, 596);
    rectangle(700, 590, 750, 596);
    rectangle(800, 590, 850, 596);
    rectangle(900, 590, 950, 596);
    rectangle(1000, 590, 1050, 596);
    rectangle(1100, 590, 1150, 596);
    rectangle(1200, 590, 1250, 596);

    // for windmills
    setcolor(YELLOW);
    rectangle(400, 200, 405, 536);
    rectangle(800, 200, 805, 536);

    setcolor(WHITE);
    if (i % 40 > 20)
    {
      line(403, 150, 405, 200);
      line(405, 150, 400, 200);
      line(403, 205, 350, 230);
      line(400, 200, 350, 230);
      line(403, 205, 450, 230);
      line(450, 230, 405, 200);
      line(803, 150, 805, 200);
      line(805, 150, 800, 200);
      line(803, 205, 750, 230);
      line(800, 200, 750, 230);
      line(803, 205, 850, 230);
      line(850, 230, 805, 200);
    }
    else
    {
      line(413, 150, 405, 200);
      line(413, 150, 400, 200);
      line(403, 205, 350, 240);
      line(400, 200, 350, 240);
      line(403, 205, 450, 220);
      line(450, 220, 405, 200);
      line(813, 150, 805, 200);
      line(813, 150, 800, 200);
      line(803, 205, 750, 220);
      line(800, 200, 750, 220);
      line(803, 205, 850, 220);
      line(850, 220, 805, 200);
    }

    cloud(750, 80);
    cloud(100, 40);
    cloud(500, 30);
    cloud(900, 80);
    cloud(1200, 50);

    delay(10);
    cleardevice();
  };
}

// mountain
void Love::mountain(int i)
{
  // step1
  int y = 100;
  line(0, 199 + y, 200, 100 + y);
  arc(220, 157 + y, 49, 118, 60);

  line(259, 112 + y, 460, 300 + y);
  line(353, 200 + y, 600, 60 + y);
  arc(625, 115 + y, 49, 118, 60);
  line(664, 70 + y, 1100, 360 + y);

  line(1012, 300 + y, 1280, 115 + y);
  arc(1320, 160 + y, 49, 135, 60);
  line(1357, 113 + y, 1600, 300 + y);

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
}

void Love::stickman_close(int speed, int color)
{
  int s, i, y = 120;
  s = speed + 25;

  for (i = 0; i < 2; i++)
  {
    setcolor(color);
    circle(50 + s, 320 + y, 30 + i);
    line(50 + i + s, 350 + y, 50 + i + s, 400 + y);
    // legs
    line(50 - i + s, 400 + y, 75 - i + s, 435 + y);
    // left hand
    line(50 + s + i, 360 + y, 20 + s + i, 400 + y);
    // right hand
    line(50 + s, 360 + i + y, 80 + s, 400 + i + y);
  }
  setcolor(WHITE);
}

// cloud
void Love::cloud(int x, int y)
{

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
}

int main()
{
  int gm, i, a;

  initwindow(1300, 750);

  Love mg;
  mg.body();
  getch();
  return 0;
}
