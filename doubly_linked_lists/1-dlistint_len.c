#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * dlistint_len - count the number of nodes
 * @h: header pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;
	size_t result;


	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	result = i;

	return (result);
}
