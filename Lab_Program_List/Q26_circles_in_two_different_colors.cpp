/*
                         Program: 26

    Write a C program to draw circles in circles in two different colors .
*/

#include <graphics.h>
int main()
{
    initwindow(1200, 700, "RajKishor");
    setcolor(YELLOW);
    circle(300, 300, 200);
    setcolor(BLUE);
    circle(900, 300, 200);
    getch();
    closegraph();
    return 0;
}
