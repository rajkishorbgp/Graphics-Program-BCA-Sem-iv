#include <graphics.h>
int main()
{
  initwindow(800, 700, "D man");
  int i = 0;

  //  for(int i=0; i<550; i++){

  if (i == 540)
    i = 0;
  cleardevice();
  // out side
  for (int m = 1; m <= 3; m++)
    arc(300 + i, 200, 300, 240, 100 - m);
  // in side
  for (int m = 1; m < 3; m++)
    arc(300 + i, 220, 305, 235, 80 - m);
  // eye
  circle(280 + i, 210, 15);
  circle(310 + i, 210, 15);
  // in eye
  circle(283, 216, 5);
  circle(307, 216, 5);
  // node
  circle(295 + i, 225, 8);
  line(295 + i, 233, 295 + i, 263);

  // moch left
  line(280, 230, 180, 200);
  line(276, 240, 176, 244);
  line(280, 250, 180, 280);

  // moch right
  line(310, 230, 410, 200);
  line(306, 240, 406, 244);
  line(310, 250, 410, 280);

  // moute
  arc(295, 236, 200, 340, 30);

  // halmet
  line(225, 285, 370, 285);
  line(225, 300, 370, 300);
  arc(237, 292, 151, 210, 15);
  arc(358, 292, 330, 29, 15);
  delay(10);
  // }

  setcolor(GREEN);
  for (i = 0; i < 10; i++)
  {
    line(0, 600 + i, 800, 600 + i);

    getch();
    closegraph();
    return 0;
  }
}
