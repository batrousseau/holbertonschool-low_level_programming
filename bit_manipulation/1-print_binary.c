#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_binary - print the binary representation
 * of a number
 * @n: unsigned long int
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	char byte;
	unsigned long int one_byte = 1UL << (sizeof(unsigned long) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; one_byte != 0; i++)
	{
		if (n & one_byte)
		{
			break;
		}
		else
		{
			one_byte = one_byte >> 1;
		}
	}

	for (i = 0; one_byte != 0; i++)
	{
		if (n & one_byte)
		{
			byte = 1;
			_putchar(byte + 48);
		}
		else
		{
			byte = 0;
			_putchar(byte + 48);
		}
		one_byte =  one_byte >> 1;
	}
}


