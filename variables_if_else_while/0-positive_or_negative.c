#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - Print the three signes possibles for a randomly assigned int name n
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}

	if (n < 0)
	{
	printf("%d is negative\n", n);
	}

	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
