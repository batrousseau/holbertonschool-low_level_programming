#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 * @argc: number of argument
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int arg1 = 0;
	int arg3 = 0;
	char *arg2;
	int result = 0;
	int (*f)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
arg1 = atoi(argv[1]);
arg2 = argv[2];
arg3 = atoi(argv[3]);
f = get_op_func(arg2);

if (strlen(arg2) > 1)
{
	printf("Error\n");
	exit(99);
}


if (f == NULL)
{
	printf("Error\n");
	exit(99);
}
else
{
	result = get_op_func(arg2)(arg1, arg3);
}
printf("%d\n", result);
return (0);

}
