#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - find the integer that matches the
* condition of the function passed as parameter
* @array: an array of integer
* @size: number of element in the array
* @cmp: function that apply conditions to the integers
* Return: index of the value that matches conditions,
* -1 if nothing found
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int j = 0;
if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
j = cmp(array[i]);

	if (j != 0)
	{
	return (i);
	}

}
return (-1);


}
