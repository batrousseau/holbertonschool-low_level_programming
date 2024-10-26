#include "main.h"
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
int minus = 0;
int plus = 0;
int result = 0;

/* Getting the number */
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

/* Determining the sign of the number */
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
result = -result;
}
else if (minus == plus)
{
result = result;
}

return (result);
}
