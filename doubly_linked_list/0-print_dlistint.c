#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_dlistint - print lenght of a doubly linked list
 * @h: header pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;
	size_t result;


	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	result = i;

	return (result);
}
