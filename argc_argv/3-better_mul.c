#include "main.h"
#include <stdio.h>
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
* product_as_string - convert the product
* of the multiplication made in main
* into a string and print it
* @n: the int to convert
* Return: nothing
*/

void product_as_string(int n)
{
char s[7];
int i = 0;
int lenght = 0;

if (n < 0)
{
printf("Result is negative\n");
s[0] = '-';
n = -n;
_putchar(s[0]);
	for (i = 1; n / 10 != 0 || n % 10 != 0; i++)
	{
	s[i] = n % 10;
	printf("s[%d] is %c\n", i, (s[i] + 48));
	n = n / 10;
	}
s[i] = '\0';
lenght = i;
printf("Lenght of result = %d\n", lenght);
	for (i = lenght - 1; i > 1; i--)
	{
	printf("s[%d] = %c\n", i, (s[i] + 48));
	_putchar((s[i] + 48));
	printf("\n Now i = %d\n",i);
	}
}
if (n > 0)
{
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
else
{
_putchar(48);
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

int arg1 = string_to_int(argv[1]);
int arg2 = string_to_int(argv[2]);
int result = arg1 * arg2;

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
product_as_string(result);
_putchar(10);
return (0);
}

}
