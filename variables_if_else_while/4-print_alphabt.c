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
	char alpha;
	char new_line = '\n';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
		putchar(alpha);
		}
	}
	putchar(new_line);

	return (0);
}
