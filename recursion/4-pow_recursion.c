#include "main.h"

/**
* _pow_recursion - compute one number
* powers another
* @x: the number to raise
* @y: the power
* Return: the operation
*/


int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}

if (y == 1)
{
return (x);
}
else
{
return (x * _pow_recursion(x, y - 1));
}

}
