#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of element to create
* @size: size of each element
* Return: pointer to array
*
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *p;

if (nmemb == 0 || size == 0)
{
return (NULL);
}


p = malloc(sizeof(size) * nmemb);
if (p == NULL)
{
return (NULL);
}

for (i = 0; i < (nmemb * size); i++)
{
*(p + i) = 0;
}

return (p);
}
