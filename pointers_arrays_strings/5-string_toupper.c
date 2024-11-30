#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
* string_toupper - Uppercase the shit
* out of lowercase letters
* @s : a string
* Return: a string
*/


char *string_toupper(char *s)
{
int i = 0;

for (i = 0; *(s + i) != '\0'; i++)
{
	if (*(s + i) >= 97 && *(s + i) <= 122)
	{
	*(s + i) = *(s + i) - 32;
	}
}

return (s);

}
