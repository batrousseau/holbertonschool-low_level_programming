#include "main.h"
/**
* get_number - get the absolute
* value of a int in a string
* @s : a string
* Return: the number
*/

int get_number(char *s)
{
int j = 0;

int avalue = 0;

for (j = 0; *(s + j) != '\0'; j++)
{
	if (*(s + j) >=  48 && *(s + j) <= 57)
	{
	avalue = avalue * 10 + (*(s + j) - 48);
		if ((*(s + j + 1) < 48 || *(s + j + 1) > 57) || *(s + j + 1) == '\0')
		{
		break;
		}
	}
}

return (avalue);
}

/**
* _atoi - convert a string to
* an integer
* @s: a string
* Return: an int
*/

int _atoi(char *s)
{
int minus = 0;
int plus = 0;
int sign = 0;
int i = 0;

sign = get_number(s);

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
if (minus %2 == 1)
{
sign = -sign;
}
else if (minus == plus)
{
sign = sign;
}

return (sign);
}
