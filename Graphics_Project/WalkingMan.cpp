#include <graphics.h>
// WAlking Stickman

int main()
{
	initwindow(700, 500, "Walking Man", 150, 50);
	int i = 0;
	int page = 0;
	int n = 1;
	POINT cursor;
	while (1)
	{
		// road
		setcolor(WHITE);
		GetCursorPos(&cursor);
		setactivepage(page);
		setvisualpage(1 - page);
		cleardevice();
		line(0, 350, 700, 350);

		// keys
		setcolor(CYAN);
		rectangle(250, 400, 300, 450);
		outtextxy(265, 415, "<--");
		rectangle(400, 400, 450, 450);
		outtextxy(420, 415, "-->");

		// STICKMAN
		setcolor(YELLOW);
		// head
		circle(50 + i, 260, 15);

		// body
		line(50 + i, 275, 50 + i, 310);

		// hand

		line(50 + i, 290, 20 + i, 280);
		line(50 + i, 290, 80 + i, 280);

		// legs
		if (n % 2 == 0)
		{
			line(50 + i, 310, 50 + i, 350);

			line(50 + i, 310, 50 + i, 350);
		}
		else
		{
			line(50 + i, 310, 35 + i, 350);

			line(50 + i, 310, 65 + i, 350);
		}

		if (GetAsyncKeyState(VK_LEFT))
		{

			i = i - 5;
			n++;
		}

		if (GetAsyncKeyState(VK_RIGHT))
		{
			i = i + 5;
			n++;
		}
		delay(100);
		page = 1 - page;
	}

	getch();
	closegraph();
}
