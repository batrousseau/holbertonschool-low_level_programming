#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenats two strings
* @s1: first string
* @s2: second string
* Return: pointer to a new string,
* merged of the two strings passed as
* parameters
*/

char *str_concat(char *s1, char *s2)
{
int lenght_s1 = 0;
int lenght_s2 = 0;
char *sc;
int i = 0;

if (s1 == NULL || s2 == NULL)
{
sc = NULL;
return (sc);
}

for (i = 0; *(s1 + i) != '\0'; i++)
{
}
lenght_s1 = i;

for (i = 0; *(s2 + i) != '\0'; i++)
{
}
lenght_s2 = i + 1;

sc = malloc(lenght_s1 + lenght_s2);

if (sc == NULL)
{
return (NULL);
}

for (i = 0; i <= lenght_s1; i++)
{
*(sc + i) = *(s1 + i);
}

for (i = 0 ; i < lenght_s2; i++)
{
*(sc + lenght_s1 + i) = *(s2 + i);
}

return (sc);
}
