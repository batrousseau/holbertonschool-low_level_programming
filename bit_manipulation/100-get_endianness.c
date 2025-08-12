#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * get_endianness - check what type of endianess we are
 * dealing with
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int byte = 0;
	int adress_byte_0 = (uintptr_t) &byte;
	int adresse_byte_1 = (uintptr_t)&byte + sizeof(char);

	if (adress_byte_0 < adresse_byte_1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
