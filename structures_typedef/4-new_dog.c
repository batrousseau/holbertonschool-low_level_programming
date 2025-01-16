#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
* new_dog - create a new dog
* @name: his name
* @age: his age
* @owner: his owner
* Return: pointer to structure
*/



dog_t *new_dog(char *name, float age, char *owner)
{

dog_t new_dog;
dog_t *d = &new_dog;
float *p = &d->age;

d = malloc(sizeof(d));

if (d == NULL)
{
return (NULL);
}

if (name == NULL || owner == NULL || p == NULL)
{
return (NULL);
}

d->name = malloc(sizeof(char *));
d->name = name;

d->age = age;

d->owner = malloc(sizeof(char *));
d->owner = owner;

return (d);

}
