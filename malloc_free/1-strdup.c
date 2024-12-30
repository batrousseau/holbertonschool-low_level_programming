#include "main.h"
#include <stdlib.h>

/**
* _strdup - copy a string to a new block of memory
* @str: the string copied to a new block
* Return: pointer to the copied string
*
*/



char *_strdup(char *str)
{
int i = 0;
int lenght = 0;
char *s;

if (str == NULL)
{
return (NULL);
}


for (i = 0; *(str + i) != '\0'; i++)
{
}
lenght = i;

s = malloc(1 * lenght);

if (s == NULL)
{
return (NULL);
}



for (i = 0; i <= lenght; i++)
{
*(s + i) = *(str + i);
}

return (s);


}
