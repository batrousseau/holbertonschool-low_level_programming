#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - Prints all the number in base 16 in lower case line
*Return: 0
*/
int main(void)
{
	int number;
	int new_line = 10;

	for (number = 48 ; number <= 57 ; number++)
	{

	putchar(number);
	}

	for (number = 97 ; number <= 102 ; number++)
	{
	putchar(number);
	}

	putchar(new_line);

	return (0);
}
