#include "main.h"

/**
 * _sqrt_helper - helper function to calculate sqrt recursively
 * @n: the number to find the square root of
 * @i: the current number to test as a potential square root
 * Return: the natural square root, or -1 if it does not exist
 */

int _sqrt_helper(int n, int i)
{
if (i * i > n)
{
return (-1);
}

if (i * i == n)
{
return (i);
}

return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root, or -1 if it does not exist
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (_sqrt_helper(n, 1));
}

