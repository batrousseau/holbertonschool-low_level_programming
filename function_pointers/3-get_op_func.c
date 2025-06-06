#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - select the correct function to
 * perform the operation
 * @s: the character that gives the correct operation
 * Return: Pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i = 0;

while (i <= 4)
{
	if (*(s) == *(ops[i].op))
	{
		return (ops[i].f);
	}
	i++;
}

return (NULL);
}
