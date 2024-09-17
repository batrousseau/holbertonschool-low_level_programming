#include "main.h"
/* more headers goes there */
/**
* times_table - Prints the 9 times table, starting with 0
*/
void times_table(void)
{
int a = 0;
int b = 0;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{

			if (b == 0)
			{
			_putchar ('0' + a * b);
			}

			if (a * b < 10 &&  b != 0)
			{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar('0' + a * b);
			}

			if (a * b >= 10)
			{
			_putchar(44);
			_putchar(32);
			_putchar('0' + ((a * b) / 10));
			_putchar('0' + ((a * b) % 10));
			}
		}
	_putchar('\n');
	}
}
