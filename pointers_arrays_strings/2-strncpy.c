#include "main.h"
/**
* getting_src_lenght - get src lenght
* @src : what you have
* Return: src_lenght as an int
*/

int getting_src_lenght(char *src)
{
int i = 0;
int src_lenght = 0;

for (i = 0; *(src + i) != '\0'; i++)
{
}
src_lenght = i;
return (src_lenght);
}

/**
* getting_dest_lenght - get dest lenght
* @dest : what you want to copy
* Return: dest_lenght as an int
*/

int getting_dest_lenght(char *dest)
{
int k = 0;
int dest_lenght = 0;

for (k = 0; *(dest + k) != '\0'; k++)
{
}
dest_lenght = k;
return (dest_lenght);
}

/**
* _strncpy - copy one string to another
* @dest: what you have
* @src: what you wan't to copy
* @n : an int
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

int src_lenght = getting_src_lenght(src);
int dest_lenght = getting_dest_lenght(dest);

/* If I don't copy the entire src, I don't care about null character*/

if (src_lenght >= n)
{

	for (j = 0; j < n; j++)
	{
	*(dest + j) = *(src + j);
	}
}

/* If I must copy the entire src, then I must clear the memory of dest*/
else
{
	for (j = 0 ; *(src + j) != '\0'; j++)
	{
	*(dest + j) = *(src + j);
	}
	for (j = src_lenght ; j <= dest_lenght; j++)
	{
	*(dest + j) = '\0';
	}
}

return (dest);
}
