#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
* print_to_98 - prints all natural numbers from n to 98 followed by a new line
* @n : an integer from which we print
* Return: 0
*/
void print_to_98(int n)
{
	if (n == 98)
	{
	printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (; n < 98 ; n++)
		{
		printf("%d, ", n);
		}
		if (n == 98)
		{
		printf("%d\n", n);
		}
	}

	else if (n > 98)
	{
		for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
		if (n == 98)
		{
		printf("%d\n", n);
		}
	}
}
