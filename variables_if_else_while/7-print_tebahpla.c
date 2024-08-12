#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - Prints the alphabet in lowercase in reverse, followed by a new line
*Return: 0
*/
int main(void)
{
	int number;
	int new_line = 10;

	for (number = 122 ; number >= 97 ; number--)
	{

	putchar(number);
	}
	putchar(new_line);

	return (0);
}
