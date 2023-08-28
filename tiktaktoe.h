#ifndef TIKTAKTOE_H
#define TIKTAKTOE_H
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
char board[3][3];
extern const char PLAYER;
extern const char COMP;
void resetboard();
void printboard();
int checkfreespaces();
void playermove();
void computermove();
char checkwinner();
void printwinner(char);

#endif