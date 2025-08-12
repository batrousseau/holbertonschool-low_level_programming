#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: reference number
 * @m: destination number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = 0;
unsigned long int lsb = 1;
unsigned long int max_range = sizeof(unsigned long int) * 8 - 1;
int bit_count = 0;
unsigned long int difference = n ^ m;

for (i = 0; i <= max_range; i++)
{
	if (difference & lsb)
	{
		bit_count = bit_count + 1;
	}

	lsb = lsb << 1;
}

return (bit_count);
}
