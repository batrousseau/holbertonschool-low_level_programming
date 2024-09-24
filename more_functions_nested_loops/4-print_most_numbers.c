#include "main.h"
/* more headers goes there */

/**
* print_most_numbers - Prints the numbers from 0 to 9
* except 2 and 4, followed by a new line
*Return:void
*/

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0 ; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar('0' + i);
		}
	}
	_putchar('\n');
}
