/*
                Program : 8
    Write a Program to perform Scaling in 2D transformation.
*/

#include <graphics.h>
#include <iostream>
int main()
{
    int arr[8],size,i,sx,sy;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    size = sizeof(arr) / sizeof(int);
    std::cout << "Enter the triangle point p1(x,y), p2(x,y), p3(x,y): ";
    for (i = 0; i < size-2; i++)
    {
        std::cin >> arr[i];
    }
    arr[i++] = arr[0];
    arr[i] = arr[1];

    drawpoly(size/2, arr);
    std::cout << "Enter the Scaling size Sx and Sy: ";
    std::cin>>sx>>sy;
    for(i=0; i<size; i+=2){
        arr[i]=arr[i]*sx;
        arr[i+1]=arr[i+1]*sy;
    }
    setcolor(GREEN);
    drawpoly(size/2,arr);

    getch();
    closegraph();
    return 0;
}
