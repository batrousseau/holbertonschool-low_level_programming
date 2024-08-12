#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - Print a random number, his last digit and caracterize this last digit
* Return: 0
*/
int main(void)
{
	int n;

	int last_digits;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last_digits = n % 10;


	printf("Last digit of %d is ", n);

	if (last_digits > 5)
	{
	printf("%d and is greater than 5\n", last_digits);
	}

	if (last_digits == 0)
	{
	printf("%d and is 0\n", last_digits);
	}

	if (last_digits < 6 && last_digits != 0)
	{
	printf("%d and is less than 6 and not 0\n", last_digits);
	}

return (0);
}
