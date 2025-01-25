#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - apply a function in
* all elements of an array
* @array: the array you want the iterator
* to go throug
* @size: the size of the array
* @action: the function who actually perform
* an operation on each member of the array
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

for (i = 0; i < size; i++)
{
action(array[i]);
}

}
