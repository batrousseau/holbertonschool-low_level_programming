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
	char upcase_alphabet;
	char new_line = '\n';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}

	for (upcase_alphabet = 'A'; upcase_alphabet <= 'Z'; upcase_alphabet++)
	{
	putchar(upcase_alphabet);
	}

	putchar(new_line);

	return (0);
}
