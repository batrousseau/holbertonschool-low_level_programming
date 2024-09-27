#include "main.h"
/* more headers goes there */

/**
* print_diagonal - draws a diagonal line
* @n: an integer
* Return:void
*/


void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n ; i++)
		{
		int result = 0;
			for (result = 1; result < i ; result++)
			{
			_putchar(32);
			}
			if (j == i - 1)
			{
			_putchar(92);
			_putchar('\n');
			j++;
			}
		}
	}
}
