#include "tiktaktoe.h"
void playermove()
{
	int x, y;
	do
	{
		printf("Enter Row #(1-3): ");
		scanf("%d", &x);
		x--;
		printf("Enter column #(1-3): ");
		scanf("%d", &y);
		y--;
		if (board[x][y] != ' ')
			printf("Invalide Move");
		else
		{
			board[x][y] = PLAYER;
			break;
		}
	} while (board[x][y] != ' ');
}