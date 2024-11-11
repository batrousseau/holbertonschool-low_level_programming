#include "main.h"

/* more headers goes there */

/**
* _strcat - concatenate two strings
* @dest: string number 1
* @src: string number 2
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
/* Getting dest lenght  */
int i = 0;
int dest_lenght = 0;
int j = 0;

for (i = 0; *(dest + i) != '\0'; i++)
{
}
dest_lenght = i;


/* Copying src to dest with  dest lenght delta */

for (j = 0; *(src + j) != '\0'; j++)
{
*(dest + dest_lenght + j) = *(src + j);
}

/* Adding nullbyte at the end of dest string */

if (*(src + j) == '\0')
{
*(dest + dest_lenght + j) = *(src + j);
}

return (dest);
}
