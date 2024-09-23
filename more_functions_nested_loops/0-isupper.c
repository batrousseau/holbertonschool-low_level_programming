#include "main.h"
/* more headers goes there */

/**
* _isupper - write a function that checks for uppercase character
* @c: an integer
* Return: 1 if c is uppercase; 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
