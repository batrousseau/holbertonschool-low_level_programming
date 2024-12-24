#include "main.h"

/**
* _print_rev_recursion - prints a string
* in reverse using recursion principles
* @s: a string
* Return: Nothing
*/


void _print_rev_recursion(char *s)
{
int i = 0;

if (*(s + i) == '\0')
{
}
else
{
i++;
_print_rev_recursion((s + i));
i--;
_putchar(*(s + i));
}

}
