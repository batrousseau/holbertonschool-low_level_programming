#include "main.h"

/**
* _memcpy - copies memory area
* @dest: the string to receive new memory
* @src : the original string
* @n: the unsigned int giving the lenght
* of bytes to copy
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
