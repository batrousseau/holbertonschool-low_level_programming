#include "main.h"
/* more headers goes there */

/**
 * _isalpha - Checks for alphabetical character
 * @c: int use to receive value and print corresponding
 * ASCII character
 *Return: 1 if c is alphabetical, return 0 otherwise
*/


int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}

	else if (c >= 97 && c <= 122)
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
