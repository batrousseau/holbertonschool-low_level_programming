#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: string number 1
* @src: string number 2
* @n : the integer that specifies
* the lenght of src copied
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
/* Getting dest lenght  */
int i = 0;
int dest_lenght = 0;
int j = 0;
int src_lenght = 0;
for (i = 0; *(dest + i) != '\0'; i++)
{
}
dest_lenght = i;

/*Getting src lenght */

for (i = 0; *(src + i) != '\0'; i++)
{
}
src_lenght = i;

/*Copying src to dest with src + n limitation */

if (src_lenght >= n)
{
	for (j = 0; j < n; j++)
	{
	*(dest + dest_lenght + j) = *(src + j);
	}
}

else
{
	for (j = 0; *(src + j) != '\0'; j++)
	{
	*(dest + dest_lenght + j) = *(src + j);
	}
}
return (dest);
}
