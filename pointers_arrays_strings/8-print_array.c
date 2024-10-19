#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
* print_array - print an array of
* integers
* @a : first element of array
* @n : number of elements to print
* Return : void
*/

void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i <= n - 1 ; i++)
{
	if (i == n - 1)
	{
	printf("%d", *(a + i));
	}
	else
	{
	printf("%d, ", *(a + i));
	}
}
printf("\n");
}
