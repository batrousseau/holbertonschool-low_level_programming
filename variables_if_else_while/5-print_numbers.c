#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - Prints the alphabet in lowercase, followed by a new line
*Return: 0
*/
int main(void)
{
	char number;
	char new_line = '\n';

	for (number = '0'; number <= '9'; number++)
	{

	putchar(number);
	}
	putchar(new_line);

	return (0);
}
