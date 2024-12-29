#include "main.h"
#include <stdio.h>

/**
* string_to_int - convert a string to
* an int (only if positive)
* @s: string to convert
* Return: the string as an int
*/

int string_to_int(char *s)
{
int i = 0;
int result = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) < 48 || *(s + i) > 57)
		{
		return (-1);
		}
		else
		{
		result = result * 10 + (*(s + i) - 48);
		}
	}

return (result);
}

/**
* absolute_as_string - convert the product
* of the addition made in main
* into a string and print it
* @n: the int to convert
* Return: nothing
*/

void absolute_as_string(int n)
{
char s[11];
int i = 0;
int lenght = 0;

	for (i = 1; n / 10 != 0 || n % 10 != 0; i++)
	{
	s[i] = n % 10;
	n = n / 10;
	}

s[i] = '\0';
lenght = i - 1;

	for (i = lenght; i > 0; i--)
	{
	_putchar((s[i] + 48));
	}
}

/**
* main - adds all positive numbers passed
* as arguments
* @argc: number of arguments passed
* @argv: array of arguments as strings
* Return: 0 if no argument passed, error if
* at least one character is not a positive number
*/


int main(int argc, char *argv[])
{
int i = 0;
int result = 0;

if (argc <= 2)
{
_putchar(48);
_putchar(10);
}
else
{
	for (i = 1; i < argc; i++)
	{
		if (string_to_int(argv[i]) == -1)
		{
		_putchar(69);
		_putchar(114);
		_putchar(114);
		_putchar(111);
		_putchar(114);
		_putchar(10);
		return (1);
		}
		else
		{
		result = result + string_to_int(argv[i]);
		}
	}
absolute_as_string(result);
_putchar(10);
}
return (0);
}
