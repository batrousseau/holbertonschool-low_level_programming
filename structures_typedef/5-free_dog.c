#include <stddef.h>
#include "dog.h"
#include <stdlib.h>

/**
* free_dog - clean all memory of the structure
* @d: pointer of the structure to clean
* Return: nothing
*/

void free_dog(dog_t *d)
{

if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);

}
