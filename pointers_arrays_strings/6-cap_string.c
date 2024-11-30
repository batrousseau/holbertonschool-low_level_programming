#include "main.h"
/* more headers goes there */

/**
* cap1 - Do part of the cap_string job
* @s: a string
* Return: a string
*/
char *cap1(char *s)
{
int i = 0;

for (i = 0; *(s + i) != '\0'; i++)
{
	if (*(s + i) == 9 || *(s + i) == 10 || *(s + i) == 32)
	{
		if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
		{
		*(s + i + 1) = *(s + i + 1) - 32;
		}
	}

	if (*(s + i) == 33 || *(s + i) == 34 || *(s + i) == 40)
	{
		if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
		{
		*(s + i + 1) = *(s + i + 1) - 32;
		}
	}
}

return (s);

}
/**
* cap2 - Do part of the cap_string job
* @s: a string
* Return: a string
*/
char *cap2(char *s)
{

int i = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
	if (*(s + i) == 41 || *(s + i) == 44 || *(s + i) == 46)
	{
		if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
		{
		*(s + i + 1) = *(s + i + 1) - 32;
		}
	}

	if (*(s + i) == 59 || *(s + i) == 63 || *(s + i) == 123)
	{
		if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
		{
		*(s + i + 1) = *(s + i + 1) - 32;
		}
	}
}

return (s);
}



/**
* cap_string - Uppercase every word
* @s : a string
* Return: a string
*/

char *cap_string(char *s)
{
int i = 0;
char *partial = cap1(s);
char *final = cap2(partial);

if (*(final + i) >= 97 && *(final + i) <= 122)
{
*(final + i) = *(final + i) - 32;
}

return (final);
}
