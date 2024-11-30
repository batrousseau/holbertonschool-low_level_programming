#include "main.h"
/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i = 0;
int temp = 0;

for (i = 0; i <= n ; i++, n--)
{
temp = a[i];

a[i] = a[n - 1];

a[n - 1] = temp;
}

}
