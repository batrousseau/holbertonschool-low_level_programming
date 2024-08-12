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
	char alphabet;
	char new_line = '\n';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{

	putchar(alphabet);
	}
	putchar(new_line);

	return (0);
}
