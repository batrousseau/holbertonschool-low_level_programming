#include "main.h"
/* more headers goes there */

/**
 *print_last_digit - prints last digits of a number
 *@n: int use to receive value
 *Return: last digit of n
*/


int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	ld = -ld;

	_putchar('0' + ld);

	return (ld);

}
