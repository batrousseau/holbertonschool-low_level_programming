#include "main.h"
#include <stdio.h>

/**
* print_chessboard - print a chessboard
* @a : an array of 8 by 7
* Return: nothing
*/


void print_chessboard(char (*a)[8])
{
int i = 0;
int j = 0;
int chess = 0;

for (j = 0; j <= 7; j++)
{
	for (i = 0; i <= 7; i++)
	{
		if (i == 7)
		{
		chess = (a[j][i]);
		_putchar(chess);
		_putchar(10);
		}
		else
		{
		chess = (a[j][i]);
		_putchar(chess);
		}
	}
}

}
