#include "main.h"
#include <stdio.h>

/**
* _memset - Fills memory with a constant byte
* @s: a pointer towards the memory to fill
* @b: the constant byte
* @n: the number of byte to fill
* Return: pointer to the s memory area
*/


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;


for (i = 0; i < n; i++)
{
*(s + i) = b;
}

return (s);

}
