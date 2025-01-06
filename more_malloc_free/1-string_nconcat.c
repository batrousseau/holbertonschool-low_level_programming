#include "main.h"
#include <stdlib.h>

/**
* null_rplc - verify if a string is NULL
* and replace it by blank character if it is
* @s: the string to check
* Return: a string
*/

char *null_rplc(char *s)
{
if (s == NULL)
{
s = "";
return (s);
}
return (s);

}

/**
* _strcpy - copy one string to another
* @src: the string to copy
* @dest: the new string
* @n: number of character to copy
* Return: the string copied
*/


char *_strcpy(char *src, char *dest, int n)
{
int i = 0;

for (i = 0; i <= n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);

}


/**
* _strlen - get string lenght
* @s: string to get
* Return: an int
*/

unsigned int _strlen(char *s)
{
unsigned int i = 0;
unsigned int result = 0;

for (i = 0; *(s + i) != '\0'; i++)
{
}
result = i;
return (result);
}

/**
* string_nconcat - concatenats two strings
* @s1: first string
* @s2: second string
* @n: lenght of s2 to copy
* Return: pointer to a new string,
* merged of the two strings passed as
* parameters
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int lenght_s1 = 0;
unsigned int lenght_s2 = 0;
char *sc;
unsigned int i = 0;

s1 = null_rplc(s1);
s2 = null_rplc(s2);
lenght_s1 = _strlen(s1);
lenght_s2 = _strlen(s2);

if (n >= lenght_s2)
{
	sc = malloc(lenght_s1 + lenght_s2 + sizeof(char) + 1);
	if (sc == NULL)
	{
	return (NULL);
	}
	sc = _strcpy(s1, sc, lenght_s1);
	for (i = 0 ; i < lenght_s2; i++)
	{
	*(sc + lenght_s1 + i) = *(s2 + i);
	}
	*(sc + lenght_s1 + i) = '\0';
}
else
{
	sc = malloc(lenght_s1 + n + sizeof(char) + 1);
	if (sc == NULL)
	{
	return (NULL);
	}
	sc = _strcpy(s1, sc, lenght_s1);
	for (i = 0; i < n; i++)
	{
	*(sc + lenght_s1 + i) = *(s2 + i);
	}
	*(sc + lenght_s1 + i) = '\0';
}
return (sc);
}
