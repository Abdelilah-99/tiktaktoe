#include "tiktaktoe.h"

int checkfreespaces(){
	int freespaces = 9;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] != ' ')
				freespaces--;
		}
	}
	return freespaces;
}
