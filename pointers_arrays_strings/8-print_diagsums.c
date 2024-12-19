#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print the sum of the two
* diagonals of a square matrix of integers
* @a:an array of square matrix
* @size: the square considered
* Return: nothing
*/

void print_diagsums(int *a, int size)
{

int i = 0;
int j = 0;
int diag_down = 0;

for (i = 0; i < size; i++, j++)
{
printf("The value is %d\n", a[i][j]);
diag_down = diag_down + a[i][j];
}
printf("The sum of first diag is %d", diag_down);

}
