#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _strlen - get string lenght
* @s: the string
* Return: lenght as an int
*/


int _strlen(char *s)
{
int i = 0;
int strlen = 0;

for (i = 0; *(s + i) != '\0'; i++)
{
}
strlen = i;
return (strlen);

}


/**
* new_dog - create a new dog
* @name: his name
* @age: his age
* @owner: his owner
* Return: pointer to structure
*/


dog_t *new_dog(char *name, float age, char *owner)
{

char *stored_name = malloc(sizeof(char) * _strlen(name));
char *stored_owner = malloc(sizeof(char) * _strlen(owner));
dog_t *d = malloc(sizeof(dog_t));

if (d == NULL || stored_name == NULL || stored_owner == NULL)
{
return (NULL);
}

stored_name = name;
d->name = stored_name;

d->age = age;

stored_owner = owner;
d->owner = stored_owner;

return (d);

}
