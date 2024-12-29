#include "main.h"

/**
* string_to_int - convert a string to
* an int
* @s: string to convert
* Return: the string as an int
*/

int string_to_int(char *s)
{
int i = 0;
int result = 0;

if (*(s + 0) == '-')
{
	for (i = 1; *(s + i) != '\0'; i++)
	{
	result = result * 10 + (*(s + i) - 48);
	}
result = -result;

}
else
{
	for (i = 0; *(s + i) != '\0'; i++)
	{
	result = result * 10 + (*(s + i) - 48);
	}
}
return (result);
}


/**
* absolute_as_string - convert the product
* of the multiplication made in main
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
* main - multiplies two numbers
* @argc: number of arguments (2)
* @argv: array of arguments
* Return: result of multiplication
*/


int main(int argc, char *argv[])
{
int arg1 = 0;
int arg2 = 0;
int result = 0;

if (argc != 3)
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
arg1 = string_to_int(argv[1]);
arg2 = string_to_int(argv[2]);
result = arg1 *arg2;
	if (result > 0)
	{
	absolute_as_string(result);
	_putchar(10);
	return (0);
	}
	if (result < 0)
	{
	_putchar('-');
	absolute_as_string(-result);
	_putchar(10);
	return (0);
	}
	else
	{
	_putchar(48);
	_putchar(10);
	return (0);
	}
}
}
