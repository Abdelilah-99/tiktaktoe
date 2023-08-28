#include "tiktaktoe.h"
void computermove()
{
	srand(time(0));
	int x, y;
	if (checkfreespaces() > 0)
	{
		do
		{
			x = rand() % 3;
			y = rand() % 3;
		} while (board[x][y] != ' ');
		board[x][y] = COMP;
	}
	else
		printwinner(' ');
}