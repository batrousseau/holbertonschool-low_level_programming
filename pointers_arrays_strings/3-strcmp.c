#include "main.h"

/**
* _strcmp - compares two string and give
* the ASCII value of the character making
* the difference
* @s1: the first string
* @s2: the second string
* Return: and int
*/

int _strcmp(char *s1, char *s2)
{
int s1_lenght = 0;
int s2_lenght = 0;
int i = 0;
int final_result = 0;

for (i = 0; *(s1 + i) != '\0'; i++)
{
}
s1_lenght = i;
for (i = 0; *(s2 + i) != '\0'; i++)
{
}
s2_lenght = i;


if (s1_lenght == s2_lenght)
{
final_result = 0;
}

if (s1_lenght < s2_lenght)
{
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
	}
final_result = -*(s2 + i);
}

if (s1_lenght > s2_lenght)
{
	for (i = 0; *(s2 + i) != '\0'; i++)
	{
	}
final_result = *(s1 + i);
}

return (final_result);
}

