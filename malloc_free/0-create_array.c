#include "main.h"
#include <stdlib.h>


/**
* create_array - create array
* of chars, initialized with
* a given character
* @size: size of the array
* @c: character to fill the array with
* Return: pointer to the created array
*/


char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *s = malloc(size * 8);
if (size == 0)
{
return (NULL);
}
if (s == NULL)
{
return (NULL);
}
else
{
	for (i = 0; i <= size; i++)
	{
	*(s + i) = c;
	}
	return (s);
}
}
