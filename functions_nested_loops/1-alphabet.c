#include "main.h"
/* more headers goes there */

/**
 *print_alphabet - Print the alphabet in lowercase, followed by a new line
 *parameters int a et in b: int to print ASCII symbols
 * Return: void
*/

	void print_alphabet(void)
	{

	int a = 97;
	int b = 10;

		for (a = 97; a <= 122 ; a++)
		{
			_putchar(a);
		}
	_putchar(b);

}


