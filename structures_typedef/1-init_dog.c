#include "dog.h"
#include <stddef.h>

/**
* init_dog - function that initialize a dog variable
* @d: name of the function
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: nothing
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
