#include <graphics.h>
#include <sstream>
using namespace std;

// Loading bar //
int main()
{
	initwindow(600, 500, "Loading", 150, 50);
	int text_width = textwidth("Loading...");
	int text_height = textheight("Loading...");
	int x = 600 / 2 - text_width / 2;
	int y = 500 / 2 - text_height / 2 - 20;
	int n = 1;
	int page = 0;
	while (n <= 101)
	{
		setactivepage(page);
		setvisualpage(1 - page);
		cleardevice();

		outtextxy(x, y, "Loading...");
		rectangle(600 / 2 - 101, 500 / 2 - 2, 600 / 2 + 102, 500 / 2 + 20 + 2);
		stringstream s;
		s << n << '%';
		char ch[5];
		s >> ch;
		outtextxy(600 / 2 - 20, 500 / 2 + 30, ch);
		for (int i = 1; i <= n * 2; i++)
		{
			line(600 / 2 - 100 + i, 500 / 2, 600 / 2 - 100 + i, 500 / 2 + 20);
		}
		n++;
		page = 1 - page;
		delay(100);
	}
	getch();
	closegraph();
}
