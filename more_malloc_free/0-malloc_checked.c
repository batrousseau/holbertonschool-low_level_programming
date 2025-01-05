#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: the amount of memory to allocates in bytes
* Return: pointer to the allocated memory
*/


void *malloc_checked(unsigned int b)
{

void *p = malloc(b);

if (p == NULL)
{
return(p);
}

return(p);

}
