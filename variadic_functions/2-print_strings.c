#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings
 * @separator: separator of the streings
 * @n: the number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			s  = va_arg(args, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}

			if (separator == NULL)
			{
				separator = "";
			}
			printf("%s%s", s, separator);
		}
	s = va_arg(args, char *);
	printf("%s%s\n", s, separator);
	va_end(args);

}
