#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set the value of bit given by index at 0
 * @n: pointer to the int you want to change
 * @index: byte to change, starting LSB at 0
 * Return: -1 if problem; 1 if all right
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
			*n = *n - start_byte;
			return (1);
		}
		else
		{
			return (1);
		}
	}

	start_byte = start_byte << 1;
}
return (-1);
}
