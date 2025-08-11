#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * get_bit - get the value of the bit at an index postion
 * @n: number
 * @index: bit position you want to get the value of, starting
 * at 0
 * Return: value of index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int start_byte = 1;
	int byte = 0;
	unsigned long int bite_range = sizeof(unsigned long int) * 8 - 1;

	if (index > bite_range)
	{
		return (-1);
	}
	for (i = 0; i <= bite_range; i++)
	{
		if (i == index)
		{
			if (n & start_byte)
			{
				byte = 1;
				return (byte);
			}
			else
			{
				byte = 0;
				return (byte);
			}
		}
		start_byte = start_byte << 1;
	}
	return (-1);
}

