#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: The sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - substract two integers
 * @a: first integer
 * @b: second integer
 * Return: The substraction
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: The multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first integer
 * @b: second integer
 * Return: The division
 */

int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
else
{
	return (a / b);
}
}

/**
 * op_mod - remainder of the division of two integer
 * @a: first integer
 * @b: second integer
 * Return: The remainder
 */

int op_mod(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
else
{
	return (a % b);
}
}
