/*
                Program: 14
    Write a Program for creating simple car shape.
*/

#include <graphics.h>
int main()
{
    initwindow(1000, 600, "rajkishorbgp");

    // Tire
    // first tire
    circle(250, 400, 50);
    circle(250, 400, 40);
    circle(250, 400, 15);
    // second tire
    circle(600, 400, 50);
    circle(600, 400, 40);
    circle(600, 400, 15);

    // body
    // tire upbody
    arc(250, 400, 0, 180, 70);
    arc(600, 400, 0, 180, 70);
    line(320, 400, 530, 400);
    // tyre back body
    line(670, 400, 750, 400);
    line(750, 400, 750, 330);
    arc(680, 400, 45, 88, 100);
    // topbody
    arc(490, 530, 50, 123, 300);
    line(180, 400, 120, 400); // frant gard
    line(325, 280, 200, 280);

    // frantbody
    arc(200, 380, 90, 143, 100);
    line(120, 400, 120, 320);

    // frant window
    arc(490, 540, 90, 120, 300);
    line(490, 240, 490, 300);
    line(340, 300, 490, 300);
    line(340, 300, 340, 280);
    // back window
    arc(490, 540, 61, 88, 300);
    line(500, 240, 500, 300);
    line(500, 300, 634, 300);
    line(634, 300, 634, 278);

    getch();
    closegraph();
}
