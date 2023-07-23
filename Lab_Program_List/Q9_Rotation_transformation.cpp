/*
                    Program: 9
    Write a Program to perform Rotation in 2D transformation.
*/

#include <graphics.h>
#include <iostream>
#include <cmath>
int main()
{
    int arr[8], size, i, p, q;
    double angle;
    int gd = DETECT, gm;
    initwindow(1000, 900, "RAJ KISHOR");
    size = sizeof(arr) / sizeof(int);
    std::cout << "Enter the triangle point p1(x,y), p2(x,y), p3(x,y): ";
    for (i = 0; i < size - 2; i++)
    {
        std::cin >> arr[i];
    }
    arr[i++] = arr[0];
    arr[i] = arr[1];

    drawpoly(size / 2, arr);
    std::cout << "Enter the Rotation angle : ";
    std::cin >> angle;

    angle = angle * 3.14 / 180.0;

    p = arr[2];
    q = arr[3];

    for (i = 0; i < size; i += 2)
    {

        arr[i] = p + (arr[i] - p) * cos(angle) - (arr[i + 1] - q) * sin(angle);     // arr[i]=x
        arr[i + 1] = q + (arr[i] - p) * sin(angle) + (arr[i + 1] - q) * cos(angle); // arr[i+1] = y
    }
    setcolor(GREEN);
    drawpoly(size / 2, arr);

    getch();
    closegraph();
    return 0;
}
