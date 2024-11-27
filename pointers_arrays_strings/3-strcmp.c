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

int i = 0;
int final_result = 0;
int s1_value = 0;
int s2_value = 0;

for (i = 0; *(s1 + i) == *(s2 + i); i++)
{
	if (*(s1 +i) == '\0' && *(s2 + i) == '\0')
	{
	final_result = 0;
	return (final_result);
	}
}
s1_value = *(s1 +i);
s2_value = *(s2 +i);

final_result = s1_value - s2_value;



return (final_result);
}

