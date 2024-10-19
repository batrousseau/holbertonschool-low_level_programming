#include "main.h"
/* more headers goes there */

/**
* puts2 - prints one every
* two characters
* @str : a string
* Return : void
*/

void puts2(char *str)
{
int i = 0;

for (i = 0; *(str + i) != 0; i++)
{
	if (i % 2 == 0)
	{
	_putchar(*(str + i));
	}
	else
	{
	}
}
_putchar('\n');
}
