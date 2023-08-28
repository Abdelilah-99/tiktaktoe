#include "tiktaktoe.h"

const char PLAYER = 'X';
const char COMP = 'O';
int main()
{
	char end = 'n';
	while (end == 'n' || end == 'N')
	{
		char winner = ' ';
		resetboard();
		while (winner == ' ' && checkfreespaces() != 0)
		{
			printboard();
			playermove();
			winner = checkwinner();
			if (winner != ' ' || checkfreespaces() == 0)
				break;
			computermove();
			winner = checkwinner();
			if (winner != ' ' || checkfreespaces() == 0)
				break;
		}
		printboard();
		printwinner(winner);
		printf("U want to End the Game ?? [Y/N]: ");
		scanf("%s", &end);
	}
	return 0;
}