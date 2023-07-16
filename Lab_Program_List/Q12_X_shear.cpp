/*
                    Program: 12
    Write a Program in graphics for X-shear.
*/

#include <graphics.h>
#include <iostream>
int main()
{
    int arr[10],size,i,shx;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    size = sizeof(arr) / sizeof(int);
    std::cout << "Enter the Four point p1(x,y), p2(x,y), p3(x,y), p4(x,y): ";
    for (i = 0; i < size-2; i++)
    {
        std::cin >> arr[i];
    }
    // close the last point
    arr[i++] = arr[0];
    arr[i] = arr[1];

    drawpoly(size/2, arr);
    std::cout << "Enter the Shx(X-shear): ";
    std::cin >> shx;
    for(i=0; i<size; i+=2){
        arr[i]=arr[i]+shx*arr[i+1];   // x' = x+shx*y
        arr[i+1]=arr[i+1];     // y
    }
    setcolor(GREEN);
    drawpoly(size/2,arr);

    getch();
    closegraph();
    return 0;
}
