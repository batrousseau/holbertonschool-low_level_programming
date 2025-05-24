#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Return the number of element in a linked list
 * @h: first element of the list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
int i = 0;
int result = 0;

for (i = 0; h != NULL; i++)
{
	h = h->next;
}

result = i;
return (result);
}
