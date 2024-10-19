#include "main.h"
/* more headers goes there */

/**
* puts_half - prints half of a string
* @str : pointers to a string
* Return : void
*/

void puts_half(char *str)
{

int i = 0;
int j = 0;

for (i = 0; *(str + i) != 0; i++)
{
}


for (j = 0; *(str + j) != 0; j++)
{
	if (j > (i - 1) / 2)
	{
	_putchar(*(str + j));
	}
	else
	{
	}

}
_putchar('\n');
}
