#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * p_char - print characters
 * @args: variadic list
 * Return: Nothing
 */

void p_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * p_int - print  int
 * @args: variadic list
 * Return: Nothing
 */

void p_int(va_list args)
{
	int c;

	c = va_arg(args, int);
	printf("%d", c);
}

/**
 * p_float - print  float
 * @args: variadic list
 * Return: Nothing
 */

void p_float(va_list args)
{
	float c;

	c = va_arg(args, double);
	printf("%f", c);
}

/**
 * p_string - print  string
 * @args: variadic list
 * Return: Nothing
 */

void p_string(va_list args)
{
	char *c;

	c = va_arg(args, char*);

	if (c == NULL)
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", c);
	}
}


/**
 * print_all - prints everything
 * @format: types of arguments passed to the functions
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	int f_lenght = strlen(format);
	va_list args;
	type_a array[] = {
	{'c', &p_char},
	{'i', &p_int},
	{'f', &p_float},
	{'s', &p_string}
	};

	va_start(args, format);

	while (i < f_lenght)
	{

		while (j < 4)
		{
			if (*(format + i) == array[j].x)
			{
			array[j].fp(args);
			if (i < f_lenght - 1)
				{
				printf(", ");
				}
			}
		j++;
		}
	j = 0;
	i++;
	}
	va_end(args);
	printf("\n");
}
