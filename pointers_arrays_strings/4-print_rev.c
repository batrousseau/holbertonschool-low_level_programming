#include "main.h"
/* more headers goes there */

/**
* print_rev - prints a string in reverse
* @s : a pointer to a string
* Return:nothing
*/


void print_rev(char *s)
{

int i = 0;
int partial_r = 0;

for (i = 0; *(s + i) != 0; i++)
{
partial_r = i;
}

for (partial_r = i - 1; *(s + partial_r) != *(s - 1); partial_r--)
{
_putchar(*(s + partial_r));
}
_putchar('\n');

}

