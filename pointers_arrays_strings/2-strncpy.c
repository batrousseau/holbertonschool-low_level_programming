#include "main.h"

/**
* _strncpy - copy one string to another
* @dest: where you wanna go
* @src: where you at
* @n : an int
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int src_lenght = 0;

/* Getting src lenght */
for (i = 0; *(src + i) != '\0'; i++)
{
}
src_lenght = i;

/* Copying strings and preventing overflow */

if (src_lenght >= n)
{

	for (j = 0; j < n; j++)
	{
	*(dest + j) = *(src + j);
	}
}

else
{
	for (j = 0; *(src + j) != '\0'; j++)
	{
	*(dest + j) = *(src + j);
	}

	if (*(src + j) == '\0')
	{
	*(dest + j) = *(src + j);
	}
}

return (dest);
}
