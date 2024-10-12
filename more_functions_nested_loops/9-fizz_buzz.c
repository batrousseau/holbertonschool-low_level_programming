#include <stdio.h>
/* more headers goes there */

/**
* fizzbuzz - Prints the buzzfizz test
* followed by a new line
* Return:void
*/

void fizzbuzz(void)
{
int number = 0;

for (number = 1; number <= 99; number++)
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
printf("Buzz");
printf("\n");
}

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	fizzbuzz();
	return (0);
}

