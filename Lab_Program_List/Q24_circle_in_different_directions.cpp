/*
                     Program: 24

 Write a Program for moving circle in different directions.
*/

#include <graphics.h>
int main()
{
    int x, x1, i, f=1;
    initwindow(1000, 800, "Rajkishor");
    x = -30;
    x1 = 1030;
        while (!kbhit())
        {
            cleardevice();
            for (i = 0; i < 4; i++)
            {
                circle(x, 400, 50+i);
                circle(x1, 400, 50+i);
            }
            if(x+60>=x1-50 && f){
                f=0;
                x--;
                x1++;
            }
            if(f)
            {
                x++;
                x1--;
            }else{
              x--;
              x1++;

            }
            delay(20);
        }

    getch();
    closegraph();
    return 0;
}
