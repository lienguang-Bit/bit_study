#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT  10

void Initboard(char board[ROWS][COLS],int rows, int cols,char set);
void displayboard(char board[ROWS][COLS],int row,int col);
void setmine(char mine[ROWS][COLS], int row, int col,int count);
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int  row,int col,int count);




