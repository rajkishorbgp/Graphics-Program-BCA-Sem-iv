/*
                Program: 7
    Write a program to perform Translation in 2D transformation.
*/

#include <graphics.h>
#include <iostream>
int main()
{
    int arr[8], size, i, tx, ty;
    initwindow(800,800,"RajKishor");
    size = sizeof(arr) / sizeof(int);
    std::cout << "Enter the triangle point p1(x,y), p2(x,y), p3(x,y): ";
    for (i = 0; i < size - 2; i++)
    {
        std::cin >> arr[i];
    }
    arr[i++] = arr[0];
    arr[i] = arr[1];

    drawpoly(size / 2, arr);
    std::cout << "Enter the Translation size tx and ty: ";
    std::cin >> tx >> ty;
    for (i = 0; i < size; i += 2)
    {
        arr[i] = arr[i] + tx;
        arr[i + 1] = arr[i + 1] + ty;
    }
    setcolor(BLUE);
    drawpoly(size / 2, arr);
    getch();
    closegraph();
    return 0;
}
