#include "main.h"
/* more headers goes there */

/**
* print_triangle - draws a triangle line
* @size: size of integer
* Return:void
*/


void print_triangle(int size)
{

int i = 0;
int j = 0;
int k = 0;

if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = size ; i != 0; i--)
		{
			for (j = 0; j < i - 1; j++)
			{
			_putchar(32);
			}
			for (k = size; k > i - 1; k--)
			{
			_putchar(35);
			}
		_putchar('\n');
		}
	}
}
