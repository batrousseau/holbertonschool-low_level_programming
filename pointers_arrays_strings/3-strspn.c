#include "main.h"

/**
* _strspn - gets the lenght
* of a prefix substring
* @s: the string to get the prefix from
* @accept: number of bytes of the prefix
* Return: an unsigned int
*/


unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int accept_bytes = 0;

for (i = 0; *(s + i) != '\0'; i++)
{
	for (j = 0; *(accept + j) != '\0'; j++)
	{
		if (*(s + i) == *(accept + j))
		{
		accept_bytes = accept_bytes + 1;
		break;
		}
	}

	if (*(accept + j) == '\0' && *(s + i) != *(accept + j))
	{
	return (accept_bytes);
	}

}
return (accept_bytes);

}
