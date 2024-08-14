#include "main.h"
/* more headers goes there */

/**
 *print_alphabet_x10 - Print the alphabet in lowercase,
 *followed by a new line, ten times
 *parameters int a et in b: int to print ASCII symbols
 * Return: void
*/

	void print_alphabet_x10(void)
	{

	int a = 97;
	int b = 10;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122 ; a++)
		{
			_putchar(a);
		}
	_putchar(b);
	}

}


