#include "main.h"
/* more headers goes there */

/**
* print_numbers - Prints the numbers from 0 to 9, followed by a new line
*Return:void
*/

void print_numbers(void)
{
	int i = 0;
	for (i = 0 ; i<= 9; i++)
	{
	_putchar('0' + i);
	}
	_putchar('\n');
}
