#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = NULL;

    free_dog(my_dog);
    return (0);
}
