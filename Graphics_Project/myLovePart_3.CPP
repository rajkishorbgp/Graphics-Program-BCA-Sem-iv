
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

void stickman_open(int speed)
{
  int i, s, x = 50, y = -60;
  s = speed;
  for (i = 0; i < 3; i++)
  {
    setcolor(YELLOW);
    circle(50 + x + s, 320 + y, 30 + i);
    line(50 + x + i + s, 350 + y, 50 + i + s + x, 400 + y);

    // left hand
    line(50 + s + i + x, 360 + y, 20 + s + i + x, 400 + y);
    // right hand
    line(50 + s + x, 360 + i + y, 80 + s + x, 400 + i + y);
    setcolor(WHITE);
  }
}

// stickWomen open legs
void stickwomen_open(int speed)
{
  int s, i, x = -120, y = -60;
  s = speed;
  for (i = 0; i < 3; i++)
  {
    circle(50 + x + s, 320 + y, 30 + i);
    // dress
    line(50 + x + i + s, 350 + y, 40 + x + i + s, 400 + y);
    line(50 + x + i + s, 350 + y, 60 + x + i + s, 400 + y);
    line(40 + x + s, 400 - i + y, 60 + x + s, 400 - i + y);

    // left hand
    line(50 + x + s + i, 350 + y, 20 + x + s + i, 400 + y);
    // right hand
    line(50 + x + s + i, 350 + y, 80 + x + s + i, 400 + y);
  }
}

int main()
{
  int i = 1;
  int xmax, ymax;
  initwindow(1210, 500, "rajkishorbgp");

  for (i = -400; i <= 1200; i++)
  {

    stickman_open(i);
    stickwomen_open(i);

    // for track
    line(0, 450, 1200, 450);
    line(0, 452, 1200, 452);
    line(0, 475, 1200, 475);
    line(0, 480, 1200, 480);

    // for engine
    rectangle(200 + i, 320, 260 + i, 330);
    rectangle(210 + i, 330, 250 + i, 400);
    rectangle(250 + i, 340, 345 + i, 425);
    rectangle(250 + i, 340, 330 + i, 410);

    // for front wheels
    circle(225 + i, 425, 25);
    circle(320 + i, 437, 12);
    circle(280 + i, 437, 12);

    // for front small incircle wheels
    circle(320 + i, 437, 8);
    circle(280 + i, 437, 8);
    rectangle(320 + i, 435, 280 + i, 439);

    // for front big incircle wheels
    circle(225 + i, 425, 15);

    // for front windows
    rectangle(220 + i, 335, 240 + i, 365);

    // for fire
    rectangle(300 + i, 300, 330 + i, 340);
    rectangle(290 + i, 290, 340 + i, 300);

    // front tracker
    line(334 + i, 425, 334 + i, 448);
    line(336 + i, 425, 336 + i, 448);
    line(334 + i, 448, 336 + i, 448);
    line(345 + i, 425, 355 + i, 448);
    line(343 + i, 425, 353 + i, 448);
    line(353 + i, 448, 355 + i, 448);

    // for light
    rectangle(345 + i, 360, 355 + i, 380);

    // for join
    rectangle(170 + i, 390, 210 + i, 400);

    //  bogie
    // for back
    rectangle(30 + i, 340, 180 + i, 350);
    rectangle(40 + i, 350, 170 + i, 425);

    // for back wheels
    circle(70 + i, 437, 12);
    circle(140 + i, 437, 12);

    // for back incircle for wheels
    circle(70 + i, 437, 8);
    circle(140 + i, 437, 8);
    rectangle(70 + i, 435, 140 + i, 439);
    // for back windows
    rectangle(55 + i, 365, 155 + i, 400);
    line(83 + i, 365, 83 + i, 400);
    line(122 + i, 365, 122 + i, 400);

    // 2 bogie
    int b = -170;

    // for join
    rectangle(170 + b + i, 390, 210 + b + i, 400);

    rectangle(30 + i + b, 340, 180 + b + i, 350);
    rectangle(40 + i + b, 350, 170 + b + i, 425);

    // for back wheels
    circle(70 + b + i, 437, 12);
    circle(140 + b + i, 437, 12);

    // for back incircle for wheels
    circle(70 + b + i, 437, 8);
    circle(140 + b + i, 437, 8);
    rectangle(70 + b + i, 435, 140 + b + i, 439);
    // for back windows
    rectangle(55 + b + i, 365, 155 + b + i, 400);
    line(83 + b + i, 365, 83 + b + i, 400);
    line(122 + b + i, 365, 122 + b + i, 400);

    // background();
    for (int k = 0; k < 30; k++)
    {
      circle(1000, 50, 30 - k);
    }

    int bi = 0, y = 0;
    // mountain
    //  step1
    line(0 + bi, 199 + y, 200 + bi, 100 + y);
    arc(220 + bi, 157 + y, 49, 118, 60);

    line(259 + bi, 112 + y, 460 + bi, 300 + y);
    line(353 + bi, 200 + y, 600 + bi, 60 + y);
    arc(625 + bi, 115 + y, 49, 118, 60);
    line(664 + bi, 70 + y, 1100 + bi, 360 + y);

    line(1012 + bi, 300 + y, 1280 + bi, 115 + y);
    arc(1320 + bi, 160 + y, 49, 135, 60);
    line(1357 + bi, 113 + y, 1600 + bi, 300 + y);

    // step 2
    int s2 = 1600;
    line(0 + bi + s2, 300 + y, 200 + bi + s2, 100 + y);
    arc(220 + bi + s2, 157 + y, 49, 113, 60);

    line(259 + s2 + bi, 112 + y, 460 + bi + s2, 300 + y);
    line(353 + bi + s2, 200 + y, 600 + bi + s2, 60 + y);
    arc(625 + bi + s2, 115 + y, 49, 118, 60);
    line(664 + bi + s2, 70 + y, 1100 + bi + s2, 360 + y);

    line(1012 + bi + s2, 300 + y, 1280 + bi + s2, 115 + y);
    arc(1320 + bi + s2, 160 + y, 49, 135, 60);
    line(1357 + bi + s2, 113 + y, 1600 + bi + s2, 300 + y);

    // step3
    int s3 = 1600 + s2 + s2;
    line(0 + bi + s3, 300 + y, 200 + bi + s3, 100 + y);
    arc(220 + bi + s3, 157 + y, 49, 113, 60);

    line(259 + s3 + bi, 112 + y, 460 + bi + s3, 300 + y);
    line(353 + bi + s3, 200 + y, 600 + bi + s3, 60 + y);
    arc(625 + bi + s3, 115 + y, 49, 118, 60);
    line(664 + bi + s3, 70 + y, 1100 + bi + s3, 360 + y);

    line(1012 + bi + s3, 300 + y, 1280 + bi + s3, 115 + y);
    arc(1320 + bi + s3, 160 + y, 49, 135, 60);
    line(1357 + bi + s3, 113 + y, 1600 + bi + s3, 300 + y);

    delay(10);
    cleardevice();
  }
  getch();
  closegraph();
  return 0;
}
