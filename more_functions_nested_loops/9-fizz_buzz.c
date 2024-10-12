#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
* buzzfizz - Prints the buzzfizz test
* followed by a new line
*Return:void
*/

void fizzbuzz(void)
{
int number = 0;

for (number = 1; number <= 100; number++)
{
	if (number % 3 == 0 && number % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (number % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (number % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", number);
	}
}
printf("\n");
}
