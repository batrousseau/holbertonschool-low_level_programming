#include "main.h"
/* more headers goes there */

/**
* _isdigit - checks for a digit
* @c: an integer
* Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}