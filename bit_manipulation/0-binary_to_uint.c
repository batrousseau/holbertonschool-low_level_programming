#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary numer to an unsigned int
 * @b: pointer to a string containing only 0 and 1
 * Return: converter number or 0 if not only 0 & 1 in string OR
 * b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = 0;
	unsigned int result = 0;
	int count = 0;
	unsigned int byte = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; *(b + i + 1) != '\0'; i++)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
		{
			return (0);
		}

	}
	count = i;

	for (i = count, j = 0; i >= 0; i--, j++)
	{
	byte = *(b + i) - 48;
		if (byte == 1 && i <= 31)
		{
			result = result + (byte << j);
		}
	}
	return (result);
}
