#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character
* in a string
* @s: the string to look at
* @c: character to find
* Return: pointer to the first occurence of the
* character, return NULL if not find
*/



char *_strchr(char *s, char c)
{
int i = 0;
char *p;

for (i = 0; *(s + i) != '\0'; i++)
{
	if (*(s + i) == c)
	{
	p = (s + i);
	return (p);
	}
}

if (*(s + i) == '\0')
{
p = (s + i);
return (p);
}

else
{
return (NULL);
}
}
