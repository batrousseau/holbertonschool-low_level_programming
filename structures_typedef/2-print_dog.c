#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_dog - print a struct dog
* @d: pointer to a structure named dog
* Return: Nothing
*
*/

void print_dog(struct dog *d)
{
float *p = &d->age;


if (d != NULL)
{
	if (d->name != NULL)
	{
	printf("Name: %s\n", d->name);
	}
	else
	{
	printf("Name: (nil)\n");
	}
	if (p != NULL)
	{
	printf("Age: %f\n", d->age);
	}
	else
	{
	printf("Age: (nil)\n");
	}
	if (d->owner != NULL)
	{
	printf("Owner: %s\n", d->owner);
	}
	else
	{
	printf("Owner: (nil)\n");
	}
}
else
{
}

}
