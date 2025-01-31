#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: string beeing print beetween numbers
 * @n: number of integers passed to the function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
int number = 0;

if(n == 0)
{
	va_start(args,n);
	va_end(args);
	exit(0);
}

if (separator == NULL)
{
va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
	}
	number = va_arg(args, int);
	printf("%d\n", number);
	va_end(args);
}
else
{
va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		number = va_arg(args, int);
		printf("%d%s", number, separator);
	}
	 number = va_arg(args, int);
	printf("%d\n", number);
	va_end(args);
}

}
