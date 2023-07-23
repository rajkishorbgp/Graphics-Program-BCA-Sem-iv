/*
                        Program: 11
    Write a program in graphics for Reflection about y-axis.
*/

#include <graphics.h>
#include <iostream>
int main()
{
    int arr[8], size, i, sx, sy;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    size = sizeof(arr) / sizeof(int);
    std::cout << "Enter the triangle point p1(x,y), p2(x,y), p3(x,y): ";
    for (i = 0; i < size - 2; i++)
    {
        std::cin >> arr[i];
    }
    arr[i++] = arr[0];
    arr[i] = arr[1];

    drawpoly(size / 2, arr);

    for (i = 0; i < size; i += 2)
    {
        arr[i] = -arr[i];
        arr[i + 1] = arr[i + 1];
    }
    setcolor(GREEN);
    drawpoly(size / 2, arr);

    getch();
    closegraph();
    return 0;
}
