#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the head pointer of the doubly linked list
 * @idx: index at which to insert the new node, starting from 0
 * @n: value to insert in the new node
 *
 * Return: pointer to the head of the list, or NULL if insertion fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h;
	dlistint_t *node_before = NULL;

	if (*h == NULL)
		return (NULL);

	/* Special case: insert at the beginning of the list */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list until we reach the node at index */
	for (i = 0; tmp != NULL && i != idx; i++)
		tmp = tmp->next;

	/* Special case: insert at the end of the list */
	if (tmp == NULL)
		return (add_dnodeint_end(h, n));

	/* Insert before the node currently at index */
	node_before = tmp->prev;
	tmp = add_dnodeint(&tmp, n);
	tmp->prev = node_before;
	node_before->next = tmp;

	return (*h);
}
