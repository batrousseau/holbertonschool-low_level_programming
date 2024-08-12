#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - prints all possible combinations of single digit numbers,
*separated by a coma and followed by a space
*Return: 0
*/
int main(void)
{
	int single_digit;
	int coma = 44;
	int space = 32;
	int new_line = 10;

	for (single_digit = 48; single_digit <= 57; single_digit++)
	{
	putchar(single_digit);

		if (single_digit >= 48 && single_digit < 57)
		{
		putchar(coma);
		putchar(space);
		}
	}

	putchar(new_line);

	return (0);
}
