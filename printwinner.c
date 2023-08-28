#include "tiktaktoe.h"
void printwinner(char winner)
{
	if (winner == PLAYER)
		printf("You Winnnn\n");
	else if (winner == COMP)
		printf("Ohh Sorryy u lose !!\n");
	else
		printf("Tiee\n");
}