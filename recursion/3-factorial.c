#include "main.h"


/**
* factorial - compute the factorial
* of a number
* @n: the number to factor
* Return: an int, the factorial
*/


int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}

}
