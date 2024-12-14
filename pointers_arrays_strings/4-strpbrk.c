#include "main.h"
#include <stddef.h>
/**
* _strpbrk - searches for a string
* in any set of bytes
* @s: the string to search
* @accept: the string
* Return: an unsigned int
*/


char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
char *p = NULL;


for (i = 0; *(s + i) != '\0'; i++)
{
	for (j = 0; *(accept + j) != '\0'; j++)
	{
		if (*(s + i) == *(accept + j))
		{
		p = (s + i);
		return (p);
		}
	}
}

return (p);
}
