#include <graphics.h>

void stickman_open(int a, int um_out, int um_color, int um_pattern, int man_color)
{
	int y = 350;
	for (int i = 0; i < 3; i++)
	{
		setcolor(man_color);
		circle(50 + a, 320 + y, 30 + i);
		line(50 + i + a, 350 + y, 50 + i + a, 400 + y);
		// legs
		line(50 + i + a, 400 + y, 30 + i + a, 450 + y);
		line(50 + i + a, 400 + y, 70 + i + a, 450 + y);
		// right hand
		line(50 + a + i, 360 + y, 20 + a + i, 400 + y);
		//
		line(50 + a, 360 + i + y, 80 + a, 380 + i + y);
		line(80 + i + a, 380 + y, 100 + i + a, 360 + y);
		setcolor(um_out);
		line(100 + i + a, 360 + y, 100 + i + a, 270 + y);
		line(50 + a, 270 + i + y, 150 + a, 270 + i + y);
		arc(100 + a, 270 + y, 0, 180, 50 + i);
		setfillstyle(um_pattern, um_color);
		floodfill(55 + a, 260 + y, um_out);
	}
}

void stickman_close(int a, int um_out, int um_color, int um_pattern, int man_color)
{
	int y = 350;
	for (int i = 0; i < 3; i++)
	{
		setcolor(man_color);
		circle(50 + a, 320 + y, 30 + i);
		line(50 + i + a, 350 + y, 50 + i + a, 400 + y);
		// legs
		line(50 - i + a, 400 + y, 50 - i + a, 450 + y);
		line(50 + i + a, 400 + y, 50 + i + a, 450 + y);
		// Right hand
		line(50 + a + i, 360 + y, 45 + a + i, 400 + y);

		line(50 + a, 360 + i + y, 80 + a, 380 + i + y);
		line(80 + i + a, 380 + y, 100 + i + a, 360 + y);
		setcolor(um_out);
		line(100 + i + a, 360 + y, 100 + i + a, 270 + y);
		line(50 + a, 270 + i + y, 150 + a, 270 + i + y);
		arc(100 + a, 270 + y, 0, 180, 50 + i);
		setfillstyle(um_pattern, um_color);
		floodfill(55 + a, 260 + y, um_out);
	}
}
void rain()
{

	setcolor(LIGHTCYAN);

	for (int i = 0; i < 40; i++)
	{
		settextstyle(0, HORIZ_DIR, 2);
		outtextxy(rand() % 1050, 200 + rand() % 700, ",");
	}
	setcolor(WHITE);
}

// cloud
void cloud(int x, int y, int cloud_color)
{
	setcolor(LIGHTGRAY);

	int i = 2;
	// up
	arc(50 + x, 50 + 2 + y, 20, 160, 25 + i);
	arc(100 - 2 + x, 50 + 2 + y, 20, 160, 25 + i);
	// down
	arc(50 + x, 80 - 4 + y, 180 + 20, 360 - 20, 25 + i);
	arc(100 - 2 + x, 80 - 4 + y, 180 + 20, 360 - 20, 25 + i);
	// left
	arc(25 + 5 + x, 65 + y, 90 + 10, 270 - 10, 20 + i);
	// right
	arc(125 - 5 + x, 65 + y, 270, 90, 20 + i);

	setfillstyle(1, cloud_color);
	floodfill(25 + x, 75 + y, LIGHTGRAY);
}

// road

void road(int color)
{
	setcolor(color);
	for (int i = 0; i < 3; i++)
	{
		line(0, 800 + i, 1000, 800 + i);
	}
	setcolor(WHITE);
}

int main()
{
	initwindow(1000, 830, "rajkishorbgp");
	int c = 0, x = 0, y = 0;

	for (int s = 0, f = 0; s < 1030; s += 4, f++)
	{
		road(GREEN);
		cleardevice();
		cloud(0, 100, 15);
		cloud(200, 15, 15);
		cloud(400, 15, 15);
		cloud(600, 15, 15);
		cloud(800, 15, 15);
		if (c)
		{
			rain();
		}
		if (f % 2 == 0)
			stickman_open(s, 9, 9, 3, 14);
		else
			stickman_close(s, 9, 9, 3, 14);

		if (x < 50)
		{
			x++;
		}
		else if (x < 100)
		{
			x++;
			y++;
		}
		else
		{
			y = y - 10;
			x = y - 10;
		}
		cloud(0 + x, 100 + y, 15);
		cloud(200 + x, 15 + y, 15);
		cloud(400 + x, 15 + y, 15);
		cloud(600 + x, 15 + y, 15);
		cloud(800 + x, 15 + y, 15);
		delay(10);
		if (c == 0)
		{
			for (int i = 1; i < 180; i++)
			{
				for (int j = 1; j <= 48; j++)
				{
					setcolor(LIGHTMAGENTA);
					arc(500, 550, 0, 1 + i, 50 + j);
					setcolor(LIGHTCYAN);
					arc(500, 550, 0, 1 + i, 100 + j);
					setcolor(LIGHTGRAY);
					arc(500, 550, 0, 1 + i, 150 + j);
					setcolor(LIGHTGREEN);
					arc(500, 550, 0, 1 + i, 200 + j);
					setcolor(LIGHTBLUE);
					arc(500, 550, 0, 1 + i, 250 + j);
					setcolor(YELLOW);
					arc(500, 550, 0, 1 + i, 300 + j);
					setcolor(LIGHTRED);
					arc(500, 550, 0, 1 + i, 350 + j);
					road(GREEN);
				}
				c = 1;
				delay(1);
			}
		}
		for (int j = 1; j <= 48; j++)
		{
			setcolor(LIGHTMAGENTA);
			arc(500, 550, 0, 180, 50);
			setcolor(LIGHTCYAN);
			arc(500, 550, 0, 180, 100 + j);
			setcolor(LIGHTGRAY);
			arc(500, 550, 0, 180, 150 + j);
			setcolor(LIGHTGREEN);
			arc(500, 550, 0, 180, 200 + j);
			setcolor(LIGHTBLUE);
			arc(500, 550, 0, 180, 250 + j);
			setcolor(YELLOW);
			arc(500, 550, 0, 180, 300 + j);
			setcolor(LIGHTRED);
			arc(500, 550, 0, 180, 350 + j);
			road(GREEN);
		}
	}
	getch();
	closegraph();
}
