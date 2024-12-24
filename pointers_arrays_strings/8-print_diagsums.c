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
int size_square = size * size;
int diag_down = 0;
int rev_diag = 0;

/* Doing the first diag of interval size + 1 */

for (i = 0; i < size_square; i += (size + 1))
{
diag_down = diag_down + *(a + i);
}
printf("%d, ", diag_down);




/*Doing the other diag of interval size - 1*/

for (i = (size - 1); i < (size_square - 1); i += (size - 1))
{
rev_diag = rev_diag + *(a + i);
}
printf("%d\n", rev_diag);

}
