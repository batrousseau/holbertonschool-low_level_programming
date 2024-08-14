#include "main.h"
/* more headers goes there */

/**
 * _islower - Checks for lowercase character
 * @c: int use to receive value and print corresponding
 * ASCII character
 *Return: 1 if c is lowercase, return 0 otherwise
*/


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
