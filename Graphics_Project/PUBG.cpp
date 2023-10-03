#include <graphics.h>

// PUBG ANIMATION

int main()
{
	int height = GetSystemMetrics(SM_CYSCREEN);
	int width = GetSystemMetrics(SM_CXSCREEN);
	initwindow(width, height, "PUBG Animation", -3);
	int j = 0;
	int page = 0;
	int n = 0;
	int bullet_move = 0;
	int p2 = 700;
	int p2_c = 14;
	int p2d = 70;

	while (!kbhit())
	{
		setactivepage(page);
		setvisualpage(1 - page);
		cleardevice();
		line(0, 600, width, 600);

		// gun man motion start

		if (n <= 20)
		{
			for (int i = 0; i <= 2; i++)
			{
				circle(100 + j, 300, 60 - i);
				// body
				line(99 + i + j, 355, 99 + i + j, 475);
				// right hand
				line(100 + j, 370 + i, 150 + j, 420 + i);
				line(150 + j, 420 + i, 180 + j, 355 + i);
				// left hand
				line(100 + j, 370 + i, 50 + j, 420 + i);
				line(50 + j, 420 + i, 20 + j, 350 + i);
				// legs
				if (n % 2 == 0)
				{

					line(99 + j, 475 - i, 99 + j, 600 - i);
					line(102 + j, 475 - i, 102 + j, 600 - i);
					delay(100);
				}
				else
				{
					line(99 + j, 475 - i, 50 + j, 600 - i);
					line(99 + j, 475 - i, 150 + j, 600 - i);
					delay(100);
				}
			}

			// Gun body
			for (int i = 0; i < 10; i++)
			{

				line(180 + j, 350 + i, 250 + j, 350 + i);
				line(180 + i + j, 350, 180 + i + j, 380);
			}

			// second person

			// 	second person
			setcolor(p2_c);
			for (int i = 0; i <= 2; i++)
			{
				circle(100 + j + p2, 300, 60 - i);
				// body
				line(99 + i + j + p2, 355, 99 + i + j + p2, 475);
				// right hand
				line(100 + j + p2, 370 + i, 150 + j + p2, 420 + i);
				line(150 + j + p2, 420 + i, 180 + j + p2, 355 + i);
				// left hand
				line(100 + j + p2, 370 + i, 50 + j + p2, 420 + i);
				line(50 + j + p2, 420 + i, 20 + j + p2, 350 + i);
				// legs

				if (n % 2 == 0)
				{
					line(99 + j + p2, 475 - i, 50 + j + p2, 600 - i);
					line(99 + j + p2, 475 - i, 150 + j + p2, 600 - i);

					//     delay(100);
				}
				else
				{
					line(99 + j + p2, 475 - i, 99 + j + p2, 600 - i);
					line(102 + j + p2, 475 - i, 102 + j + p2, 600 - i);
					//   delay(100);
				}
			}
			setcolor(WHITE);

			j += 10;
		}
		// gun man motion end

		// bullet motion
		if (n > 20 && n <= 175)
		{
			for (int i = 0; i <= 2; i++)
			{
				circle(100 + j, 300, 60 - i);
				// body
				line(99 + i + j, 355, 99 + i + j, 475);
				// right hand
				line(100 + j, 370 + i, 150 + j, 420 + i);
				line(150 + j, 420 + i, 180 + j, 355 + i);
				// left hand
				line(100 + j, 370 + i, 50 + j, 420 + i);
				line(50 + j, 420 + i, 20 + j, 350 + i);
				// legs
				line(99 + j, 475 - i, 50 + j, 600 - i);
				line(99 + j, 475 - i, 150 + j, 600 - i);
			}

			// Gun body
			for (int i = 0; i < 10; i++)
			{

				line(180 + j, 350 + i, 250 + j, 350 + i);
				line(180 + i + j, 350, 180 + i + j, 380);
			}

			// bullet
			for (int i = 0; i < 10; i++)
			{
				line(250 + j + bullet_move, 350 + i, 270 + j + bullet_move, 350 + i);
			}

			// second person

			for (int i = 0; i <= 2; i++)
			{
				setcolor(p2_c);
				circle(100 + j + p2, 300, 60 - i);
				// body
				line(99 + i + j + p2, 355, 99 + i + j + p2, 475);
				// right hand
				line(100 + j + p2, 370 + i, 150 + j + p2, 420 + i);
				line(150 + j + p2, 420 + i, 180 + j + p2, 355 + i);
				// left hand
				line(100 + j + p2, 370 + i, 50 + j + p2, 420 + i);
				line(50 + j + p2, 420 + i, 20 + j + p2, 350 + i);
				// legs
				line(99 + j + p2, 475 - i, 50 + j + p2, 600 - i);
				line(99 + j + p2, 475 - i, 150 + j + p2, 600 - i);
			}
			bullet_move += 3;
			setcolor(WHITE);
		}
		// bullet motion end

		if (n > 175)
		{
			// gun man
			for (int i = 0; i <= 2; i++)
			{
				circle(100 + j, 300, 60 - i);
				// body
				line(99 + i + j, 355, 99 + i + j, 475);
				// right hand
				line(100 + j, 370 + i, 150 + j, 420 + i);
				line(150 + j, 420 + i, 180 + j, 355 + i);
				// left hand
				line(100 + j, 370 + i, 50 + j, 420 + i);
				line(50 + j, 420 + i, 20 + j, 350 + i);
				// legs
				line(99 + j, 475 - i, 50 + j, 600 - i);
				line(99 + j, 475 - i, 150 + j, 600 - i);
			}

			// Gun body
			for (int i = 0; i < 10; i++)
			{

				line(180 + j, 350 + i, 250 + j, 350 + i);
				line(180 + i + j, 350, 180 + i + j, 380);
			}

			//	second person
			setcolor(p2_c);
			for (int i = 0; i <= 2; i++)
			{
				circle(150 + j + p2 + 355 - p2d, 545, 60 - i);
				// body
				line(150 + j + p2 + 125 - p2d, 550 + i, 150 + j + p2 + 300 - p2d, 545 + i);
				// right hand
				line(150 + j + p2 + 275 - p2d, 545 + i, 150 + j + p2 + 225 - p2d, 570 + i);
				line(150 + j + p2 + 225 - p2d, 570 - i, 150 + j + p2 + 275 - p2d, 600 - i);
				// left hand
				line(150 + j + p2 + 275 - p2d, 545 - i, 150 + j + p2 + 225 - p2d, 545 - 25 - i);
				line(150 + j + p2 + 225 - p2d, 545 - 25 - i, 150 + j + p2 + 275 - p2d, 545 - 50 - i);
				// legs
				line(150 + j + p2 - p2d, 600 - i, 150 + j + p2 + 125 - p2d, 550 - i);
				line(150 + j + p2 - p2d, 500 - i, 150 + j + p2 + 125 - p2d, 550 - i);
			}
			setcolor(WHITE);
		}

		delay(5);
		page = 1 - page;

		n++;
	}
	getch();
	closegraph();
}
