#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
 * print_string - print a string
 * @s: pointer to the string
 * Return: number of printed char
 */

int print_string(char *s)
{
	int i = 0;
	int result = 0;

if (s == NULL)
{
	putchar(0);
	return (0);
}

for (i = 0; *(s + i) != 0; i++)
{
_putchar(*(s + i));
}

result = i;
return (result);
}

/**
  * p_int - print an integer
  * @n: the integer to print
  * Return: number of printed characters
  */



int p_int(int n)
{
	int i = 0, lenght = 0, int_lengt = 0;
	char s[11];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		int_lengt++;
		n = -n;
	}
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
	int_lengt++;
	}
	return (int_lengt);
}

/**
 * print_list - print all elements of a list
 * @h: head of the linked list
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
int i = 0;
int result = 0;

for (i = 0; h != NULL; i++)
{
_putchar('[');
p_int(h->len);
_putchar(']');
_putchar(' ');

print_string(h->str);
_putchar('\n');

h = h->next;
}
result = i;
return (result);
}
