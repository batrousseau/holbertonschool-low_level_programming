#include "main.h"
/* more headers goes there */

/**
* more_numbers - Prints the numbers from 0 to 14,
* ten times, followed by a new line
* Return:void
*/


void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
			_putchar('0' + j);
			}
			else
			{
			_putchar ('0' + j / 10);
			_putchar ('0' + j % 10);
			}
		}
	_putchar('\n');
	}
}
