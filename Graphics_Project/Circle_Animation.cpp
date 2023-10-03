#include <graphics.h>
int main()
{
    int j = 1;
    initwindow(700, 650, "rajkishorbgp", 150, 50);
    while (!kbhit())
    {
        for (int i = 0; i < 300; i += 10)
        {
            setcolor(j);
            circle(325, 325, 20 + i);
            for (int t = 0; t < 10; t++)
            {
                circle(325, 325, 20 + i + t);
            }
            delay(200);
            if (i < 150)
            {
                j++;
            }
            else
                j--;
        }
        for (int i = 299; i >= 0; i -= 10)
        {
            setcolor(0);
            circle(325, 325, 20 + i);
            for (int t = 9; t >= 0; t--)
            {
                circle(325, 325, 20 + i + t);
            }
            delay(200);
        }
    }
    getch();
    closegraph();
}
