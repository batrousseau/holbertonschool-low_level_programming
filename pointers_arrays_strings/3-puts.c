#include "main.h"
/* more headers goes there */

/**
* _puts - return the length of
* a string
* @str : a pointer to a string
* Return:nothing
*/


void _puts(char *str)
{

int i = 0;

for (i = 0; *(str + i) != 0; i++)
{
_putchar(*(str + i));
}
_putchar('\n');

}
