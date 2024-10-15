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
int partial_result = 0;


for (i = 0; *(s + i) != 0; i++)
{
partial_result = i;
}

for (partial_result = i; partial_result != *s && partial_result > 0; partial_result--)
{
_putchar(*(s + partial_result));
}
_putchar('\n');

}

