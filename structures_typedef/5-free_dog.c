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

char *owner = d->owner;
char *name = d->name;

free(name);
free(owner);
free(d);

}
