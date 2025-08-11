#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the int we want to mess with
 * @index: index of the bit, 0 is LSB
 * Return: 1 if ok, -1 if not ok
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 0;
unsigned int MSB = sizeof(unsigned int) * 8 - 1;
unsigned int start_byte = 1;

if (n == NULL)
{
	return (-1);
}
if (index > MSB)
{
	return (-1);
}

for (i = 0; i <= MSB; i++)
{
	if (i == index)
	{
		if (*(n) & start_byte)
		{
			return (1);
		}
		else
		{
			*n = *n + start_byte;
			return (1);
		}
	}

	start_byte = start_byte << 1;
}
return (-1);
}
