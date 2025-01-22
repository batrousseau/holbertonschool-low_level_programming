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
char *stored_name = malloc(sizeof(char) * (_strlen(name) + 1));
char *stored_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
dog_t *d = malloc(sizeof(dog_t));
int i = 0;

if (d == NULL || stored_name == NULL || stored_owner == NULL)
{
return (NULL);
}

for (i = 0; i < _strlen(name); i++)
{
*(stored_name + i) = *(name + i);
}
*(stored_name + i) = '\0';

for (i = 0; i < _strlen(owner); i++)
{
*(stored_owner + i) = *(owner + i);
}
*(stored_owner + i) = '\0';

d->name = name;
d->age = age;
d->owner = owner;

return (d);

}
