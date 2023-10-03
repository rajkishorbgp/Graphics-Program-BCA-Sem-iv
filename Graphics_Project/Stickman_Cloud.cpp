#include <graphics.h>

// stickman legs open

void stickman_open(int a, int um_out, int um_color, int um_pattern, int man_color)
{
	for (int i = 0; i < 3; i++)
	{
		setcolor(man_color);
		circle(50 + a, 320, 30 + i);
		line(50 + i + a, 350, 50 + i + a, 400);
		// legs
		line(50 + i + a, 400, 30 + i + a, 450);
		line(50 + i + a, 400, 70 + i + a, 450);
		// right hand
		line(50 + a + i, 360, 20 + a + i, 400);
		//
		line(50 + a, 360 + i, 80 + a, 380 + i);
		line(80 + i + a, 380, 100 + i + a, 360);
		setcolor(um_out);
		line(100 + i + a, 360, 100 + i + a, 270);
		line(50 + a, 270 + i, 150 + a, 270 + i);
		arc(100 + a, 270, 0, 180, 50 + i);
		setfillstyle(um_pattern, um_color);
		floodfill(55 + a, 260, um_out);
	}
}

// stickman legs close

void stickman_close(int a, int um_out, int um_color, int um_pattern, int man_color)
{
	for (int i = 0; i < 3; i++)
	{
		setcolor(man_color);
		circle(50 + a, 320, 30 + i);
		line(50 + i + a, 350, 50 + i + a, 400);
		// legs
		line(50 - i + a, 400, 50 - i + a, 450);
		line(50 + i + a, 400, 50 + i + a, 450);
		// Right hand
		line(50 + a + i, 360, 45 + a + i, 400);

		line(50 + a, 360 + i, 80 + a, 380 + i);
		line(80 + i + a, 380, 100 + i + a, 360);
		setcolor(um_out);
		line(100 + i + a, 360, 100 + i + a, 270);
		line(50 + a, 270 + i, 150 + a, 270 + i);
		arc(100 + a, 270, 0, 180, 50 + i);
		setfillstyle(um_pattern, um_color);
		floodfill(55 + a, 260, um_out);
	}
}

// rain

void rain(int speed, int drop_size)
{

	setcolor(LIGHTCYAN);

	for (int i = 0; i < 30; i++)
	{
		settextstyle(0, HORIZ_DIR, drop_size);
		outtextxy(speed + rand() % 150, 100 + rand() % 345, "| ");
	}
	setcolor(WHITE);
}

// cloud
void cloud(int a, int cloud_color)
{
	setcolor(LIGHTGRAY);

	int i = 2;
	// up
	arc(50 + a, 50 + 2, 20, 160, 25 + i);
	arc(100 - 2 + a, 50 + 2, 20, 160, 25 + i);
	// down
	arc(50 + a, 80 - 4, 180 + 20, 360 - 20, 25 + i);
	arc(100 - 2 + a, 80 - 4, 180 + 20, 360 - 20, 25 + i);
	// left
	arc(25 + 5 + a, 65, 90 + 10, 270 - 10, 20 + i);
	// right
	arc(125 - 5 + a, 65, 270, 90, 20 + i);

	setfillstyle(1, cloud_color);
	floodfill(25 + a, 75, LIGHTGRAY);
}

// road

void road(int color)
{
	setcolor(color);
	for (int i = 0; i < 3; i++)
	{
		line(0, 450 + i, 600, 450 + i);
	}
	setcolor(WHITE);
}

// driver program

int main()
{
	int s = 0;
	initwindow(600, 500, "Stickman", 150, 50);
	int page = 0;
	int n = 0;
	while (n <= 150)
	{
		setactivepage(page);
		setvisualpage(1 - page);
		cleardevice();
		// program logic
		cloud(s, 15);

		road(13);
		rain(s, 2);

		if (n % 2 == 0)
			stickman_open(s, 9, 9, 3, 14);
		else
			stickman_close(s, 9, 9, 3, 14);

		page = 1 - page;
		delay(150);
		s += 4;

		n++;
	}
	getch();
	closegraph();
}
