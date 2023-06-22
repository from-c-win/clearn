#pragma once
#include<stdio.h>

#define ROW 3
#define COL 3


void head();
void chequer(char arr[ROW][COL], int row, int col);
void Initboard(char arr[ROW][COL], int row, int col);
void game(char arr[ROW][COL]);
char overrule(char arr[ROW][COL]);
int full(char arr[ROW][COL]);