#include "main.h"
/**
* sign - determine the sign of
* the number in a string
* @s : a string
* Return: 0
*/

int sign(char *s)
{
int minus = 0;
int plus = 0;
int sign = 0;

for (i = 0; *(s + i) <= 48 || *(s + i) >= 57 ; i++)
{
	if (*(s + i) == 45)
	{
	minus++;
	}
	else if (*(s + i) == 43)
	{
	plus++;
	}
}
if (minus > plus)
{
sign = -signt;
}
else if (minus == plus)
{
sign = sign;
}

return (0);
}

/**
* _atoi - convert a string to
* an integer
* @s: a string
* Return: an int
*/

int _atoi(char *s)
{
int i = 0;
int j = 0;

int result = 0;

for (j = 0; *(s + j) != '\0'; j++)
{
	if (*(s + j) >=  48 && *(s + j) <= 57)
	{
	result = result * 10 + (*(s + j) - 48);
		if (*(s + j + 1) < 48 || *(s + j + 1) > 57)
		{
		break;
		}
	}
}

sign(result);

return (result);
}
