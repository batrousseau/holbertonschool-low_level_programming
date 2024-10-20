#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
* _strcpy - copy one string to another
* I guess
* @dest: where you wanna go
* @src: where you at
* Return: pointer to dest
*/


char *_strcpy(char *dest, char *src)
{


int j = 0;

for (j = 0; *(src + j) != 0 ; j++)
{
*(dest + j) = *(src + j);
}

return (dest);
}
