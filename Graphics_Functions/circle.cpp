#include<graphics.h>
#include<iostream>
int main()
{
    int gd=DETECT,gm;
    initwindow(800,800,"Raj");
    circle(350,350,300);
    getch();
    closegraph();
    return 0;
}
